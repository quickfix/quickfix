/****************************************************************************
** Copyright (c) 2001-2014
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

#include "FieldTypes.h"

#ifdef HAVE_FTIME
# include <sys/timeb.h>
#endif

#ifdef __MACH__
# include <mach/clock.h>
# include <mach/mach.h>
#endif

namespace FIX {

DateTime DateTime::nowUtc()
{
#if defined( HAVE_CLOCK_GETTIME )
    struct timespec tspec;
    clock_gettime(CLOCK_REALTIME, &tspec );
    return fromUtcTimeT( static_cast<time_t>(tspec.tv_sec), static_cast<int>(tspec.tv_nsec));
#elif defined( __MACH__ )
    struct timespec ts;
    clock_serv_t cclock;
    mach_timespec_t mts;

    host_get_clock_service(mach_host_self(), CALENDAR_CLOCK, &cclock);
    clock_get_time(cclock, &mts);
    mach_port_deallocate(mach_task_self(), cclock);

    ts.tv_sec = mts.tv_sec;
    ts.tv_nsec = mts.tv_nsec;
    return fromUtcTimeT(static_cast<time_t>(ts.tv_sec), static_cast<int>(ts.tv_nsec));
#elif defined( HAVE_FTIME )
    timeb tb;
    ftime (&tb);
    return fromUtcTimeT (tb.time,  static_cast<int>(tb.millitm * NANOSECONDS_PER_MILLISECOND));
#elif defined( _POSIX_SOURCE )
    struct timeval tv;
    gettimeofday (&tv, 0);
    return fromUtcTimeT( tv.tv_sec,  static_cast<int>(tv.tv_usec * NANOSECONDS_PER_MICROSECOND) );
#else
    return fromUtcTimeT( ::time (0), 0 );
#endif
}

DateTime DateTime::nowLocal()
{
#if defined( HAVE_CLOCK_GETTIME )
    struct timespec tspec;
    clock_gettime(CLOCK_REALTIME, &tspec );
    return fromLocalTimeT( static_cast<time_t>(tspec.tv_sec),  static_cast<int>(tspec.tv_nsec));
#elif defined( __MACH__ )
    struct timespec ts;
    clock_serv_t cclock;
    mach_timespec_t mts;

    host_get_clock_service(mach_host_self(), CALENDAR_CLOCK, &cclock);
    clock_get_time(cclock, &mts);
    mach_port_deallocate(mach_task_self(), cclock);

    ts.tv_sec = mts.tv_sec;
    ts.tv_nsec = mts.tv_nsec;
    return fromUtcTimeT(static_cast<time_t>(ts.tv_sec), static_cast<int>(ts.tv_nsec));
#elif defined( HAVE_FTIME )
    timeb tb;
    ftime (&tb);
    return fromLocalTimeT( tb.time,  static_cast<int>(tb.millitm * NANOSECONDS_PER_MILLISECOND));
#elif defined( _POSIX_SOURCE )
    struct timeval tv;
    gettimeofday (&tv, 0);
    return fromLocalTimeT( tv.tv_sec,  static_cast<int>(tv.tv_usec * NANOSECONDS_PER_MICROSECOND) );
#else
    return fromLocalTimeT( ::time (0), 0 );
#endif
}

}
