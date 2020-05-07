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

#include <gtest/gtest.h>
#include "MessageSorters.h"

namespace FIX
{

TEST(MessageSortersTests, headerOrder)
{
  ASSERT_TRUE( !header_order::compare(FIELD::BeginString, FIELD::BeginString) );
  ASSERT_TRUE( header_order::compare(FIELD::BeginString, FIELD::BodyLength) );
  ASSERT_TRUE( header_order::compare(FIELD::BeginString, FIELD::MsgType) );
  ASSERT_TRUE( header_order::compare(FIELD::BeginString, 1) );
  ASSERT_TRUE( header_order::compare(FIELD::BeginString, 100) );
  ASSERT_TRUE( header_order::compare(FIELD::BeginString, 0) );

  ASSERT_TRUE( !header_order::compare(FIELD::BodyLength, FIELD::BeginString) );
  ASSERT_TRUE( !header_order::compare(FIELD::BodyLength, FIELD::BodyLength) );
  ASSERT_TRUE( header_order::compare(FIELD::BodyLength, FIELD::MsgType) );
  ASSERT_TRUE( header_order::compare(FIELD::BodyLength, 1) );
  ASSERT_TRUE( header_order::compare(FIELD::BeginString, 100) );
  ASSERT_TRUE( header_order::compare(FIELD::BodyLength, 0) );

  ASSERT_TRUE( !header_order::compare(FIELD::MsgType, FIELD::BeginString) );
  ASSERT_TRUE( !header_order::compare(FIELD::MsgType, FIELD::BodyLength) );
  ASSERT_TRUE( !header_order::compare(FIELD::MsgType, FIELD::MsgType) );
  ASSERT_TRUE( header_order::compare(FIELD::MsgType, 1) );
  ASSERT_TRUE( header_order::compare(FIELD::BeginString, 100) );
  ASSERT_TRUE( header_order::compare(FIELD::MsgType, 0) );

  ASSERT_TRUE( !header_order::compare(1, FIELD::BeginString) );
  ASSERT_TRUE( !header_order::compare(1, FIELD::BodyLength) );
  ASSERT_TRUE( !header_order::compare(1, FIELD::MsgType) );
  ASSERT_TRUE( !header_order::compare(1, 1) );
  ASSERT_TRUE( header_order::compare(1, 100) );
  ASSERT_TRUE( !header_order::compare(1, 0) );

  ASSERT_TRUE( !header_order::compare(100, FIELD::BeginString) );
  ASSERT_TRUE( !header_order::compare(100, FIELD::BodyLength) );
  ASSERT_TRUE( !header_order::compare(100, FIELD::MsgType) );
  ASSERT_TRUE( !header_order::compare(100, 1) );
  ASSERT_TRUE( !header_order::compare(100, 100) );
  ASSERT_TRUE( !header_order::compare(100, 0) );

  ASSERT_TRUE( !header_order::compare(0, FIELD::BeginString) );
  ASSERT_TRUE( !header_order::compare(0, FIELD::BodyLength) );
  ASSERT_TRUE( !header_order::compare(0, FIELD::MsgType) );
  ASSERT_TRUE( header_order::compare(0, 1) );
  ASSERT_TRUE( header_order::compare(0, 100) );
  ASSERT_TRUE( !header_order::compare(0, 0) );
}

TEST(MessageSortersTests, trailerOrder)
{
  ASSERT_TRUE( !trailer_order::compare(FIELD::CheckSum, 0) );
  ASSERT_TRUE( !trailer_order::compare(FIELD::CheckSum, 1) );
  ASSERT_TRUE( !trailer_order::compare(FIELD::CheckSum, 100) );

  ASSERT_TRUE( trailer_order::compare(0, FIELD::CheckSum) );
  ASSERT_TRUE( trailer_order::compare(1, FIELD::CheckSum) );
  ASSERT_TRUE( trailer_order::compare(100, FIELD::CheckSum) );
}

TEST(MessageSortersTests, normalOrder)
{
  ASSERT_TRUE( !trailer_order::compare(1, 1) );
  ASSERT_TRUE( trailer_order::compare(1, 2) );
  ASSERT_TRUE( trailer_order::compare(1, 3) );

  ASSERT_TRUE( !trailer_order::compare(2, 1) );
  ASSERT_TRUE( !trailer_order::compare(2, 2) );
  ASSERT_TRUE( trailer_order::compare(2, 3) );

  ASSERT_TRUE( !trailer_order::compare(3, 1) );
  ASSERT_TRUE( !trailer_order::compare(3, 2) );
  ASSERT_TRUE( !trailer_order::compare(3, 3) );
}

TEST(MessageSortersTests, groupOrder)
{
  int order[6] = { 50, 12, 100, 11, 49, 0 };
  message_order sorter( order );

  ASSERT_TRUE( !sorter(50, 50) );
  ASSERT_TRUE( sorter(50, 12) );
  ASSERT_TRUE( sorter(50, 100) );
  ASSERT_TRUE( sorter(50, 11) );
  ASSERT_TRUE( sorter(50, 49) );

  ASSERT_TRUE( !sorter(12, 50) );
  ASSERT_TRUE( !sorter(12, 12) );
  ASSERT_TRUE( sorter(12, 100) );
  ASSERT_TRUE( sorter(12, 11) );
  ASSERT_TRUE( sorter(12, 49) );

  ASSERT_TRUE( !sorter(100, 50) );
  ASSERT_TRUE( !sorter(100, 12) );
  ASSERT_TRUE( !sorter(100, 100) );
  ASSERT_TRUE( sorter(100, 11) );
  ASSERT_TRUE( sorter(100, 49) );

  ASSERT_TRUE( !sorter(11, 50) );
  ASSERT_TRUE( !sorter(11, 12) );
  ASSERT_TRUE( !sorter(11, 100) );
  ASSERT_TRUE( !sorter(11, 11) );
  ASSERT_TRUE( sorter(11, 49) );

  ASSERT_TRUE( !sorter(49, 50) );
  ASSERT_TRUE( !sorter(49, 12) );
  ASSERT_TRUE( !sorter(49, 100) );
  ASSERT_TRUE( !sorter(49, 11) );
  ASSERT_TRUE( !sorter(49, 49) );

  ASSERT_TRUE( sorter(50, 49) );
  ASSERT_TRUE( sorter(50, 51) );

  ASSERT_TRUE( sorter(12, 11) );
  ASSERT_TRUE( sorter(12, 13) );

  ASSERT_TRUE( sorter(100, 99) );
  ASSERT_TRUE( sorter(100, 101) );

  ASSERT_TRUE( sorter(11, 10) );
  ASSERT_TRUE( sorter(11, 13) );

  ASSERT_TRUE( sorter(49, 48) );
  ASSERT_TRUE( sorter(49, 51) );
}

}
