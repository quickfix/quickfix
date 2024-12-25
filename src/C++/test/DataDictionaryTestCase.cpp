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
#pragma warning(disable : 4503 4355 4786)
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "TestHelper.h"
#include <FieldNumbers.h>
#include <PUGIXML_DOMDocument.h>
#include <Values.h>
#include <fix40/NewOrderSingle.h>
#include <fix40/TestRequest.h>
#include <fix42/Heartbeat.h>
#include <fix42/NewOrderSingle.h>
#include <fix42/TestRequest.h>
#include <fix44/MarketDataRequest.h>
#include <fix44/MarketDataSnapshotFullRefresh.h>
#include <fix44/NewOrderList.h>
#include <fstream>
#include <iostream>

#include "catch_amalgamated.hpp"

using namespace FIX;

namespace {
USER_DEFINE_STRING(TooHigh, 501);

static void fillHeaderTrailer(FIX44::Message &message) {
  message.getHeader().set(FIX::BodyLength(0));
  message.getHeader().set(SenderCompID("FIXTEST"));
  message.getHeader().set(TargetCompID("TW"));
  message.getHeader().set(MsgSeqNum(1));
  message.getHeader().set(SendingTime(UtcTimeStamp::now()));
  message.getTrailer().set(CheckSum(0));
}
} // namespace

