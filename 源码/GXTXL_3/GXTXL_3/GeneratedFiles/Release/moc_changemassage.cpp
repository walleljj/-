/****************************************************************************
** Meta object code from reading C++ file 'changemassage.h'
**
** Created: Tue Jul 10 14:34:32 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../changemassage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changemassage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChangeMassage[] = {

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
      15,   14,   14,   14, 0x0a,
      26,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChangeMassage[] = {
    "ChangeMassage\0\0onBtnOK1()\0onBtnCancel1()\0"
};

const QMetaObject ChangeMassage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChangeMassage,
      qt_meta_data_ChangeMassage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChangeMassage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChangeMassage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChangeMassage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeMassage))
        return static_cast<void*>(const_cast< ChangeMassage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChangeMassage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onBtnOK1(); break;
        case 1: onBtnCancel1(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
