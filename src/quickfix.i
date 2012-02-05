%module(directors="1") quickfix

%include typemaps.i
%include std_string.i
%include exception.i
%include carrays.i

%feature("director") FIX::Application;
%feature("classic") FIX::Exception;

%array_class(int, IntArray);

%ignore _REENTRANT;
%rename(SocketInitiatorBase) FIX::SocketInitiator;
%rename(SocketAcceptorBase) FIX::SocketAcceptor;

%{
#include <config.h>
#include "../C++/Exceptions.h"
#include "../C++/Field.h"
#include "../C++/Message.h"
#include "../C++/Group.h"
#include "../C++/Fields.h"
#include "../C++/Values.h"
#include "../C++/SessionID.h"
#include "../C++/Dictionary.h"
#include "../C++/SessionSettings.h"
#include "../C++/Session.h"
#include "../C++/SessionID.h"
#include "../C++/Log.h"
#include "../C++/FileLog.h"
#include "../C++/MessageStore.h"
#include "../C++/FileStore.h"
#include "../C++/Application.h"
#include "../C++/Initiator.h"
#include "../C++/SocketInitiator.h"
#include "../C++/Acceptor.h"
#include "../C++/SocketAcceptor.h"
#include "../C++/DataDictionary.h"
typedef FIX::UtcTimeStamp UtcTimeStamp;
typedef FIX::UtcDate UtcDate;
typedef FIX::UtcTimeOnly UtcTimeOnly;
typedef FIX::message_order message_order;
typedef FIX::Group Group;
typedef FIX::DataDictionary DataDictionary;
typedef FIX::DataDictionaryProvider DataDictionaryProvider;
typedef FIX::MsgType MsgType;
typedef FIX::BeginString BeginString;
typedef FIX::ApplVerID ApplVerID;
typedef FIX::SessionID SessionID;
typedef FIX::Session Session;
typedef FIX::Application Application;
typedef FIX::DateTime DateTime;
typedef FIX::TimeRange TimeRange;
typedef FIX::Responder Responder;
typedef FIX::Log Log;
typedef FIX::LogFactory LogFactory;
typedef FIX::MessageStore MessageStore;
typedef FIX::MessageStoreFactory MessageStoreFactory;
typedef FIX::Mutex Mutex;
typedef FIX::DOMDocumentPtr DOMDocumentPtr;
%}

%typedef DoubleField PriceField;
%typedef DoubleField AmtField;
%typedef DoubleField QtyField;
%typedef StringField CurrencyField;
%typedef StringField MultipleValueStringField;
%typedef StringField MultipleStringValueField;
%typedef StringField MultipleCharValueField;
%typedef StringField ExchangeField;
%typedef StringField LocalMktDateField;
%typedef StringField DataField;
%typedef DoubleField FloatField;
%typedef DoubleField PriceOffsetField;
%typedef StringField MonthField;
%typedef StringField MonthYearField;
%typedef StringField DayOfMonthField;
%typedef UtcDateField UtcDateOnlyField;
%typedef IntField LengthField;
%typedef IntField NumInGroupField;
%typedef IntField SeqNumField;
%typedef DoubleField PercentageField;
%typedef StringField CountryField;
%typedef StringField TzTimeOnlyField;
%typedef StringField TzTimeStampField;

