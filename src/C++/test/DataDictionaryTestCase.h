/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#ifndef FIX_DATADICTIONARYTESTCASE_H
#define FIX_DATADICTIONARYTESTCASE_H

#include <CPPTest/TestCase.h>
#include "DataDictionary.h"

namespace FIX
{
class DataDictionaryTestCase : public CPPTest::TestCase < DataDictionary >
{
public:
  DataDictionaryTestCase()
  {
    add( &m_addMsgType );
    add( &m_addMsgField );
    add( &m_addHeaderField );
    add( &m_addTrailerField );
    add( &m_addFieldType );
    add( &m_addRequiredField );
    add( &m_addFieldValue );
    add( &m_addGroup );
    add( &m_addFieldName );
    add( &m_addValueName );
    add( &m_checkValidTagNumber );
    add( &m_checkHasValue );
    add( &m_checkIsInMessage );
    add( &m_checkHasRequired );
    add( &m_checkValidFormat );
    add( &m_checkValue );
    add( &m_checkRepeatedTag );
    add( &m_checkGroupCount );
    add( &m_checkGroupRequiredFields );
    add( &m_readFromFile );
    add( &m_copy );
  }

private:
  typedef CPPTest::SimpleTest < DataDictionary > SimpleTest;
  typedef CPPTest::Test < DataDictionary > Test;

  class addMsgType : public SimpleTest
  {
    void onRun( DataDictionary& object );
  } 
  m_addMsgType;

  class addMsgField : public SimpleTest
  {
    void onRun( DataDictionary& object );
  }
  m_addMsgField;

  class addHeaderField : public SimpleTest
  {
    void onRun( DataDictionary& object );
  }
  m_addHeaderField;

  class addTrailerField : public SimpleTest
  {
    void onRun( DataDictionary& object );
  }
  m_addTrailerField;

  class addFieldType : public SimpleTest
  {
    void onRun( DataDictionary& object );
  }
  m_addFieldType;

  class addRequiredField : public SimpleTest
  {
    void onRun( DataDictionary& object );
  }
  m_addRequiredField;

  class addFieldValue : public SimpleTest
  {
    void onRun( DataDictionary& object );
  }
  m_addFieldValue;

  class addGroup : public SimpleTest
  {
    void onRun( DataDictionary& object );
  }
  m_addGroup;

  class addFieldName : public SimpleTest
  {
    void onRun( DataDictionary& object );
  }
  m_addFieldName;

  class addValueName : public SimpleTest
  {
    void onRun( DataDictionary& object );
  }
  m_addValueName;

  class checkValidTagNumber : public Test
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
    DataDictionary* m_pObject;
  }
  m_checkValidTagNumber;

  class checkHasValue : public Test
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
  }
  m_checkHasValue;

  class checkIsInMessage : public Test
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
    DataDictionary* m_pObject;
  }
  m_checkIsInMessage;

  class checkHasRequired : public Test
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
    DataDictionary* m_pObject;
  }
  m_checkHasRequired;

  class checkValidFormat : public Test
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
    DataDictionary* m_pObject;
  }
  m_checkValidFormat;

  class checkValue : public Test
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
    DataDictionary* m_pObject;
  }
  m_checkValue;

  class checkRepeatedTag : public Test
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
    DataDictionary* m_pObject;
  }
  m_checkRepeatedTag;

  class checkGroupCount : public Test
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
    DataDictionary* m_pObject;
  }
  m_checkGroupCount;

  class checkGroupRequiredFields : public Test
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
    DataDictionary* m_pObject;
  }
  m_checkGroupRequiredFields;

  class readFromFile : public Test
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
    DataDictionary* m_pObject;
  }
  m_readFromFile;

  class copy : public SimpleTest
  {
    bool onSetup( DataDictionary*& pObject );
    void onRun( DataDictionary& object );
    void onTeardown( DataDictionary* pObject ) { delete pObject; }
    DataDictionary* m_pObject;
  }
  m_copy;
};
}

#endif //FIX_DATADICTIONARYTESTCASE_H
