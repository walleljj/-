/****************************************************************************
** Meta object code from reading C++ file 'gxtxl_3.h'
**
** Created: Tue Jul 10 09:26:21 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gxtxl_3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gxtxl_3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GXTXL_3[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,    9,    8,    8, 0x0a,
      31,    9,    8,    8, 0x0a,
      58,   46,    8,    8, 0x0a,
     102,   98,    8,    8, 0x0a,
     118,    8,    8,    8, 0x0a,
     131,    8,    8,    8, 0x0a,
     144,    8,    8,    8, 0x0a,
     151,    8,    8,    8, 0x0a,
     162,    8,    8,    8, 0x0a,
     176,    8,    8,    8, 0x0a,
     192,   98,    8,    8, 0x0a,
     210,    8,    8,    8, 0x0a,
     223,    8,    8,    8, 0x0a,
     236,    8,    8,    8, 0x0a,
     253,    8,    8,    8, 0x0a,
     266,    8,    8,    8, 0x0a,
     282,   98,    8,    8, 0x0a,
     302,    8,    8,    8, 0x0a,
     310,    8,    8,    8, 0x0a,
     317,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GXTXL_3[] = {
    "GXTXL_3\0\0checked\0OnCheck(bool)\0"
    "Oncheck2(bool)\0item,column\0"
    "OnDoubleCheckItem(QTreeWidgetItem*,int)\0"
    "pos\0popMenu(QPoint)\0deleteItem()\0"
    "renameWell()\0chSt()\0OnAddStu()\0"
    "OnLookClass()\0OnLookStudent()\0"
    "classMenu(QPoint)\0OnDelClass()\0"
    "OnUpdClass()\0OnUpdClassMain()\0"
    "OnAddClass()\0OnLookMassage()\0"
    "massageMenu(QPoint)\0delMa()\0upMa()\0"
    "changeMa()\0"
};

const QMetaObject GXTXL_3::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GXTXL_3,
      qt_meta_data_GXTXL_3, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GXTXL_3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GXTXL_3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GXTXL_3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GXTXL_3))
        return static_cast<void*>(const_cast< GXTXL_3*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GXTXL_3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnCheck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: Oncheck2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: OnDoubleCheckItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: popMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: deleteItem(); break;
        case 5: renameWell(); break;
        case 6: chSt(); break;
        case 7: OnAddStu(); break;
        case 8: OnLookClass(); break;
        case 9: OnLookStudent(); break;
        case 10: classMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: OnDelClass(); break;
        case 12: OnUpdClass(); break;
        case 13: OnUpdClassMain(); break;
        case 14: OnAddClass(); break;
        case 15: OnLookMassage(); break;
        case 16: massageMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 17: delMa(); break;
        case 18: upMa(); break;
        case 19: changeMa(); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
