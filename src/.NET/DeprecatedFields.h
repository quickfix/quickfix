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

#pragma once

#include "Field.h"

namespace Fix
{
  public __gc class IDSource : public StringField
  {
  public:
  static const String* CUSIP = "1";
  static const String* SEDOL = "2";
  static const String* QUIK = "3";
  static const String* ISIN_NUMBER = "4";
  static const String* RIC_CODE = "5";
  static const String* ISO_CURRENCY_CODE = "6";
  static const String* ISO_COUNTRY_CODE = "7";
  static const String* EXCHANGE_SYMBOL = "8";
  static const String* CONSOLIDATED_TAPE_ASSOCIATION = "9";
  IDSource() : StringField(22) {}
  IDSource(String* data) : StringField(22, data) {}
  };

  public __gc class IOIShares : public StringField
  {
  public:
  static const String* SMALL = "S";
  static const String* MEDIUM = "M";
  static const String* LARGE = "L";
  IOIShares() : StringField(27) {}
  IOIShares(String* data) : StringField(27, data) {}
  };

  public __gc class LastShares : public DoubleField
  {
  public:
  LastShares() : DoubleField(32) {}
  LastShares(double data) : DoubleField(32, data) {}
  };

  public __gc class Shares : public DoubleField
  {
  public:
  Shares() : DoubleField(53) {}
  Shares(double data) : DoubleField(53, data) {}
  };

  public __gc class OpenClose : public CharField
  {
  public:
  static const __wchar_t OPEN = 'O';
  static const __wchar_t CLOSE = 'C';  
  OpenClose() : CharField(77) {}
  OpenClose(char data) : CharField(77, data) {}
  };

  public __gc class AllocShares : public IntField
  {
  public:
  AllocShares() : IntField(80) {}
  AllocShares(int data) : IntField(80, data) {}
  };

  public __gc class SpreadToBenchmark : public IntField
  {
  public:
  SpreadToBenchmark() : IntField(218) {}
  SpreadToBenchmark(int data) : IntField(218, data) {}
  };

  public __gc class UnderlyingIDSource : public IntField
  {
  public:
  UnderlyingIDSource() : IntField(305) {}
  UnderlyingIDSource(int data) : IntField(305, data) {}
  };

  public __gc class QuoteAckStatus : public IntField
  {
  public:
  QuoteAckStatus() : IntField(297) {}
  QuoteAckStatus(int data) : IntField(297, data) {}
  };
}