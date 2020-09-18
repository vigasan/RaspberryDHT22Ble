#include "bridge.h"
#include <QDebug>

Bridge::Bridge(QObject *parent) : QObject(parent)
{
}

void Bridge::deviceConnected()
{
    qDebug() << "CONNESSO!!!";
}

void Bridge::deviceDisconnected()
{
    qDebug() << "DISCONNESSO!!!";
    emit connectionChanged(DEVICE_DISCONNECTED);
}

void Bridge::dataReceived(QByteArray receivedData)
{
    if(receivedData.count() == 4)
    {
        int temperature = int((receivedData[0] << 8) | (receivedData[1]));
        int humidity = int((receivedData[2] << 8) | (receivedData[3]));
        emit sensorData(temperature, humidity);
    }
}