TEST_CASE("DataDictionaryTests") {
  DataDictionary object;

  SECTION("addMsgType") {
    CHECK(!object.isMsgType("A"));
    object.addMsgType("A");
    CHECK(object.isMsgType("A"));
  }

  SECTION("addMsgField") {
    CHECK(!object.isMsgField("A", 10));
    CHECK(!object.isMsgField("Z", 50));
    object.addMsgField("A", 10);
    object.addMsgField("Z", 50);
    CHECK(object.isMsgField("A", 10));
    CHECK(object.isMsgField("Z", 50));
    CHECK(!object.isMsgField("A", 50));
    CHECK(!object.isMsgField("Z", 10));
  }

  SECTION("addHeaderField") {
    CHECK(!object.isHeaderField(56));
    CHECK(!object.isHeaderField(49));
    object.addHeaderField(56, true);
    object.addHeaderField(49, true);
    CHECK(object.isHeaderField(56));
    CHECK(object.isHeaderField(49));
  }

  SECTION("addTrailerField") {
    CHECK(!object.isTrailerField(10));
    object.addTrailerField(10, true);
    CHECK(object.isTrailerField(10));
  }

  SECTION("addFieldType") {
    TYPE::Type type;
    CHECK(!object.getFieldType(14, type));
    CHECK(!object.getFieldType(23, type));

    object.addFieldType(14, TYPE::String);
    object.addFieldType(23, TYPE::Char);

    CHECK(object.getFieldType(14, type));
    CHECK(TYPE::String == type);
    CHECK(object.getFieldType(23, type));
    CHECK(TYPE::Char == type);
  }

  SECTION("addRequiredField") {
    CHECK(!object.isRequiredField("A", 10));
    CHECK(!object.isRequiredField("Z", 50));
    object.addRequiredField("A", 10);
    object.addRequiredField("Z", 50);
    CHECK(object.isRequiredField("A", 10));
    CHECK(object.isRequiredField("Z", 50));
    CHECK(!object.isRequiredField("A", 50));
    CHECK(!object.isRequiredField("Z", 10));
  }

  SECTION("addFieldValue") {
    CHECK(!object.isFieldValue(12, "f"));
    CHECK(!object.isFieldValue(12, "g"));
    CHECK(!object.isFieldValue(15, "1"));
    CHECK(!object.isFieldValue(18, "2"));
    CHECK(!object.isFieldValue(167, "FUT"));

    object.addFieldValue(12, "f");
    object.addFieldValue(12, "g");
    object.addFieldValue(15, "1");
    object.addFieldValue(18, "2");
    object.addFieldValue(167, "FUT");

    CHECK(object.isFieldValue(12, "f"));
    CHECK(object.isFieldValue(12, "g"));
    CHECK(object.isFieldValue(15, "1"));
    CHECK(object.isFieldValue(18, "2"));
    CHECK(object.isFieldValue(167, "FUT"));
  }

  SECTION("addGroup") {
    object.setVersion("FIX.4.2");

    DataDictionary group1;
    group1.addMsgType("1");
    DataDictionary group2;
    group2.addMsgType("2");
    DataDictionary group3;
    group3.addMsgType("3");

    object.addGroup("A", 100, 101, group1);
    object.addGroup("A", 200, 201, group2);
    object.addGroup("A", 300, 301, group3);

    int delim = 0;
    const DataDictionary *pDD = 0;

    CHECK(object.getGroup("A", 100, delim, pDD));
    CHECK(101 == delim);
    CHECK(pDD->isMsgType("1"));

    CHECK(object.getGroup("A", 200, delim, pDD));
    CHECK(201 == delim);
    CHECK(pDD->isMsgType("2"));

    CHECK(object.getGroup("A", 300, delim, pDD));
    CHECK(301 == delim);
    CHECK(pDD->isMsgType("3"));
  }

  SECTION("addFieldName") {
    object.setVersion("FIX.4.2");

    object.addFieldName(1, "Account");
    object.addFieldName(11, "ClOrdID");
    object.addFieldName(8, "BeginString");

    std::string name;
    int field = 0;
    CHECK(object.getFieldName(1, name));
    CHECK("Account" == name);
    CHECK(object.getFieldTag(name, field));
    CHECK(1 == field);
    CHECK(object.getFieldName(11, name));
    CHECK("ClOrdID" == name);
    CHECK(object.getFieldTag(name, field));
    CHECK(11 == field);
    CHECK(object.getFieldName(8, name));
    CHECK("BeginString" == name);
    CHECK(object.getFieldTag(name, field));
    CHECK(8 == field);
  }

  SECTION("addValueName") {
    object.setVersion("FIX.4.2");

    object.addValueName(12, "0", "VALUE_12_0");
    object.addValueName(12, "B", "VALUE_12_B");
    object.addValueName(23, "BOO", "VALUE_23_BOO");

    std::string name;
    std::string value;

    CHECK(object.getValueName(12, "0", name));
    CHECK("VALUE_12_0" == name);
    CHECK(object.getNameValue(12, "VALUE_12_0", value));
    CHECK("0" == value);

    CHECK(object.getValueName(12, "B", name));
    CHECK("VALUE_12_B" == name);
    CHECK(object.getNameValue(12, "VALUE_12_B", value));
    CHECK("B" == value);

    CHECK(object.getValueName(23, "BOO", name));
    CHECK("VALUE_23_BOO" == name);
    CHECK(object.getNameValue(23, "VALUE_23_BOO", value));
    CHECK("BOO" == value);
  }

  SECTION("checkValidTagNumber") {
    object.setVersion(BeginString_FIX40);
    object.addField(FIELD::BeginString);
    object.addField(FIELD::BodyLength);
    object.addField(FIELD::MsgType);
    object.addField(FIELD::CheckSum);
    object.addField(FIELD::TestReqID);
    object.addMsgType(MsgType_TestRequest);
    object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);

    object.checkFieldsOutOfOrder(true);
    TestReqID testReqID("1");
    FIX40::TestRequest message(testReqID);
    message.setField(TooHigh("value"));
    CHECK_THROWS_AS(object.validate(message), InvalidTagNumber);

    object.allowUnknownMsgFields(true);
    object.validate(message);
    object.allowUnknownMsgFields(false);

    object.addField(501);
    object.addMsgField(MsgType_TestRequest, 501);
    object.validate(message);

    message.setField(FIELD::UserMin, "value");
    CHECK_THROWS_AS(object.validate(message), InvalidTagNumber);

    object.checkUserDefinedFields(false);
    object.validate(message);
  }

  SECTION("checkHasValue") {
    Message testReqID("8=FIX.4.2\0019=12\00135=1\001112=\00110=007\001", false);
    FIX42::TestRequest message(testReqID);

    object.checkFieldsHaveValues(true);
    CHECK_THROWS_AS(object.validate(message), NoTagValue);

    object.checkFieldsHaveValues(false);
    object.validate(message);
  }

  SECTION("checkIsInMessage") {
    object.setVersion(BeginString_FIX40);
    object.addField(FIELD::BeginString);
    object.addField(FIELD::BodyLength);
    object.addField(FIELD::MsgType);
    object.addField(FIELD::CheckSum);
    object.addField(FIELD::TestReqID);
    object.addField(FIELD::Symbol);
    object.addMsgType(MsgType_TestRequest);
    object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);

    TestReqID testReqID("1");

    FIX40::TestRequest message(testReqID);
    object.validate(message);

    message.setField(Symbol("MSFT"));
    CHECK_THROWS_AS(object.validate(message), TagNotDefinedForMessage);
  }

  SECTION("checkHasRequired") {
    object.setVersion(BeginString_FIX40);
    object.addField(FIELD::BeginString);
    object.addField(FIELD::BodyLength);
    object.addField(FIELD::MsgType);
    object.addField(FIELD::SenderCompID);
    object.addField(FIELD::TargetCompID);
    object.addField(FIELD::SignatureLength);
    object.addHeaderField(FIELD::SenderCompID, true);
    object.addHeaderField(FIELD::TargetCompID, false);
    object.addField(FIELD::CheckSum);
    object.addField(FIELD::TestReqID);
    object.addMsgType(MsgType_TestRequest);
    object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
    object.addRequiredField(MsgType_TestRequest, FIELD::TestReqID);
    object.addTrailerField(FIELD::SignatureLength, true);

    FIX40::TestRequest message;
    message.getTrailer().setField(SignatureLength(1));

    CHECK_THROWS_AS(object.validate(message), RequiredTagMissing);

    message.getHeader().setField(SenderCompID("SENDER"));
    CHECK_THROWS_AS(object.validate(message), RequiredTagMissing);

    message.setField(TestReqID("1"));
    object.validate(message);

    message.getHeader().removeField(FIELD::SenderCompID);
    message.setField(SenderCompID("SENDER"));
    CHECK_THROWS_AS(object.validate(message), RequiredTagMissing);

    message.getHeader().setField(SenderCompID("SENDER"));
    message.getTrailer().removeField(FIELD::SignatureLength);
    CHECK_THROWS_AS(object.validate(message), RequiredTagMissing);
  }

  SECTION("checkRequiredAttribute") {
    DataDictionary object(FIX::TestSettings::pathForSpec("FIX42"));

    FIX42::Heartbeat message;
    // All required fields are present
    message.setString("8=FIX.4.29=4935=049=FIXTEST56=TW34=252=20050225-16:54:3210=119", false, &object);
    object.validate(message);
    // Required field (49) is missed in the header
    message.setString("8=FIX.4.29=4935=056=TW34=252=20050225-16:54:3210=119", false, &object);
    CHECK_THROWS_AS(object.validate(message), RequiredTagMissing);
    // Required field (10) is missed in the trailer
    message.setString("8=FIX.4.29=4935=049=FIXTEST56=TW34=252=20050225-16:54:32", false, &object);
    CHECK_THROWS_AS(object.validate(message), RequiredTagMissing);
  }

  SECTION("checkValidFormat") {
    object.setVersion(BeginString_FIX40);
    object.addField(FIELD::BeginString);
    object.addField(FIELD::BodyLength);
    object.addField(FIELD::MsgType);
    object.addField(FIELD::CheckSum);
    object.addField(FIELD::TestReqID);
    object.addMsgType(MsgType_TestRequest);

    SECTION("checkValidFormat_Int_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::Int);

      FIX40::TestRequest message;
      message.setField(TestReqID("+200"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_Char_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::Char);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_Price_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::Price);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_Amt_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::Amt);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_Qty_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::Qty);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_UtcTimeStamp_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::UtcTimeStamp);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_Boolean_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::Boolean);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_Float_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::Float);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_UtcDate_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::UtcDate);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_UtcTimeOnly_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::UtcTimeOnly);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_NumInGroup_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::NumInGroup);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_Percentage_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::Percentage);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_SeqNum_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::SeqNum);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_Length_Exception") {
      object.addMsgField(MsgType_TestRequest, FIELD::TestReqID);
      object.addFieldType(FIELD::TestReqID, TYPE::Length);

      FIX40::TestRequest message;
      message.setField(TestReqID("ERROR"));
      CHECK_THROWS_AS(object.validate(message), IncorrectDataFormat);
    }

    SECTION("checkValidFormat_AllSetFieldsValid") {
      object.addField(5000);
      object.addField(5001);
      object.addField(5002);
      object.addField(5003);
      object.addField(5004);
      object.addField(5005);
      object.addField(5006);
      object.addField(5007);
      object.addField(5008);
      object.addField(5009);
      object.addField(5010);
      object.addField(5011);
      object.addField(5012);
      object.addField(5013);
      object.addField(5014);
      object.addField(5015);
      object.addField(5016);
      object.addField(5017);
      object.addField(5018);
      object.addField(5019);
      object.addField(5020);
      object.addField(5021);
      object.addField(5022);
      object.addField(5023);
      object.addField(5024);
      object.addField(5025);
      object.addField(5026);
      object.addField(5027);
      object.addField(5028);
      object.addField(5029);

      object.addMsgField(MsgType_TestRequest, 5000);
      object.addMsgField(MsgType_TestRequest, 5001);
      object.addMsgField(MsgType_TestRequest, 5002);
      object.addMsgField(MsgType_TestRequest, 5003);
      object.addMsgField(MsgType_TestRequest, 5004);
      object.addMsgField(MsgType_TestRequest, 5005);
      object.addMsgField(MsgType_TestRequest, 5006);
      object.addMsgField(MsgType_TestRequest, 5007);
      object.addMsgField(MsgType_TestRequest, 5008);
      object.addMsgField(MsgType_TestRequest, 5009);
      object.addMsgField(MsgType_TestRequest, 5010);
      object.addMsgField(MsgType_TestRequest, 5011);
      object.addMsgField(MsgType_TestRequest, 5012);
      object.addMsgField(MsgType_TestRequest, 5013);
      object.addMsgField(MsgType_TestRequest, 5014);
      object.addMsgField(MsgType_TestRequest, 5015);
      object.addMsgField(MsgType_TestRequest, 5016);
      object.addMsgField(MsgType_TestRequest, 5017);
      object.addMsgField(MsgType_TestRequest, 5018);
      object.addMsgField(MsgType_TestRequest, 5019);
      object.addMsgField(MsgType_TestRequest, 5020);
      object.addMsgField(MsgType_TestRequest, 5021);
      object.addMsgField(MsgType_TestRequest, 5022);
      object.addMsgField(MsgType_TestRequest, 5023);
      object.addMsgField(MsgType_TestRequest, 5024);
      object.addMsgField(MsgType_TestRequest, 5025);
      object.addMsgField(MsgType_TestRequest, 5026);
      object.addMsgField(MsgType_TestRequest, 5027);
      object.addMsgField(MsgType_TestRequest, 5028);
      object.addMsgField(MsgType_TestRequest, 5029);

      object.addFieldType(5000, TYPE::String);
      object.addFieldType(5001, TYPE::MultipleValueString);
      object.addFieldType(5002, TYPE::MultipleStringValue);
      object.addFieldType(5003, TYPE::MultipleCharValue);
      object.addFieldType(5004, TYPE::Exchange);
      object.addFieldType(5005, TYPE::LocalMktDate);
      object.addFieldType(5006, TYPE::Data);
      object.addFieldType(5007, TYPE::MonthYear);
      object.addFieldType(5008, TYPE::DayOfMonth);
      object.addFieldType(5009, TYPE::Country);
      object.addFieldType(5010, TYPE::TzTimeOnly);
      object.addFieldType(5011, TYPE::TzTimeStamp);
      object.addFieldType(5012, TYPE::XmlData);
      object.addFieldType(5013, TYPE::Language);
      object.addFieldType(5014, TYPE::Char);
      object.addFieldType(5015, TYPE::Price);
      object.addFieldType(5016, TYPE::Int);
      object.addFieldType(5017, TYPE::Amt);
      object.addFieldType(5018, TYPE::Qty);
      object.addFieldType(5019, TYPE::Currency);
      object.addFieldType(5020, TYPE::UtcTimeStamp);
      object.addFieldType(5021, TYPE::Boolean);
      object.addFieldType(5022, TYPE::Float);
      object.addFieldType(5023, TYPE::PriceOffset);
      object.addFieldType(5024, TYPE::UtcDate);
      object.addFieldType(5025, TYPE::UtcTimeOnly);
      object.addFieldType(5026, TYPE::NumInGroup);
      object.addFieldType(5027, TYPE::Percentage);
      object.addFieldType(5028, TYPE::SeqNum);
      object.addFieldType(5029, TYPE::Length);

      FIX40::TestRequest message;
      message.setField(5000, "String");
      message.setField(5001, "MultipleValueString");
      message.setField(5002, "MultipleStringValue");
      message.setField(5003, "MultipleCharValue");
      message.setField(5004, "Exchange");
      message.setField(5005, "5/09/2019");
      message.setField(5006, "Data");
      message.setField(5007, "01");
      message.setField(5008, "19");
      message.setField(5009, "US");
      message.setField(5010, "10:10:10.10");
      message.setField(5011, "123456789");
      message.setField(5012, "<xmldata>data</data>");
      message.setField(5013, "English");
      message.setField(5014, "C");
      message.setField(5015, "1.00");
      message.setField(5016, "100");
      message.setField(5017, "100");
      message.setField(5018, "100");
      message.setField(5019, "USD");
      message.setField(5020, "20000426-12:05:06");
      message.setField(5021, "Y");
      message.setField(5022, "1.23");
      message.setField(5023, "1");
      message.setField(5024, "20000426");
      message.setField(5025, "12:05:06");
      message.setField(5026, "5");
      message.setField(5027, "0.0");
      message.setField(5028, "1");
      message.setField(5029, "1");

      CHECK_NOTHROW(object.validate(message));
    }
  }

  SECTION("checkValue") {
    FIX40::NewOrderSingle message;
    message.setField(OrdType('1'));
    object.validate(message);

    message.setField(OrdType('2'));
    object.validate(message);

    message.setField(OrdType('1'));
    message.setField(OrderRestrictions("1 2 3"));
    object.validate(message);

    message.setField(OrderRestrictions("1 4 3"));
    CHECK_NOTHROW(object.validate(message));
  }

  SECTION("checkValue_IncorrectTagValue") {
    object.setVersion(BeginString_FIX40);
    object.addField(FIELD::BeginString);
    object.addField(FIELD::BodyLength);
    object.addField(FIELD::MsgType);
    object.addField(FIELD::CheckSum);
    object.addField(FIELD::OrdType);
    object.addField(FIELD::OrderRestrictions);
    object.addMsgType(MsgType_NewOrderSingle);
    object.addMsgField(MsgType_NewOrderSingle, FIELD::OrdType);
    object.addMsgField(MsgType_NewOrderSingle, FIELD::OrderRestrictions);
    object.addFieldType(FIELD::OrdType, TYPE::Char);
    object.addFieldValue(FIELD::OrdType, "1");
    object.addFieldType(FIELD::OrderRestrictions, TYPE::MultipleValueString);
    object.addFieldValue(FIELD::OrderRestrictions, "1");
    object.addFieldValue(FIELD::OrderRestrictions, "2");
    object.addFieldValue(FIELD::OrderRestrictions, "3");

    FIX40::NewOrderSingle message;
    message.setField(FIELD::OrderRestrictions, "Incorrect");
    CHECK_THROWS_AS(object.validate(message), IncorrectTagValue);
  }

  SECTION("checkRepeatedTag") {
    FIX40::NewOrderSingle message;
    message.setField(OrdType('1'));
    message.setField(OrdType('1'), false);
    CHECK_THROWS_AS(object.validate(message), RepeatedTag);
  }

  SECTION("checkGroupCount") {
    object.setVersion(BeginString_FIX42);
    object.addField(FIELD::BeginString);
    object.addField(FIELD::BodyLength);
    object.addField(FIELD::MsgType);
    object.addField(FIELD::CheckSum);
    object.addField(FIELD::NoAllocs);
    DataDictionary groupDD;
    groupDD.addField(FIELD::AllocAccount);
    object.addGroup("D", FIELD::NoAllocs, FIELD::AllocAccount, groupDD);
    object.addMsgType(MsgType_NewOrderSingle);
    object.addMsgField(MsgType_NewOrderSingle, FIELD::NoAllocs);

    FIX42::NewOrderSingle message;
    FIX42::NewOrderSingle::NoAllocs group;
    group.setField(AllocAccount("account"));
    message.addGroup(group);
    message.set(NoAllocs(2));
    CHECK_THROWS_AS(object.validate(message), RepeatingGroupCountMismatch);
  }

  SECTION("checkGroupRequiredFields") {
    DataDictionary object(FIX::TestSettings::pathForSpec("FIX44"));
    FIX44::NewOrderList newOrderList;
    newOrderList.setString(
        "8=FIX.4.49=18635=E49=FIXTEST56=TW128=SS134=252=20050225-16:54:3266=WMListOrID000000362394=368=1"
        "73=111=SE102354=155=IBM67=163=021=381=060=20050225-16:54:3238=1000040=115=USD10=119",
        false,
        &object);
    object.validate(newOrderList);

    newOrderList.setString(
        "8=FIX.4.49=15835=E49=FIXTEST56=TW128=SS134=252=20050225-16:54:3266=WMListOrID000000362394=368=1"
        "73=163=021=381=060=20050225-16:54:3238=1000040=115=USD10=036",
        false,
        &object);
    CHECK_THROWS_AS(object.validate(newOrderList), RequiredTagMissing);

    newOrderList.setString(
        "8=FIX.4.49=26935=E49=FIXTEST56=TW128=SS134=252=20050225-16:54:3266=WMListOrID000000362394=368=1"
        "73=211=SE102354=155=IBM67=163=021=381=060=20050225-16:54:3238=1000040=115=USD11=SE104555="
        "MSFT67=163=021=381=060=20050225-16:54:3238=1000040=115=USD47=A10=109",
        false,
        &object);
    CHECK_THROWS_AS(object.validate(newOrderList), RequiredTagMissing);

    FIX44::MarketDataRequest marketDataRequest(
        MDReqID("1"),
        SubscriptionRequestType(SubscriptionRequestType_SNAPSHOT_AND_UPDATES),
        MarketDepth(9999));
    fillHeaderTrailer(marketDataRequest);

    marketDataRequest.set(MDUpdateType(MDUpdateType_INCREMENTAL_REFRESH));
    marketDataRequest.set(AggregatedBook(true));
    marketDataRequest.set(MDImplicitDelete(true));

    FIX44::MarketDataRequest::NoRelatedSym noRelatedSym;

    noRelatedSym.set(Symbol("QQQQ"));
    marketDataRequest.addGroup(noRelatedSym);

    FIX44::MarketDataRequest::NoMDEntryTypes noMDEntryTypes;

    noMDEntryTypes.set(MDEntryType(MDEntryType_BID));
    marketDataRequest.addGroup(noMDEntryTypes);

    noMDEntryTypes.set(MDEntryType(MDEntryType_OFFER));
    marketDataRequest.addGroup(noMDEntryTypes);

    noMDEntryTypes.set(MDEntryType(MDEntryType_TRADE));
    marketDataRequest.addGroup(noMDEntryTypes);

    object.validate(marketDataRequest);

    noMDEntryTypes.removeField(FIELD::MDEntryType);
    marketDataRequest.addGroup(noMDEntryTypes);
    CHECK_THROWS_AS(object.validate(marketDataRequest), RequiredTagMissing);

    FIX44::MarketDataSnapshotFullRefresh marketDataSnapshotFullRefresh;
    marketDataSnapshotFullRefresh.set(MDReqID("1"));
    marketDataSnapshotFullRefresh.set(Symbol("QQQQ"));
    fillHeaderTrailer(marketDataSnapshotFullRefresh);

    FIX44::MarketDataSnapshotFullRefresh::NoMDEntries entry;

    entry.set(MDEntryType(MDEntryType_OFFER));
    entry.set(MDEntryPx(41.48));
    entry.set(MDEntrySize(500));
    marketDataSnapshotFullRefresh.addGroup(entry);

    entry.set(MDEntryType(MDEntryType_BID));
    entry.set(MDEntryPx(41.2));
    entry.set(MDEntrySize(300));
    marketDataSnapshotFullRefresh.addGroup(entry);

    Message message(marketDataSnapshotFullRefresh.toString(), object);
    object.validate(message);
  }

  SECTION("readFromFile") {
    DataDictionary object(FIX::TestSettings::pathForSpec("FIX43"));
    CHECK(object.isHeaderField(56));
    CHECK(!object.isHeaderField(38));
    CHECK(!object.isHeaderField(10));

    CHECK(object.isTrailerField(10));
    CHECK(!object.isTrailerField(38));
    CHECK(!object.isTrailerField(56));

    CHECK(object.isMsgType("A"));
    CHECK(object.isMsgField("A", 383));

    TYPE::Type type = TYPE::Unknown;
    CHECK(object.getFieldType(383, type));
    CHECK(TYPE::Length == type);

    CHECK(object.isRequiredField("A", 108));
    CHECK(!object.isRequiredField("A", 383));
    CHECK(object.isRequiredField("6", 28));
    CHECK(!object.isRequiredField("B", 55));

    CHECK(object.isFieldValue(40, "A"));
    CHECK(!object.isFieldValue(40, "Z"));

    std::string name;
    CHECK(object.getFieldName(1, name));
    CHECK("Account" == name);
    CHECK(object.getFieldName(11, name));
    CHECK("ClOrdID" == name);
    CHECK(object.getFieldName(8, name));
    CHECK("BeginString" == name);

    CHECK(object.getValueName(18, "1", name));
    CHECK("NOT_HELD" == name);
    CHECK(object.getValueName(18, "2", name));
    CHECK("WORK" == name);
    CHECK(object.getValueName(18, "W", name));
    CHECK("PEG_TO_VWAP" == name);

    const DataDictionary *pDD = 0;
    int delim = 0;
    CHECK(object.getGroup("b", 296, delim, pDD));
    CHECK(302 == delim);
    CHECK(pDD->isField(295));
    CHECK(pDD->isField(310));
    CHECK(!pDD->isField(55));
    CHECK(pDD->getGroup("b", 295, delim, pDD));
    CHECK(299 == delim);
    CHECK(pDD->isField(55));
    CHECK(!pDD->isField(310));
    CHECK(object.getGroup("8", 453, delim, pDD));
    CHECK(448 == delim);
    CHECK(object.getGroup("y", 146, delim, pDD));
    CHECK(55 == delim);
  }

  SECTION("readFromStream") {
    std::fstream stream(FIX::TestSettings::pathForSpec("FIX43"));
    DataDictionary object(stream);
  }

  SECTION("copy") {
    object.setVersion(BeginString_FIX40);
    object.addMsgType(MsgType_NewOrderSingle);
    object.addMsgField(MsgType_NewOrderSingle, FIELD::OrdType);
    object.addFieldType(FIELD::OrdType, TYPE::Char);
    object.addFieldValue(FIELD::OrdType, "1");

    DataDictionary dataDictionary1;
    dataDictionary1.addFieldType(FIELD::HeartBtInt, TYPE::String);
    DataDictionary dataDictionary2;
    dataDictionary2.addFieldType(FIELD::MsgType, TYPE::Char);
    dataDictionary1.addGroup("A", 1, 2, dataDictionary2);
    object.addGroup("A", 10, 20, dataDictionary1);

    DataDictionary copy = object;
    TYPE::Type type;
    int delim = 0;

    CHECK(BeginString_FIX40 == object.getVersion());
    CHECK(copy.isMsgType(MsgType_NewOrderSingle));
    CHECK(copy.isMsgField(MsgType_NewOrderSingle, FIELD::OrdType));
    CHECK(copy.getFieldType(FIELD::OrdType, type));
    CHECK(TYPE::Char == type);
    CHECK(copy.isFieldValue(FIELD::OrdType, "1"));

    const DataDictionary *pDD = 0;
    CHECK(copy.getGroup("A", 10, delim, pDD));
    CHECK(pDD->getFieldType(FIELD::HeartBtInt, type));
    CHECK(TYPE::String == type);
    CHECK(20 == delim);

    CHECK(pDD->getGroup("A", 1, delim, pDD));
    CHECK(pDD->getFieldType(FIELD::MsgType, type));
    CHECK(TYPE::Char == type);
    CHECK(2 == delim);
  }

  SECTION("getMessageOrderedFields_StoredOrder") {
    object.preserveMessageFieldsOrder(true);

    object.addMsgField("msg", 1);
    object.addMsgField("msg", 2);
    object.addMsgField("msg", 3);

    message_order msg_order = object.getMessageOrderedFields("msg");

    FieldMap fieldMap(msg_order);
    fieldMap.setField(3, "Field3");
    fieldMap.setField(1, "Field1");
    fieldMap.setField(2, "Field2");

    int pos1 = 0, pos2 = 0, pos3 = 0;
    int iterationCount = 0;
    for (FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
      if (iterationCount == 0) {
        pos1 = itr->getTag();
      } else if (iterationCount == 1) {
        pos2 = itr->getTag();
      } else if (iterationCount == 2) {
        pos3 = itr->getTag();
      }
    }

    CHECK(1 == pos1);
    CHECK(2 == pos2);
    CHECK(3 == pos3);
  }

  SECTION("getMessageOrderedFields_GetOrderTwice") {
    object.preserveMessageFieldsOrder(true);

    object.addMsgField("msg", 1);
    object.addMsgField("msg", 2);
    object.addMsgField("msg", 3);

    message_order msg_order = object.getMessageOrderedFields("msg");
    // Get Order Second Time
    msg_order = object.getMessageOrderedFields("msg");

    FieldMap fieldMap(msg_order);
    fieldMap.setField(3, "Field3");
    fieldMap.setField(1, "Field1");
    fieldMap.setField(2, "Field2");

    int pos1 = 0, pos2 = 0, pos3 = 0;
    int iterationCount = 0;
    for (FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
      if (iterationCount == 0) {
        pos1 = itr->getTag();
      } else if (iterationCount == 1) {
        pos2 = itr->getTag();
      } else if (iterationCount == 2) {
        pos3 = itr->getTag();
      }
    }

    CHECK(1 == pos1);
    CHECK(2 == pos2);
    CHECK(3 == pos3);
  }

  SECTION("getMessageOrderedFields_NoStoredOrder") {
    CHECK_THROWS_AS(object.getMessageOrderedFields("none"), ConfigError);
  }

  SECTION("addFieldName_addNameTwiceError") {
    object.addFieldName(1, "name");

    CHECK_THROWS_AS(object.addFieldName(1, "name"), ConfigError);
  }

  SECTION("getHeaderOrderedFields_StoredOrder") {
    object.preserveMessageFieldsOrder(true);

    object.addHeaderField(1, true);
    object.addHeaderField(2, true);
    object.addHeaderField(3, true);

    message_order header_order = object.getHeaderOrderedFields();

    FieldMap fieldMap(header_order);
    fieldMap.setField(3, "Field3");
    fieldMap.setField(1, "Field1");
    fieldMap.setField(2, "Field2");

    int pos1 = 0, pos2 = 0, pos3 = 0;
    int iterationCount = 0;
    for (FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
      if (iterationCount == 0) {
        pos1 = itr->getTag();
      } else if (iterationCount == 1) {
        pos2 = itr->getTag();
      } else if (iterationCount == 2) {
        pos3 = itr->getTag();
      }
    }

    CHECK(1 == pos1);
    CHECK(2 == pos2);
    CHECK(3 == pos3);
  }

  SECTION("getTrailerOrderedFields_StoredOrder") {
    object.preserveMessageFieldsOrder(true);

    object.addTrailerField(1, true);
    object.addTrailerField(2, true);
    object.addTrailerField(3, true);

    message_order trailer_order = object.getTrailerOrderedFields();

    FieldMap fieldMap(trailer_order);
    fieldMap.setField(3, "Field3");
    fieldMap.setField(1, "Field1");
    fieldMap.setField(2, "Field2");

    int pos1 = 0, pos2 = 0, pos3 = 0;
    int iterationCount = 0;
    for (FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
      if (iterationCount == 0) {
        pos1 = itr->getTag();
      } else if (iterationCount == 1) {
        pos2 = itr->getTag();
      } else if (iterationCount == 2) {
        pos3 = itr->getTag();
      }
    }

    CHECK(1 == pos1);
    CHECK(2 == pos2);
    CHECK(3 == pos3);
  }

  SECTION("getHeaderOrderedFields_HeaderDoesNotHaveStoredOrderValues") {
    object.preserveMessageFieldsOrder(true);
    CHECK_THROWS_AS(object.getHeaderOrderedFields(), ConfigError);
  }

  SECTION("getTrailerOrderedFields_TrailerDoesNotHaveStoredOrderValues") {
    object.preserveMessageFieldsOrder(true);
    CHECK_THROWS_AS(object.getTrailerOrderedFields(), ConfigError);
  }

  SECTION("getHeaderOrderedFields_GetOrderTwice") {
    object.preserveMessageFieldsOrder(true);

    object.addHeaderField(1, true);
    object.addHeaderField(2, true);
    object.addHeaderField(3, true);

    message_order header_order = object.getHeaderOrderedFields();
    // Get Order Second Time
    header_order = object.getHeaderOrderedFields();

    FieldMap fieldMap(header_order);
    fieldMap.setField(3, "Field3");
    fieldMap.setField(1, "Field1");
    fieldMap.setField(2, "Field2");

    int pos1 = 0, pos2 = 0, pos3 = 0;
    int iterationCount = 0;
    for (FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
      if (iterationCount == 0) {
        pos1 = itr->getTag();
      } else if (iterationCount == 1) {
        pos2 = itr->getTag();
      } else if (iterationCount == 2) {
        pos3 = itr->getTag();
      }
    }

    CHECK(1 == pos1);
    CHECK(2 == pos2);
    CHECK(3 == pos3);
  }

  SECTION("getTrailerOrderedFields_GetOrderTwice") {
    object.preserveMessageFieldsOrder(true);

    object.addTrailerField(1, true);
    object.addTrailerField(2, true);
    object.addTrailerField(3, true);

    message_order trailer_order = object.getTrailerOrderedFields();
    // Get Order Second Time
    trailer_order = object.getTrailerOrderedFields();

    FieldMap fieldMap(trailer_order);
    fieldMap.setField(3, "Field3");
    fieldMap.setField(1, "Field1");
    fieldMap.setField(2, "Field2");

    int pos1 = 0, pos2 = 0, pos3 = 0;
    int iterationCount = 0;
    for (FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
      if (iterationCount == 0) {
        pos1 = itr->getTag();
      } else if (iterationCount == 1) {
        pos2 = itr->getTag();
      } else if (iterationCount == 2) {
        pos3 = itr->getTag();
      }
    }

    CHECK(1 == pos1);
    CHECK(2 == pos2);
    CHECK(3 == pos3);
  }

  SECTION("isFieldValue_MultipleValueType_FieldValueExists") {
    object.addFieldType(1, TYPE::MultipleValueString);
    object.addFieldValue(1, "value1");
    object.addFieldValue(1, "value2");

    CHECK(object.isFieldValue(1, "value1 value2"));
  }

  SECTION("isFieldValue_MultipleValueType_FieldValueDoesNotExist") {
    object.addFieldType(1, TYPE::MultipleValueString);
    object.addFieldValue(1, "value1");
    object.addFieldValue(1, "value2");

    CHECK(!object.isFieldValue(1, "value5"));
  }

  SECTION("dataDictionaryValidate_UnSupportedVersion") {
    object.addHeaderField(FIELD::BeginString, true);
    object.addHeaderField(FIELD::MsgType, true);
    object.setVersion("FIX.1000");

    FIX::Message msg;
    msg.getHeader().setField(BeginString(BeginString_FIX40));
    msg.getHeader().setField(MsgType(MsgType_NewOrderSingle));

    CHECK_THROWS_AS(DataDictionary::validate(msg, &object, &object), UnsupportedVersion);
  }

  SECTION("dataDictionaryValidate_HeaderFieldInBody_TagOutOfOrderForSessionDictionary") {
    object.checkFieldsOutOfOrder(true);
    object.addHeaderField(FIELD::BeginString, true);
    object.addHeaderField(FIELD::MsgType, true);
    object.addField(FIELD::ClOrdID);
    object.addField(FIELD::MsgType);
    object.setVersion(BeginString_FIX40);

    FIX::Message msg;
    std::string delimSOH = "\x01";
    std::string rawFixMsg = "8=FIX.4.0" + delimSOH + "35=D" + delimSOH + "11=Clordid" + delimSOH + "35=D" + delimSOH;
    msg.setString(rawFixMsg, false, &object, &object);

    CHECK_THROWS_AS(DataDictionary::validate(msg, &object, nullptr), TagOutOfOrder);
  }

  SECTION("dataDictionaryValidate_HeaderFieldInBody_TagOutOfOrderForAppDictionary") {
    object.checkFieldsOutOfOrder(true);
    object.addHeaderField(FIELD::BeginString, true);
    object.addHeaderField(FIELD::MsgType, true);
    object.addField(FIELD::ClOrdID);
    object.addField(FIELD::MsgType);
    object.setVersion(BeginString_FIX40);

    FIX::Message msg;
    std::string delimSOH = "\x01";
    std::string rawFixMsg = "8=FIX.4.0" + delimSOH + "35=D" + delimSOH + "11=Clordid" + delimSOH + "35=D" + delimSOH;
    msg.setString(rawFixMsg, false, &object, &object);

    CHECK_THROWS_AS(DataDictionary::validate(msg, nullptr, &object), TagOutOfOrder);
  }

  SECTION("readFromURL_UrlNotParsable") { CHECK_THROWS_AS(object.readFromURL("invalidurl"), ConfigError); }

  SECTION("readFromURL_FileAtUrlNotParsable") {
    CHECK_THROWS_AS(object.readFromURL("resources/invalid_datadictionary.xml"), ConfigError);
  }

  SECTION("readFromStream_StreamDataNotParsable") {
    std::stringbuf buffer; // empty buffer contains no parsable data
    std::istream is(&buffer);
    CHECK_THROWS_AS(object.readFromStream(is), ConfigError);
  }

  SECTION("readFromDocument_FIXNodeNotAtRoot") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<notFIXRoot></notFIXroot>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_TypeAttributeNotFIXorFIXT") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='WrongType' major='4' minor='2' servicepack='0'></fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_MajorAttributeMissing") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' minor='2' servicepack='0'></fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_MinorAttributeMissing") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' servicepack='0'></fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_FieldsSectionMissing") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'></fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_FieldNameAttributeMissing") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<fields>"
                                "<field number='8' type='STRING' />" // name attribute missing
                                "</fields>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_FieldNumberAttributeMissing") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<fields>"
                                "<field name='BeginString' type='STRING' />" // number attribute missing
                                "</fields>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_FieldTypeAttributeMissing") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<fields>"
                                "<field number='8' name='BeginString' />" // type attribute missing
                                "</fields>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_FieldValueNodeMissingEnumAttribute") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value description='SINGLE_SECURITY' />" // enum attribute missing
                                "</field>"
                                "</fields>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_HeaderNodeMissing") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "</fields>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_HeaderFieldNodeMissingNameAttribute") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field required='Y' />" // name attribute missing
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "</fields>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_TrailerNodeMissing") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "</fields>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_TrailerFieldNodeMissingNameAttribute") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "</fields>"
                                "<trailer>"
                                "<field required='Y' />" // name attribute missing
                                "</trailer>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_MessagesNodeMissing") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "<field number='93' name='SignatureLength' type='STRING' />"
                                "<field number='627' name='NoHops' type='NUMINGROUP' />"
                                "<field number='628' name='HopCompID' type='STRING' />"
                                "</fields>"
                                "<trailer>"
                                "<field name='SignatureLength' required='Y' />"
                                "<group name='NoHops' required='N'>"
                                "<field name='HopCompID' required='N' />"
                                "</group>"
                                "</trailer>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_MessageNodeMissingMsgTypeAttribute") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "<field number='93' name='SignatureLength' type='STRING' />"
                                "<field number='627' name='NoHops' type='NUMINGROUP' />"
                                "<field number='628' name='HopCompID' type='STRING' />"
                                "</fields>"
                                "<messages>"
                                "<message name='Advertisement' msgcat='app' />" // msgtype attribute missing
                                "</messages>"
                                "<trailer>"
                                "<field name='SignatureLength' required='Y' />"
                                "<group name='NoHops' required='N'>"
                                "<field name='HopCompID' required='N' />"
                                "</group>"
                                "</trailer>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_MessagesFieldNodeMissingNameAttribute") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "<field number='93' name='SignatureLength' type='STRING' />"
                                "<field number='627' name='NoHops' type='NUMINGROUP' />"
                                "<field number='628' name='HopCompID' type='STRING' />"
                                "</fields>"
                                "<messages>"
                                "<message name='Advertisement' msgtype='7' msgcat='app'>"
                                "<field required='Y' />" // name attribute missing
                                "</message>"
                                "</messages>"
                                "<trailer>"
                                "<field name='SignatureLength' required='Y' />"
                                "<group name='NoHops' required='N'>"
                                "<field name='HopCompID' required='N' />"
                                "</group>"
                                "</trailer>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_GroupNodeMissingNameAttribute") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "<field number='93' name='SignatureLength' type='STRING' />"
                                "<field number='627' name='NoHops' type='NUMINGROUP' />"
                                "<field number='628' name='HopCompID' type='STRING' />"
                                "<field number='55' name='Symbol' type='STRING' />"
                                "</fields>"
                                "<messages>"
                                "<message name='Advertisement' msgtype='7' msgcat='app'>"
                                "<field name='BeginString' required='Y' />"
                                "<component name='Instrument' required='Y' />"
                                "</message>"
                                "</messages>"
                                "<trailer>"
                                "<field name='SignatureLength' required='Y' />"
                                "<group name='NoHops' required='N'>"
                                "<field name='HopCompID' required='N' />"
                                "</group>"
                                "</trailer>"
                                "<components>"
                                "<component name='Instrument'>"
                                "<group required='N'>" // Missing Group Node
                                "<field name='HopCompID' required='N' />"
                                "</group>"
                                "</component>"
                                "</components>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_MessagesGroupNodeFieldNodeMissingNameAttribute") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "<field number='93' name='SignatureLength' type='STRING' />"
                                "<field number='627' name='NoHops' type='NUMINGROUP' />"
                                "<field number='628' name='HopCompID' type='STRING' />"
                                "<field number='215' name='NoRoutingIDs' type='STRING' />"
                                "</fields>"
                                "<messages>"
                                "<message name='Advertisement' msgtype='7' msgcat='app'>"
                                "<field name='BeginString' required='Y' />"
                                "<group name='NoRoutingIDs' required='N'>"
                                "<field required='N' />" // name attribute missing
                                "</group>"
                                "</message>"
                                "</messages>"
                                "<trailer>"
                                "<field name='SignatureLength' required='Y' />"
                                "<group name='NoHops' required='N'>"
                                "<field name='HopCompID' required='N' />"
                                "</group>"
                                "</trailer>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_GroupFieldMissingAssociatedFieldNodeInFieldsNode") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "<field number='93' name='SignatureLength' type='STRING' />"
                                "<field number='627' name='NoHops' type='NUMINGROUP' />"
                                "</fields>"
                                "<messages>"
                                "<message name='Advertisement' msgtype='7' msgcat='app'>"
                                "<field name='BeginString' required='Y' />"
                                "</message>"
                                "</messages>"
                                "<trailer>"
                                "<field name='SignatureLength' required='Y' />"
                                "<group name='NoHops' required='N'>"
                                "<field name='HopCompID' required='N' />" // Missing associated field in fields node
                                "</group>"
                                "</trailer>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_ComponentNodeMissingNameAttribute") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "<field number='93' name='SignatureLength' type='STRING' />"
                                "<field number='627' name='NoHops' type='NUMINGROUP' />"
                                "<field number='628' name='HopCompID' type='STRING' />"
                                "<field number='55' name='Symbol' type='STRING' />"
                                "</fields>"
                                "<messages>"
                                "<message name='Advertisement' msgtype='7' msgcat='app'>"
                                "<field name='BeginString' required='Y' />"
                                "<component  required='Y' />" // Missing name attribute
                                "</message>"
                                "</messages>"
                                "<trailer>"
                                "<field name='SignatureLength' required='Y' />"
                                "<group name='NoHops' required='N'>"
                                "<field name='HopCompID' required='N' />"
                                "</group>"
                                "</trailer>"
                                "<components>"
                                "<component name='Instrument'>"
                                "<field name='Symbol' required='N' />"
                                "</component>"
                                "</components>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_ComponentNodeInMessageNotFound") {
    std::stringbuf buffer;
    std::string dictionaryXml
        = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
          "<header>"
          "<field name='BeginString' required='Y' />"
          "</header>"
          "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
          "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
          "<field number='93' name='SignatureLength' type='STRING' />"
          "<field number='627' name='NoHops' type='NUMINGROUP' />"
          "<field number='628' name='HopCompID' type='STRING' />"
          "<field number='55' name='Symbol' type='STRING' />"
          "</fields>"
          "<messages>"
          "<message name='Advertisement' msgtype='7' msgcat='app'>"
          "<field name='BeginString' required='Y' />"
          "<component name='Unknown' required='Y' />" // Component does not exist in components node
          "</message>"
          "</messages>"
          "<trailer>"
          "<field name='SignatureLength' required='Y' />"
          "<group name='NoHops' required='N'>"
          "<field name='HopCompID' required='N' />"
          "</group>"
          "</trailer>"
          "<components>"
          "<component name='Instrument'>"
          "<field name='Symbol' required='N' />"
          "</component>"
          "</components>"
          "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_ComponentNodeHasFieldNodeWithMissingNameAttribute") {
    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "<field number='93' name='SignatureLength' type='STRING' />"
                                "<field number='627' name='NoHops' type='NUMINGROUP' />"
                                "<field number='628' name='HopCompID' type='STRING' />"
                                "<field number='55' name='Symbol' type='STRING' />"
                                "</fields>"
                                "<messages>"
                                "<message name='Advertisement' msgtype='7' msgcat='app'>"
                                "<field name='BeginString' required='Y' />"
                                "<component name='Instrument' required='Y' />"
                                "</message>"
                                "</messages>"
                                "<trailer>"
                                "<field name='SignatureLength' required='Y' />"
                                "<group name='NoHops' required='N'>"
                                "<field name='HopCompID' required='N' />"
                                "</group>"
                                "</trailer>"
                                "<components>"
                                "<component name='Instrument'>"
                                "<field required='N' />" // Missing Name Attribute
                                "</component>"
                                "</components>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);

    CHECK_THROWS_AS(object.readFromDocument(pDoc), ConfigError);
  }

  SECTION("readFromDocument_VersionPreFIX42_FieldTypeCharTreatedAsString") {
    object.setVersion(BeginString_FIX40);

    std::stringbuf buffer;
    std::string dictionaryXml = "<fix type='FIX' major='4' minor='0' servicepack='0'>"
                                "<header>"
                                "<field name='BeginString' required='Y' />"
                                "</header>"
                                "<fields>"
                                "<field number='8' name='BeginString' type='STRING' >"
                                "<value enum='1' description='SINGLE_SECURITY' />"
                                "</field>"
                                "<field number='93' name='SignatureLength' type='STRING' />"
                                "<field number='627' name='NoHops' type='NUMINGROUP' />"
                                "<field number='628' name='HopCompID' type='STRING' />"
                                "<field number='55' name='Symbol' type='CHAR' />" // Should be treated as STRING
                                "</fields>"
                                "<messages>"
                                "<message name='Advertisement' msgtype='7' msgcat='app'>"
                                "<field name='BeginString' required='Y' />"
                                "</message>"
                                "</messages>"
                                "<trailer>"
                                "<field name='SignatureLength' required='Y' />"
                                "</trailer>"
                                "</fix>";
    buffer.sputn(dictionaryXml.c_str(), dictionaryXml.size());
    std::istream is(&buffer);

    DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
    pDoc->load(is);
    object.readFromDocument(pDoc);

    FIX::TYPE::Type actualType;
    object.getFieldType(55, actualType);
    CHECK(TYPE::String == actualType);
  }
}
