/* -*- C++ -*- */
/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

#ifndef FIX_DATADICTIONARYTESTCASE_H
#define FIX_DATADICTIONARYTESTCASE_H

#include <CPPTest/TestCase.h>
#include "../DataDictionary.h"

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
    add( &m_checkValidTagNumber );
    add( &m_checkHasValue );
    add( &m_checkIsInMessage );
    add( &m_checkHasRequired );
    add( &m_checkValidFormat );
    add( &m_checkValue );
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
