/* -*- C++ -*- */

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

#ifndef FIX_EXCEPT_H
#define FIX_EXCEPT_H

#if !defined(__cpp_noexcept_function_type) && defined(__cplusplus)
#if __cplusplus > 201703L
#define __cpp_noexcept_function_type 1
#endif
#endif

#ifdef __cpp_noexcept_function_type
#define NOEXCEPT noexcept
#define EXCEPT(...)
#else
#define NOEXCEPT throw()
#define EXCEPT(...) throw(__VA_ARGS__)
#endif

#endif
