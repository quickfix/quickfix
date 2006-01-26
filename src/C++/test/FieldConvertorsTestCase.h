/* -*- C++ -*- */

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

#ifndef FIX_FIELDCONVERTORSTESTCASE_H
#define FIX_FIELDCONVERTORSTESTCASE_H

#include <CPPTest/TestCase.h>
#include "FieldConvertors.h"

namespace FIX
{
class FieldConvertorsTestCase : public CPPTest::TestCase < void* >
{
public:
  FieldConvertorsTestCase()
  {
    add( &m_emptyConvert );
    add( &m_integerConvertTo );
    add( &m_integerConvertFrom );
    add( &m_doubleConvertTo );
    add( &m_doubleConvertFrom );
    add( &m_charConvertTo );
    add( &m_charConvertFrom );
    add( &m_streamConvertTo );
    add( &m_streamConvertFrom );
    add( &m_booleanConvertTo );
    add( &m_booleanConvertFrom );
    add( &m_utcTimeStampConvertTo );
    add( &m_utcTimeStampConvertFrom );
    add( &m_utcTimeOnlyConvertTo );
    add( &m_utcTimeOnlyConvertFrom );
    add( &m_utcDateConvertTo );
    add( &m_utcDateConvertFrom );
    add( &m_checkSumConvertTo );
  }

private:
  typedef CPPTest::VoidTest Test;

class emptyConvert : public Test
  {
    void onRun( void*& object );
  }
  m_emptyConvert;

class integerConvertTo : public Test
  {
    void onRun( void*& object );
  }
  m_integerConvertTo;

class integerConvertFrom : public Test
  {
    void onRun( void*& object );
  }
  m_integerConvertFrom;

class doubleConvertTo : public Test
  {
    void onRun( void*& object );
  }
  m_doubleConvertTo;

class doubleConvertFrom : public Test
  {
    void onRun( void*& object );
  }
  m_doubleConvertFrom;

class charConvertTo : public Test
  {
    void onRun( void*& object );
  }
  m_charConvertTo;

class charConvertFrom : public Test
  {
    void onRun( void*& object );
  }
  m_charConvertFrom;

class streamConvertTo : public Test
  {
    void onRun( void*& object );
  }
  m_streamConvertTo;

class streamConvertFrom : public Test
  {
    void onRun( void*& object );
  }
  m_streamConvertFrom;

class booleanConvertTo : public Test
  {
    void onRun( void*& object );
  }
  m_booleanConvertTo;

class booleanConvertFrom : public Test
  {
    void onRun( void*& object );
  }
  m_booleanConvertFrom;

class utcTimeStampConvertTo : public Test
  {
    void onRun( void*& object );
  }
  m_utcTimeStampConvertTo;

class utcTimeStampConvertFrom : public Test
  {
    void onRun( void*& object );
  }
  m_utcTimeStampConvertFrom;

class utcTimeOnlyConvertTo : public Test
  {
    void onRun( void*& object );
  }
  m_utcTimeOnlyConvertTo;

class utcTimeOnlyConvertFrom : public Test
  {
    void onRun( void*& object );
  }
  m_utcTimeOnlyConvertFrom;

class utcDateConvertTo : public Test
  {
    void onRun( void*& object );
  }
  m_utcDateConvertTo;

class utcDateConvertFrom : public Test
  {
    void onRun( void*& object );
  }
  m_utcDateConvertFrom;

class checkSumConvertTo : public Test
  {
    void onRun( void*& object );
  }
  m_checkSumConvertTo;
};
}

#endif //FIX_FIELDCONVERTORSTESTCASE_H
