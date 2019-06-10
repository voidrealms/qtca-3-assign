#ifndef DOG_GLOBAL_H
#define DOG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DOG_LIBRARY)
#  define DOGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DOGSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DOG_GLOBAL_H
