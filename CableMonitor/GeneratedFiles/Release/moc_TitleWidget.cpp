/****************************************************************************
** Meta object code from reading C++ file 'TitleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainForm/TitleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TitleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TitleWidget_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TitleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TitleWidget_t qt_meta_stringdata_TitleWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TitleWidget"
QT_MOC_LITERAL(1, 12, 23), // "ShowMinimizedBtnClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "CloseWindowBtnClicked"
QT_MOC_LITERAL(4, 59, 14), // "ToolBtnClicked"
QT_MOC_LITERAL(5, 74, 5), // "index"
QT_MOC_LITERAL(6, 80, 8), // "ShowMenu"
QT_MOC_LITERAL(7, 89, 11), // "SettingSlot"
QT_MOC_LITERAL(8, 101, 16), // "AlarmStaQuerSlot"
QT_MOC_LITERAL(9, 118, 9), // "AboutSlot"
QT_MOC_LITERAL(10, 128, 16), // "SettingDestroyed"
QT_MOC_LITERAL(11, 145, 19), // "AlarmQueryDestroyed"
QT_MOC_LITERAL(12, 165, 14) // "AboutDestroyed"

    },
    "TitleWidget\0ShowMinimizedBtnClicked\0"
    "\0CloseWindowBtnClicked\0ToolBtnClicked\0"
    "index\0ShowMenu\0SettingSlot\0AlarmStaQuerSlot\0"
    "AboutSlot\0SettingDestroyed\0"
    "AlarmQueryDestroyed\0AboutDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TitleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TitleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TitleWidget *_t = static_cast<TitleWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowMinimizedBtnClicked(); break;
        case 1: _t->CloseWindowBtnClicked(); break;
        case 2: _t->ToolBtnClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ShowMenu(); break;
        case 4: _t->SettingSlot(); break;
        case 5: _t->AlarmStaQuerSlot(); break;
        case 6: _t->AboutSlot(); break;
        case 7: _t->SettingDestroyed(); break;
        case 8: _t->AlarmQueryDestroyed(); break;
        case 9: _t->AboutDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TitleWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleWidget::ShowMinimizedBtnClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (TitleWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleWidget::CloseWindowBtnClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (TitleWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleWidget::ToolBtnClicked)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject TitleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TitleWidget.data,
      qt_meta_data_TitleWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TitleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TitleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TitleWidget.stringdata0))
        return static_cast<void*>(const_cast< TitleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TitleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TitleWidget::ShowMinimizedBtnClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TitleWidget::CloseWindowBtnClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TitleWidget::ToolBtnClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
