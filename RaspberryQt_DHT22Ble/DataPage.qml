import QtQuick 2.12
import QtQuick.Controls 2.12

Rectangle
{
    id:dataPage
    color: "transparent"

    property bool connected: true


    Timer
    {
        interval: 1000 // 1 second
        running: true
        repeat: true
        onTriggered:
        {
            time.text = Qt.formatDateTime(new Date(), "hh:mm:ss")
            date.text = Qt.formatDateTime(new Date(), "dddd dd MMMM")
        }
    }


    ///////////////////////////////////////////////////////////////////////////////
    // Date Time
    ///////////////////////////////////////////////////////////////////////////////
    Rectangle
    {
        id: rectDateTime
        width: parent.width
        height: 300
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        color: "transparent"

        // Time
        Rectangle
        {
            id: rectTime
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.top
            anchors.topMargin: 60
            width: parent.width
            height: 100
            color: "transparent"

            Text {
                id: time
                text: qsTr("10:25")
                anchors.centerIn: parent
                color: "white"
                font.pointSize: 110
                font.family: fontOpenSans.name
            }
        }

        Rectangle
        {
            id: rectDate
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: rectTime.bottom
            anchors.topMargin: 30
            width: parent.width
            height: 60
            color: "transparent"

            Text {
                id: date
                text: qsTr("March 25 2020")
                anchors.centerIn: parent
                color: "white"
                font.pointSize: 25
                font.family: fontOpenSans.name
            }
        }
    }

    Rectangle
    {
        id: horizontalLine
        width: 800
        height: 1
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: rectDateTime.bottom
        color: "transparent"
        border.color: "white"
        border.width: 1

    }

    Rectangle
    {
        id: verticalLine
        width: 1
        height: 180
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: rectDateTime.bottom
        color: "transparent"
        border.color: "white"
        border.width: 1
        visible: connected
    }

    ///////////////////////////////////////////////////////////////////////////////
    // Temperature and Humidity
    ///////////////////////////////////////////////////////////////////////////////

    Rectangle
    {
        id: rectTemperature
        width: 400
        height: 180
        anchors.left: parent.left
        anchors.top: rectDateTime.bottom
        color: "transparent"
        visible: connected

        Image
        {
            id: imgTemp
            anchors.left: parent.left
            anchors.leftMargin: 40
            anchors.verticalCenter: parent.verticalCenter
            source: "qrc:/images/temperature.png"
        }

        Text
        {
            id: txtTemperature
            text: "--.-- °C"
            anchors.left: imgTemp.right
            anchors.leftMargin: 20
            anchors.verticalCenter: parent.verticalCenter
            color: "white"
            font.pointSize: 45
            font.family: fontOpenSans.name
        }
    }

    Rectangle
    {
        id: rectHumidity
        width: 400
        height: 180
        anchors.right: parent.right
        anchors.top: rectDateTime.bottom
        color: "transparent"
        visible: connected

        Image
        {
            id: imgHumidity
            anchors.left: parent.left
            anchors.leftMargin: 40
            anchors.verticalCenter: parent.verticalCenter
            source: "qrc:/images/droplet.png"
        }

        Text
        {
            id: txtHumidity
            text: "--.-- %"
            anchors.left: imgHumidity.right
            anchors.leftMargin: 20
            anchors.verticalCenter: parent.verticalCenter
            color: "white"
            font.pointSize: 45
            font.family: fontOpenSans.name
        }
    }

    Rectangle
    {
        id: btnConnect
        width: 100
        height: 40
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        color: "transparent"
        border.width: 1
        border.color: "gray"
        radius: 8
        visible: false

        Text
        {
            id: name
            anchors.centerIn: parent
            text: qsTr("CONNECT")
            color: "white"
            font.pointSize: 12
        }

        MouseArea
        {
            anchors.fill: parent
            onPressed:
            {
                btnConnect.color = "gray";
                rootPage.reqScanPage();
                btnConnect.visible = false;
                txtConnection.text = ""
            }
            onReleased:
            {
                btnConnect.color = "transparent";
            }

        }
    }


    Text
    {
        id: txtConnection
        text: ""
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 100
        color: "white"
        font.family: typeFont_Bold.name
        font.pointSize: 20
    }

    Image
    {
        id: imgBluetooth
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: rectTemperature.top
        anchors.bottomMargin: 10
        source: "qrc:/images/bluetooth.png"
        visible: false
    }

    Timer
    {
        id: imgTimer
        interval: 400
        running: false
        repeat: false
        onTriggered:
        {
            imgBluetooth.visible = false
        }
    }



    Connections
    {
        target: appBridge

        onSensorData:
        {
            txtTemperature.text = (temp / 10).toFixed(2) + " °C"
            txtHumidity.text = (hum / 10).toFixed(2) + " %"
            imgBluetooth.visible = true
            imgTimer.start()
        }


        onConnectionChanged:
        {
          connected = false
          btnConnect.visible = true;
          txtConnection.text = "Sensor Disconnected"
        }
    }
}
