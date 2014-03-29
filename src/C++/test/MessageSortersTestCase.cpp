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
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <UnitTest++.h>
#include "MessageSorters.h"

namespace FIX
{

TEST(headerOrder)
{
  CHECK( !header_order::compare(FIELD::BeginString, FIELD::BeginString) );
  CHECK( header_order::compare(FIELD::BeginString, FIELD::BodyLength) );
  CHECK( header_order::compare(FIELD::BeginString, FIELD::MsgType) );
  CHECK( header_order::compare(FIELD::BeginString, 1) );
  CHECK( header_order::compare(FIELD::BeginString, 100) );
  CHECK( header_order::compare(FIELD::BeginString, 0) );

  CHECK( !header_order::compare(FIELD::BodyLength, FIELD::BeginString) );
  CHECK( !header_order::compare(FIELD::BodyLength, FIELD::BodyLength) );
  CHECK( header_order::compare(FIELD::BodyLength, FIELD::MsgType) );
  CHECK( header_order::compare(FIELD::BodyLength, 1) );
  CHECK( header_order::compare(FIELD::BeginString, 100) );
  CHECK( header_order::compare(FIELD::BodyLength, 0) );

  CHECK( !header_order::compare(FIELD::MsgType, FIELD::BeginString) );
  CHECK( !header_order::compare(FIELD::MsgType, FIELD::BodyLength) );
  CHECK( !header_order::compare(FIELD::MsgType, FIELD::MsgType) );
  CHECK( header_order::compare(FIELD::MsgType, 1) );
  CHECK( header_order::compare(FIELD::BeginString, 100) );
  CHECK( header_order::compare(FIELD::MsgType, 0) );

  CHECK( !header_order::compare(1, FIELD::BeginString) );
  CHECK( !header_order::compare(1, FIELD::BodyLength) );
  CHECK( !header_order::compare(1, FIELD::MsgType) );
  CHECK( !header_order::compare(1, 1) );
  CHECK( header_order::compare(1, 100) );
  CHECK( !header_order::compare(1, 0) );

  CHECK( !header_order::compare(100, FIELD::BeginString) );
  CHECK( !header_order::compare(100, FIELD::BodyLength) );
  CHECK( !header_order::compare(100, FIELD::MsgType) );
  CHECK( !header_order::compare(100, 1) );
  CHECK( !header_order::compare(100, 100) );
  CHECK( !header_order::compare(100, 0) );

  CHECK( !header_order::compare(0, FIELD::BeginString) );
  CHECK( !header_order::compare(0, FIELD::BodyLength) );
  CHECK( !header_order::compare(0, FIELD::MsgType) );
  CHECK( header_order::compare(0, 1) );
  CHECK( header_order::compare(0, 100) );
  CHECK( !header_order::compare(0, 0) );
}

TEST(trailerOrder)
{
  CHECK( !trailer_order::compare(FIELD::CheckSum, 0) );
  CHECK( !trailer_order::compare(FIELD::CheckSum, 1) );
  CHECK( !trailer_order::compare(FIELD::CheckSum, 100) );

  CHECK( trailer_order::compare(0, FIELD::CheckSum) );
  CHECK( trailer_order::compare(1, FIELD::CheckSum) );
  CHECK( trailer_order::compare(100, FIELD::CheckSum) );
}

TEST(normalOrder)
{
  CHECK( !trailer_order::compare(1, 1) );
  CHECK( trailer_order::compare(1, 2) );
  CHECK( trailer_order::compare(1, 3) );

  CHECK( !trailer_order::compare(2, 1) );
  CHECK( !trailer_order::compare(2, 2) );
  CHECK( trailer_order::compare(2, 3) );

  CHECK( !trailer_order::compare(3, 1) );
  CHECK( !trailer_order::compare(3, 2) );
  CHECK( !trailer_order::compare(3, 3) );
}

TEST(groupOrder)
{
  int order[6] = { 50, 12, 100, 11, 49, 0 };
  message_order sorter( order );

  CHECK( !sorter(50, 50) );
  CHECK( sorter(50, 12) );
  CHECK( sorter(50, 100) );
  CHECK( sorter(50, 11) );
  CHECK( sorter(50, 49) );

  CHECK( !sorter(12, 50) );
  CHECK( !sorter(12, 12) );
  CHECK( sorter(12, 100) );
  CHECK( sorter(12, 11) );
  CHECK( sorter(12, 49) );

  CHECK( !sorter(100, 50) );
  CHECK( !sorter(100, 12) );
  CHECK( !sorter(100, 100) );
  CHECK( sorter(100, 11) );
  CHECK( sorter(100, 49) );

  CHECK( !sorter(11, 50) );
  CHECK( !sorter(11, 12) );
  CHECK( !sorter(11, 100) );
  CHECK( !sorter(11, 11) );
  CHECK( sorter(11, 49) );

  CHECK( !sorter(49, 50) );
  CHECK( !sorter(49, 12) );
  CHECK( !sorter(49, 100) );
  CHECK( !sorter(49, 11) );
  CHECK( !sorter(49, 49) );

  CHECK( sorter(50, 49) );
  CHECK( sorter(50, 51) );

  CHECK( sorter(12, 11) );
  CHECK( sorter(12, 13) );

  CHECK( sorter(100, 99) );
  CHECK( sorter(100, 101) );

  CHECK( sorter(11, 10) );
  CHECK( sorter(11, 13) );

  CHECK( sorter(49, 48) );
  CHECK( sorter(49, 51) );
}

}
