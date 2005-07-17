/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "FieldTypes.h"

#ifdef HAVE_FTIME
# include <sys/timeb.h>
#endif

namespace FIX {

DateTime
DateTime::now ()
{
#if defined (HAVE_FTIME)
    timeb tb;
    ftime (&tb);
    return fromTimeT (tb.time, tb.millitm);
#elif defined (_POSIX_SOURCE)
    struct timeval tv;
    gettimeofday (&tv, 0);
    return fromTimeT (tv.tv_sec, tv.tv_usec / 1000);
#else
    return fromTimeT (::time (0), 0);
#endif
}

}
