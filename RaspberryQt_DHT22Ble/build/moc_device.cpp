/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Device_t {
    QByteArrayData data[48];
    char stringdata0[647];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Device_t qt_meta_stringdata_Device = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Device"
QT_MOC_LITERAL(1, 7, 6), // "dataRx"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4), // "data"
QT_MOC_LITERAL(4, 20, 8), // "bleError"
QT_MOC_LITERAL(5, 29, 4), // "info"
QT_MOC_LITERAL(6, 34, 9), // "connected"
QT_MOC_LITERAL(7, 44, 12), // "disconnected"
QT_MOC_LITERAL(8, 57, 14), // "devicesUpdated"
QT_MOC_LITERAL(9, 72, 13), // "updateChanged"
QT_MOC_LITERAL(10, 86, 9), // "writeData"
QT_MOC_LITERAL(11, 96, 7), // "strData"
QT_MOC_LITERAL(12, 104, 15), // "clearDeviceList"
QT_MOC_LITERAL(13, 120, 9), // "addDevice"
QT_MOC_LITERAL(14, 130, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(15, 151, 3), // "dev"
QT_MOC_LITERAL(16, 155, 12), // "scanFinished"
QT_MOC_LITERAL(17, 168, 15), // "deviceScanError"
QT_MOC_LITERAL(18, 184, 37), // "QBluetoothDeviceDiscoveryAgen..."
QT_MOC_LITERAL(19, 222, 1), // "e"
QT_MOC_LITERAL(20, 224, 17), // "serviceDiscovered"
QT_MOC_LITERAL(21, 242, 14), // "QBluetoothUuid"
QT_MOC_LITERAL(22, 257, 15), // "serviceScanDone"
QT_MOC_LITERAL(23, 273, 15), // "controllerError"
QT_MOC_LITERAL(24, 289, 27), // "QLowEnergyController::Error"
QT_MOC_LITERAL(25, 317, 15), // "deviceConnected"
QT_MOC_LITERAL(26, 333, 18), // "deviceDisconnected"
QT_MOC_LITERAL(27, 352, 19), // "serviceStateChanged"
QT_MOC_LITERAL(28, 372, 31), // "QLowEnergyService::ServiceState"
QT_MOC_LITERAL(29, 404, 1), // "s"
QT_MOC_LITERAL(30, 406, 10), // "updateData"
QT_MOC_LITERAL(31, 417, 24), // "QLowEnergyCharacteristic"
QT_MOC_LITERAL(32, 442, 1), // "c"
QT_MOC_LITERAL(33, 444, 5), // "value"
QT_MOC_LITERAL(34, 450, 24), // "confirmedDescriptorWrite"
QT_MOC_LITERAL(35, 475, 20), // "QLowEnergyDescriptor"
QT_MOC_LITERAL(36, 496, 1), // "d"
QT_MOC_LITERAL(37, 498, 17), // "connectionUpdated"
QT_MOC_LITERAL(38, 516, 30), // "QLowEnergyConnectionParameters"
QT_MOC_LITERAL(39, 547, 13), // "newParameters"
QT_MOC_LITERAL(40, 561, 9), // "startScan"
QT_MOC_LITERAL(41, 571, 12), // "startConnect"
QT_MOC_LITERAL(42, 584, 4), // "addr"
QT_MOC_LITERAL(43, 589, 13), // "disconnectBle"
QT_MOC_LITERAL(44, 603, 11), // "isConnected"
QT_MOC_LITERAL(45, 615, 12), // "isConnecting"
QT_MOC_LITERAL(46, 628, 11), // "devicesList"
QT_MOC_LITERAL(47, 640, 6) // "update"

    },
    "Device\0dataRx\0\0data\0bleError\0info\0"
    "connected\0disconnected\0devicesUpdated\0"
    "updateChanged\0writeData\0strData\0"
    "clearDeviceList\0addDevice\0"
    "QBluetoothDeviceInfo\0dev\0scanFinished\0"
    "deviceScanError\0QBluetoothDeviceDiscoveryAgent::Error\0"
    "e\0serviceDiscovered\0QBluetoothUuid\0"
    "serviceScanDone\0controllerError\0"
    "QLowEnergyController::Error\0deviceConnected\0"
    "deviceDisconnected\0serviceStateChanged\0"
    "QLowEnergyService::ServiceState\0s\0"
    "updateData\0QLowEnergyCharacteristic\0"
    "c\0value\0confirmedDescriptorWrite\0"
    "QLowEnergyDescriptor\0d\0connectionUpdated\0"
    "QLowEnergyConnectionParameters\0"
    "newParameters\0startScan\0startConnect\0"
    "addr\0disconnectBle\0isConnected\0"
    "isConnecting\0devicesList\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Device[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       2,  200, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       4,    1,  147,    2, 0x06 /* Public */,
       6,    0,  150,    2, 0x06 /* Public */,
       7,    0,  151,    2, 0x06 /* Public */,
       8,    0,  152,    2, 0x06 /* Public */,
       9,    0,  153,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  154,    2, 0x0a /* Public */,
      10,    1,  157,    2, 0x0a /* Public */,
      12,    0,  160,    2, 0x0a /* Public */,
      13,    1,  161,    2, 0x08 /* Private */,
      16,    0,  164,    2, 0x08 /* Private */,
      17,    1,  165,    2, 0x08 /* Private */,
      20,    1,  168,    2, 0x08 /* Private */,
      22,    0,  171,    2, 0x08 /* Private */,
      23,    1,  172,    2, 0x08 /* Private */,
      25,    0,  175,    2, 0x08 /* Private */,
      26,    0,  176,    2, 0x08 /* Private */,
      27,    1,  177,    2, 0x08 /* Private */,
      30,    2,  180,    2, 0x08 /* Private */,
      34,    2,  185,    2, 0x08 /* Private */,
      37,    1,  190,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      40,    0,  193,    2, 0x02 /* Public */,
      41,    1,  194,    2, 0x02 /* Public */,
      43,    0,  197,    2, 0x02 /* Public */,
      44,    0,  198,    2, 0x02 /* Public */,
      45,    0,  199,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 31, QMetaType::QByteArray,   32,   33,
    QMetaType::Void, 0x80000000 | 35, QMetaType::QByteArray,   36,   33,
    QMetaType::Void, 0x80000000 | 38,   39,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
      46, QMetaType::QVariant, 0x00495001,
      47, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       4,
       5,

       0        // eod
};

void Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataRx((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->bleError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->connected(); break;
        case 3: _t->disconnected(); break;
        case 4: _t->devicesUpdated(); break;
        case 5: _t->updateChanged(); break;
        case 6: _t->writeData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->writeData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->clearDeviceList(); break;
        case 9: _t->addDevice((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 10: _t->scanFinished(); break;
        case 11: _t->deviceScanError((*reinterpret_cast< QBluetoothDeviceDiscoveryAgent::Error(*)>(_a[1]))); break;
        case 12: _t->serviceDiscovered((*reinterpret_cast< const QBluetoothUuid(*)>(_a[1]))); break;
        case 13: _t->serviceScanDone(); break;
        case 14: _t->controllerError((*reinterpret_cast< QLowEnergyController::Error(*)>(_a[1]))); break;
        case 15: _t->deviceConnected(); break;
        case 16: _t->deviceDisconnected(); break;
        case 17: _t->serviceStateChanged((*reinterpret_cast< QLowEnergyService::ServiceState(*)>(_a[1]))); break;
        case 18: _t->updateData((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 19: _t->confirmedDescriptorWrite((*reinterpret_cast< const QLowEnergyDescriptor(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 20: _t->connectionUpdated((*reinterpret_cast< const QLowEnergyConnectionParameters(*)>(_a[1]))); break;
        case 21: _t->startScan(); break;
        case 22: _t->startConnect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->disconnectBle(); break;
        case 24: { bool _r = _t->isConnected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->isConnecting();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothUuid >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyController::Error >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceState >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyCharacteristic >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyDescriptor >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Device::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::dataRx)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Device::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::bleError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::connected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::disconnected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::devicesUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::updateChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->getDevices(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getUpdate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setUpdate(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Device::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Device.data,
    qt_meta_data_Device,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Device.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Device::dataRx(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Device::bleError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Device::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Device::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Device::devicesUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Device::updateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
