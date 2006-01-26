/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "FileUtilitiesTestCase.h"

namespace FIX
{
void FileUtilitiesTestCase::separator::onRun( int& )
{
#ifdef _MSC_VER
  assert( "\\" == file_separator() );
#else
  assert( "/" == file_separator() );
#endif
}

void FileUtilitiesTestCase::appendpath::onRun( int& )
{
  assert( ("path" + file_separator() + "file") == file_appendpath("path", "file") );
  assert( "path/file" == file_appendpath("path/", "file") );
  assert( "path\\file" == file_appendpath("path\\", "file") );
}
}
