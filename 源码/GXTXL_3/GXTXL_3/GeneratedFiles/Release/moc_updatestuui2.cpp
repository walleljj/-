/****************************************************************************
** Meta object code from reading C++ file 'updatestuui2.h'
**
** Created: Tue Jul 10 14:34:30 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../updatestuui2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatestuui2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_updatestuui2[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      24,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_updatestuui2[] = {
    "updatestuui2\0\0onBtnOK()\0onBtnCancel()\0"
};

const QMetaObject updatestuui2::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_updatestuui2,
      qt_meta_data_updatestuui2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &updatestuui2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *updatestuui2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *updatestuui2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_updatestuui2))
        return static_cast<void*>(const_cast< updatestuui2*>(this));
    return QDialog::qt_metacast(_clname);
}

int updatestuui2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onBtnOK(); break;
        case 1: onBtnCancel(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
