/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.5.1
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/kunal/New_Screen/Animation800x480/main.qml
  0x0,0x0,0x0,0x2e,
  0x69,
  0x6d,0x70,0x6f,0x72,0x74,0x20,0x51,0x74,0x51,0x75,0x69,0x63,0x6b,0xd,0xa,0x69,
  0x6d,0x70,0x6f,0x72,0x74,0x20,0x63,0x6f,0x6e,0x74,0x65,0x6e,0x74,0xd,0xa,0xd,
  0xa,0x41,0x70,0x70,0x20,0x7b,0xd,0xa,0x7d,0xd,0xa,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // Main
  0x0,0x4,
  0x0,0x5,0x37,0xfe,
  0x0,0x4d,
  0x0,0x61,0x0,0x69,0x0,0x6e,
    // main.qml
  0x0,0x8,
  0x8,0x1,0x5a,0x5c,
  0x0,0x6d,
  0x0,0x61,0x0,0x69,0x0,0x6e,0x0,0x2e,0x0,0x71,0x0,0x6d,0x0,0x6c,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/Main
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/Main/main.qml
  0x0,0x0,0x0,0xe,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x89,0xb,0x25,0x1d,0x28,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_Animation800x480App_raw_qml_0)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_Animation800x480App_raw_qml_0)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_Animation800x480App_raw_qml_0)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_Animation800x480App_raw_qml_0)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

#ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wexit-time-destructors"
#endif

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_Animation800x480App_raw_qml_0)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_Animation800x480App_raw_qml_0)(); }
   } dummy;
}

#ifdef __clang__
#   pragma clang diagnostic pop
#endif