%typedef std::string FIX::STRING;
%typedef char FIX::CHAR;
%typedef double FIX::PRICE;
%typedef int FIX::INT;
%typedef double FIX::AMT;
%typedef double FIX::QTY;
%typedef std::string FIX::CURRENCY;
%typedef std::string FIX::MULTIPLEVALUESTRING;
%typedef std::string FIX::MULTIPLESTRINGVALUE;
%typedef std::string FIX::MULTIPLECHARVALUE;
%typedef std::string FIX::EXCHANGE;
%typedef UtcTimeStamp FIX::UTCTIMESTAMP;
%typedef bool FIX::BOOLEAN;
%typedef std::string FIX::LOCALMKTDATE;
%typedef std::string FIX::DATA;
%typedef double FIX::FLOAT;
%typedef double FIX::PRICEOFFSET;
%typedef std::string FIX::MONTHYEAR;
%typedef std::string FIX::DAYOFMONTH;
%typedef UtcDate FIX::UTCDATE;
%typedef UtcDateOnly FIX::UTCDATEONLY;
%typedef UtcTimeOnly FIX::UTCTIMEONLY;
%typedef int FIX::NUMINGROUP;
%typedef double FIX::PERCENTAGE;
%typedef int FIX::SEQNUM;
%typedef int FIX::LENGTH;
%typedef std::string FIX::COUNTRY;
%typedef std::string FIX::TZTIMEONLY;
%typedef std::string FIX::TZTIMESTAMP;

%exceptionclass FIX::Exception;

%typemap(in) FIX::DataDictionary const *& (FIX::DataDictionary* temp) {
  $1 = new FIX::DataDictionary*[1];
  *$1 = temp;
} 	 

%typemap(free) FIX::DataDictionary const *& {
  delete[] temp; 	 
} 	 
	  	 
%typemap(argout) FIX::DataDictionary const *& {
  void* argp;
  FIX::DataDictionary* pDD = 0;
  int res = SWIG_ConvertPtr($input, &argp, SWIGTYPE_p_FIX__DataDictionary, 0 );
  pDD = reinterpret_cast< FIX::DataDictionary * >(argp);
  *pDD = *(*$1);
} 	 

%typemap(out) const BeginString & {
  $result = SWIG_NewPointerObj(SWIG_as_voidptr(result), SWIGTYPE_p_FIX__StringField, 0 |  0 );
} 	 
	  	 
%typemap(out) const SenderCompID & {
  $result = SWIG_NewPointerObj(SWIG_as_voidptr(result), SWIGTYPE_p_FIX__StringField, 0 |  0 ); 	 
} 	 
	  	 
%typemap(out) const TargetCompID & { 	 
  $result = SWIG_NewPointerObj(SWIG_as_voidptr(result), SWIGTYPE_p_FIX__StringField, 0 |  0 ); 	 
}

%init %{
#ifndef _MSC_VER
      struct sigaction new_action, old_action;
      new_action.sa_handler = SIG_DFL;
      sigemptyset( &new_action.sa_mask );
      new_action.sa_flags = 0;
      sigaction( SIGINT, &new_action, &old_action );
#endif
%}

%extend FIX::Exception {
  std::string __str__() {
    return self->what();
  }
}

%extend FIX::Message {
  std::string __str__() {
    return self->toString();
  }
}

%extend FIX::SessionID {
  std::string __str__() {
    return self->toString();
  }
}

%extend FIX::FieldBase {
  std::string __str__() {
    return self->getValue();
  }
}

%feature("shadow") FIX::Initiator::start() %{
def start(self):
	thread.start_new_thread(_quickfix_start_thread, (self,))
%}

%feature("shadow") FIX::Acceptor::start() %{
def start(self):
	thread.start_new_thread(_quickfix_start_thread, (self,))
%}

%include "../C++/Exceptions.h"
%include "../C++/Field.h"
%include "../C++/FieldMap.h"
%include "../C++/Message.h"
%include "../C++/Group.h"
%include "../C++/Fields.h"
%include "../C++/FixFields.h"
%include "../C++/Values.h"
%include "../C++/FixValues.h"
%include "../C++/SessionID.h"
%include "../C++/Dictionary.h"
%include "../C++/SessionSettings.h"
%include "../C++/Session.h"
%include "../C++/SessionID.h"
%include "../C++/Log.h"
%include "../C++/FileLog.h"
%include "../C++/MessageStore.h"
%include "../C++/FileStore.h"
%include "../C++/Application.h"
%include "../C++/Initiator.h"
%include "../C++/SocketInitiator.h"
%include "../C++/Acceptor.h"
%include "../C++/SocketAcceptor.h"
%include "../C++/DataDictionary.h"
