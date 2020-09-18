#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>
#include "DHT.h"

// See the following for generating UUIDs:   https://www.uuidgenerator.net/
#define SERVICE_UUID           "6E400001-B5A3-F393-E0A9-E50E24DCCA9E" // UART service UUID
#define CHARACTERISTIC_UUID_RX "6E400002-B5A3-F393-E0A9-E50E24DCCA9E"
#define CHARACTERISTIC_UUID_TX "6E400003-B5A3-F393-E0A9-E50E24DCCA9E"

const int           DHTPIN = 22;

BLEServer          *g_pServer = NULL;
BLECharacteristic  *g_pTxCharacteristic;
bool                g_deviceConnected = false;
byte                g_OutputBuffer[10];
DHT                 g_dht(DHTPIN, DHT22);
float               g_Humidity = 0.0;
float               g_Temperature = 0.0;
unsigned long       g_Time = 0;


class MyServerCallbacks: public BLEServerCallbacks 
{
    void onConnect(BLEServer* g_pServer) 
    {
      g_deviceConnected = true;
    };

    void onDisconnect(BLEServer* g_pServer) 
    {
      g_deviceConnected = false;
    }
};

void setup() 
{
    int count = 0;
    Serial.begin(115200);
    delay(200);

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // DHT22 Sensor Initialization
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    g_dht.begin();
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Bluetooth Low Energy Initialization
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    BLEDevice::init("DHT22"); // BLE Device Name
    
    // Create the BLE Server
    g_pServer = BLEDevice::createServer();
    g_pServer->setCallbacks(new MyServerCallbacks());
    
    // Create the BLE Service
    BLEService *pService = g_pServer->createService(SERVICE_UUID);
    
    // Create a BLE Characteristic
    g_pTxCharacteristic = pService->createCharacteristic(CHARACTERISTIC_UUID_TX, BLECharacteristic::PROPERTY_NOTIFY);            
    g_pTxCharacteristic->addDescriptor(new BLE2902());
    
    // Start the service
    pService->start();
    
    // Start advertising
    g_pServer->getAdvertising()->start();
    Serial.println("Waiting a client connection...");
}


void loop() 
{
    if(millis() > g_Time + 3000)    // Reads data every 3 seconds
    {
        g_Time = millis();

        g_Temperature = g_dht.readTemperature();
        Serial.print("Temperature: ");
        Serial.print(g_Temperature);
        Serial.println(" °C");
        
        g_Humidity = g_dht.readHumidity();
        Serial.print("Humidity: ");
        Serial.print(g_Humidity);
        Serial.println(" %");
        Serial.println(" ");

        if(g_deviceConnected) 
        {
            byte dataToSend = 0;
            int tempX10 = (int)(g_Temperature * 10);
            int humX10 = (int)(g_Humidity * 10);

            g_OutputBuffer[dataToSend++] = (tempX10 & 0xFF00) >> 8;
            g_OutputBuffer[dataToSend++] = (tempX10 & 0x00FF);
            g_OutputBuffer[dataToSend++] = (humX10 & 0xFF00) >> 8;
            g_OutputBuffer[dataToSend++] = (humX10 & 0x00FF);

            g_pTxCharacteristic->setValue(g_OutputBuffer, dataToSend);
            g_pTxCharacteristic->notify();
        }
    }
}
