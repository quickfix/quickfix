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

#include "MessageSortersTestCase.h"
#include "MessageSorters.h"

namespace FIX
{

void MessageSortersTestCase::headerOrder::onRun( void*& )
{
  assert( !header_order::compare(FIELD::BeginString, FIELD::BeginString) );
  assert( header_order::compare(FIELD::BeginString, FIELD::BodyLength) );
  assert( header_order::compare(FIELD::BeginString, FIELD::MsgType) );
  assert( header_order::compare(FIELD::BeginString, 1) );
  assert( header_order::compare(FIELD::BeginString, 100) );
  assert( header_order::compare(FIELD::BeginString, 0) );

  assert( !header_order::compare(FIELD::BodyLength, FIELD::BeginString) );
  assert( !header_order::compare(FIELD::BodyLength, FIELD::BodyLength) );
  assert( header_order::compare(FIELD::BodyLength, FIELD::MsgType) );
  assert( header_order::compare(FIELD::BodyLength, 1) );
  assert( header_order::compare(FIELD::BeginString, 100) );
  assert( header_order::compare(FIELD::BodyLength, 0) );

  assert( !header_order::compare(FIELD::MsgType, FIELD::BeginString) );
  assert( !header_order::compare(FIELD::MsgType, FIELD::BodyLength) );
  assert( !header_order::compare(FIELD::MsgType, FIELD::MsgType) );
  assert( header_order::compare(FIELD::MsgType, 1) );
  assert( header_order::compare(FIELD::BeginString, 100) );
  assert( header_order::compare(FIELD::MsgType, 0) );

  assert( !header_order::compare(1, FIELD::BeginString) );
  assert( !header_order::compare(1, FIELD::BodyLength) );
  assert( !header_order::compare(1, FIELD::MsgType) );
  assert( !header_order::compare(1, 1) );
  assert( header_order::compare(1, 100) );
  assert( !header_order::compare(1, 0) );

  assert( !header_order::compare(100, FIELD::BeginString) );
  assert( !header_order::compare(100, FIELD::BodyLength) );
  assert( !header_order::compare(100, FIELD::MsgType) );
  assert( !header_order::compare(100, 1) );
  assert( !header_order::compare(100, 100) );
  assert( !header_order::compare(100, 0) );

  assert( !header_order::compare(0, FIELD::BeginString) );
  assert( !header_order::compare(0, FIELD::BodyLength) );
  assert( !header_order::compare(0, FIELD::MsgType) );
  assert( header_order::compare(0, 1) );
  assert( header_order::compare(0, 100) );
  assert( !header_order::compare(0, 0) );
}

void MessageSortersTestCase::trailerOrder::onRun( void*& )
{
  assert( !trailer_order::compare(FIELD::CheckSum, 0) );
  assert( !trailer_order::compare(FIELD::CheckSum, 1) );
  assert( !trailer_order::compare(FIELD::CheckSum, 100) );

  assert( trailer_order::compare(0, FIELD::CheckSum) );
  assert( trailer_order::compare(1, FIELD::CheckSum) );
  assert( trailer_order::compare(100, FIELD::CheckSum) );
}

void MessageSortersTestCase::normalOrder::onRun( void*& )
{
  assert( !trailer_order::compare(1, 1) );
  assert( trailer_order::compare(1, 2) );
  assert( trailer_order::compare(1, 3) );

  assert( !trailer_order::compare(2, 1) );
  assert( !trailer_order::compare(2, 2) );
  assert( trailer_order::compare(2, 3) );

  assert( !trailer_order::compare(3, 1) );
  assert( !trailer_order::compare(3, 2) );
  assert( !trailer_order::compare(3, 3) );
}

void MessageSortersTestCase::groupOrder::onRun( void*& )
{
  int order[6] = { 50, 12, 100, 11, 49, 0 };
  message_order sorter( order );

  assert( !sorter(50, 50) );
  assert( sorter(50, 12) );
  assert( sorter(50, 100) );
  assert( sorter(50, 11) );
  assert( sorter(50, 49) );

  assert( !sorter(12, 50) );
  assert( !sorter(12, 12) );
  assert( sorter(12, 100) );
  assert( sorter(12, 11) );
  assert( sorter(12, 49) );

  assert( !sorter(100, 50) );
  assert( !sorter(100, 12) );
  assert( !sorter(100, 100) );
  assert( sorter(100, 11) );
  assert( sorter(100, 49) );

  assert( !sorter(11, 50) );
  assert( !sorter(11, 12) );
  assert( !sorter(11, 100) );
  assert( !sorter(11, 11) );
  assert( sorter(11, 49) );

  assert( !sorter(49, 50) );
  assert( !sorter(49, 12) );
  assert( !sorter(49, 100) );
  assert( !sorter(49, 11) );
  assert( !sorter(49, 49) );

  assert( sorter(50, 49) );
  assert( sorter(50, 51) );

  assert( sorter(12, 11) );
  assert( sorter(12, 13) );

  assert( sorter(100, 99) );
  assert( sorter(100, 101) );

  assert( sorter(11, 10) );
  assert( sorter(11, 13) );

  assert( sorter(49, 48) );
  assert( sorter(49, 51) );
}

}
