#ifndef CARDREADER_GLOBAL_H
#define CARDREADER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CARDREADER_LIBRARY)
#  define CARDREADER_EXPORT Q_DECL_EXPORT
#else
#  define CARDREADER_EXPORT Q_DECL_IMPORT
#endif

#endif // CARDREADER_GLOBAL_H
