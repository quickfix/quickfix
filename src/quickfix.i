#include "C++/DataDictionary.h"
#include "C++/Exceptions.h"
#include <type_traits>

%module(directors="1") quickfix

%exceptionclass FIX::Exception;

%include typemaps.i
%include std_string.i
%include exception.i
%include carrays.i
%include std_unique_ptr.i
%include std_set.i
%include std_vector.i
%include stdint.i

namespace std
{
  %template(VectorString) vector<std::string>;
};

%feature("director") FIX::Application;
%feature("classic") FIX::Exception;
%feature("director") FIX::LogFactory;
%feature("director") FIX::Log;

%array_class(int, IntArray);

%ignore _REENTRANT;
%rename(SocketInitiatorBase) FIX::SocketInitiator;
%rename(SocketAcceptorBase) FIX::SocketAcceptor;
%rename(SSLSocketInitiatorBase) FIX::SSLSocketInitiator;
%rename(SSLSocketAcceptorBase) FIX::SSLSocketAcceptor;
%rename(ThreadedSocketInitiatorBase) FIX::ThreadedSocketInitiator;
%rename(ThreadedSocketAcceptorBase) FIX::ThreadedSocketAcceptor;

// Rename enum's as they're clashing with some classes
%rename("%(regex:/^FIX::TYPE::(.*)/Enum\\1/)s", regextarget=1, fullname=1) "^FIX::TYPE::";

// Misunderstanding something here but these constants, declared in the header
// are causing undefined symbol errors when loading the library in python so
// ignoring
%ignore FIX::DateTime::SECONDS_PER_DAY;
%ignore FIX::DateTime::SECONDS_PER_HOUR;
%ignore FIX::DateTime::SECONDS_PER_MIN;
%ignore FIX::DateTime::MINUTES_PER_HOUR;
%ignore FIX::DateTime::NANOS_PER_DAY;
%ignore FIX::DateTime::NANOS_PER_HOUR;
%ignore FIX::DateTime::NANOS_PER_MIN;
%ignore FIX::DateTime::NANOS_PER_SEC;
%ignore FIX::DateTime::JULIAN_19700101;
%ignore FIX::DateTime::getYMD;
%ignore FIX::DateTime::getHMS;

%{
#include <config.h>
#include <Except.h>
#include <Exceptions.h>
#include <FieldTypes.h>
#include <Fields.h>
#include <FixFields.h>
#include <Message.h>
#include <Group.h>
#include <Field.h>
#include <FixCommonFields.h>
#include <Values.h>
#include <SessionID.h>
#include <Dictionary.h>
#include <SessionSettings.h>
#include <Session.h>
#include <Log.h>
#include <FileLog.h>
#include <MessageStore.h>
#include <FileStore.h>
#include <Application.h>
#include <Initiator.h>
#include <SocketInitiator.h>
#include <Acceptor.h>
#include <SocketAcceptor.h>
#include <DataDictionary.h>
#include <SocketMonitor.h>
#include <DatabaseConnectionID.h>
#include <DatabaseConnectionPool.h>
#include <ThreadedSocketAcceptor.h>
#include <ThreadedSocketInitiator.h>
#include <ThreadedSocketConnection.h>
#include <NullStore.h>

#ifdef HAVE_SSL
#include <SSLSocketAcceptor.h>
#include <SSLSocketInitiator.h>
#include <SSLSocketConnection.h>
#else
#include <SSLStubs.h>
#endif

#ifdef HAVE_MYSQL
#include <MySQLConnection.h>
#include <MySQLStore.h>
#include <MySQLLog.h>
#else
#include <MySQLStubs.h>
#endif

#ifdef HAVE_POSTGRESQL
#include <PostgreSQLConnection.h>
#include <PostgreSQLStore.h>
#include <PostgreSQLLog.h>
#else
#include <PostgreSQLStubs.h>
#endif

#include <functional>
#ifdef SWIGPYTHON
#include "datetime.h"
#endif

#ifdef SWIGPYTHON
template<typename Exception>
void raisePythonException(Exception const& e, swig_type_info* swigType)
{
  SWIG_Python_Raise(SWIG_NewPointerObj((new Exception(static_cast<const Exception&>(e))),swigType,SWIG_POINTER_OWN), typeid(Exception).name(), swigType);
}

bool tryPythonException(std::function<bool()> const& function)
{
  try
  {
    return function();
  }
  catch(FIX::DataDictionaryNotFound const& e)
  {
    raisePythonException<FIX::DataDictionaryNotFound>(e, SWIGTYPE_p_FIX__DataDictionaryNotFound); return false;
  }
  catch(FIX::FieldNotFound const& e)
  {
    raisePythonException<FIX::FieldNotFound>(e, SWIGTYPE_p_FIX__FieldNotFound); return false;
  }
  catch(FIX::FieldConvertError const& e)
  {
    raisePythonException<FIX::FieldConvertError>(e, SWIGTYPE_p_FIX__FieldConvertError); return false;
  }
  catch(FIX::MessageParseError const& e)
  {
    raisePythonException<FIX::MessageParseError>(e, SWIGTYPE_p_FIX__MessageParseError); return false;
  }
  catch(FIX::InvalidMessage const& e)
  {
    raisePythonException<FIX::InvalidMessage>(e, SWIGTYPE_p_FIX__InvalidMessage); return false;
  }
  catch(FIX::ConfigError const& e)
  {
    raisePythonException<FIX::ConfigError>(e, SWIGTYPE_p_FIX__ConfigError); return false;
  }
  catch(FIX::RuntimeError const& e)
  {
    raisePythonException<FIX::RuntimeError>(e, SWIGTYPE_p_FIX__RuntimeError); return false;
  }
  catch(FIX::InvalidTagNumber const& e)
  {
    raisePythonException<FIX::InvalidTagNumber>(e, SWIGTYPE_p_FIX__InvalidTagNumber); return false;
  }
  catch(FIX::RequiredTagMissing const& e)
  {
    raisePythonException<FIX::RequiredTagMissing>(e, SWIGTYPE_p_FIX__RequiredTagMissing); return false;
  }
  catch(FIX::TagNotDefinedForMessage const& e)
  {
    raisePythonException<FIX::TagNotDefinedForMessage>(e, SWIGTYPE_p_FIX__TagNotDefinedForMessage); return false;
  }
  catch(FIX::NoTagValue const& e)
  {
    raisePythonException<FIX::NoTagValue>(e, SWIGTYPE_p_FIX__NoTagValue); return false;
  }
  catch(FIX::IncorrectTagValue const& e)
  {
    raisePythonException<FIX::IncorrectTagValue>(e, SWIGTYPE_p_FIX__IncorrectTagValue); return false;
  }
  catch(FIX::IncorrectDataFormat const& e)
  {
    raisePythonException<FIX::IncorrectDataFormat>(e, SWIGTYPE_p_FIX__IncorrectDataFormat); return false;
  }
  catch(FIX::IncorrectMessageStructure const& e)
  {
    raisePythonException<FIX::IncorrectMessageStructure>(e, SWIGTYPE_p_FIX__IncorrectMessageStructure); return false;
  }
  catch(FIX::DuplicateFieldNumber const& e)
  {
    raisePythonException<FIX::DuplicateFieldNumber>(e, SWIGTYPE_p_FIX__DuplicateFieldNumber); return false;
  }
  catch(FIX::InvalidMessageType const& e)
  {
    raisePythonException<FIX::InvalidMessageType>(e, SWIGTYPE_p_FIX__InvalidMessageType); return false;
  }
  catch(FIX::UnsupportedMessageType const& e)
  {
    raisePythonException<FIX::UnsupportedMessageType>(e, SWIGTYPE_p_FIX__UnsupportedMessageType); return false;
  }
  catch(FIX::UnsupportedVersion const& e)
  {
    raisePythonException<FIX::UnsupportedVersion>(e, SWIGTYPE_p_FIX__UnsupportedVersion); return false;
  }
  catch(FIX::TagOutOfOrder const& e)
  {
    raisePythonException<FIX::TagOutOfOrder>(e, SWIGTYPE_p_FIX__TagOutOfOrder); return false;
  }
  catch(FIX::RepeatedTag const& e)
  {
    raisePythonException<FIX::RepeatedTag>(e, SWIGTYPE_p_FIX__RepeatedTag); return false;
  }
  catch(FIX::RepeatingGroupCountMismatch const& e)
  {
    raisePythonException<FIX::RepeatingGroupCountMismatch>(e, SWIGTYPE_p_FIX__RepeatingGroupCountMismatch); return false;
  }
  catch(FIX::DoNotSend const& e)
  {
    raisePythonException<FIX::DoNotSend>(e, SWIGTYPE_p_FIX__DoNotSend); return false;
  }
  catch(FIX::RejectLogon const& e)
  {
    raisePythonException<FIX::RejectLogon>(e, SWIGTYPE_p_FIX__RejectLogon); return false;
  }
  catch(FIX::SessionNotFound const& e)
  {
    raisePythonException<FIX::SessionNotFound>(e, SWIGTYPE_p_FIX__SessionNotFound); return false;
  }
  catch(FIX::IOException const& e)
  {
    raisePythonException<FIX::IOException>(e, SWIGTYPE_p_FIX__IOException); return false;
  }
  catch(FIX::SocketSendFailed const& e)
  {
    raisePythonException<FIX::SocketSendFailed>(e, SWIGTYPE_p_FIX__SocketSendFailed); return false;
  }
  catch(FIX::SocketRecvFailed const& e)
  {
    raisePythonException<FIX::SocketRecvFailed>(e, SWIGTYPE_p_FIX__SocketRecvFailed); return false;
  }
  catch(FIX::SocketCloseFailed const& e)
  {
    raisePythonException<FIX::SocketCloseFailed>(e, SWIGTYPE_p_FIX__SocketCloseFailed); return false;
  }
  catch(FIX::SocketException const& e)
  {
    raisePythonException<FIX::SocketException>(e, SWIGTYPE_p_FIX__SocketException); return false;
  }
  catch(FIX::Exception const& e)
  {
    raisePythonException<FIX::Exception>(e, SWIGTYPE_p_FIX__Exception); return false;
  }
  catch(std::exception const& e) 
  {
    SWIG_Error(SWIG_RuntimeError, e.what()); return false;
  }
  catch(...)
  {
    SWIG_Error(SWIG_RuntimeError, "unknown exception"); return false;
  }
}
#endif

#ifdef SWIGRUBY
template<typename Exception>
void raiseRubyException(Exception const& e, swig_type_info* swigType)
{
  rb_exc_raise(SWIG_Ruby_ExceptionType(swigType, SWIG_NewPointerObj((new Exception(static_cast<const Exception&>(e))),swigType,SWIG_POINTER_OWN)));
}

VALUE tryRubyException(std::function<VALUE()> const& function)
{
  try
  {
    return function();
  }
  catch(FIX::DataDictionaryNotFound const& e)
  {
    raiseRubyException<FIX::DataDictionaryNotFound>(e, SWIGTYPE_p_FIX__DataDictionaryNotFound); return Qnil;
  }
  catch(FIX::FieldNotFound const& e)
  {
    raiseRubyException<FIX::FieldNotFound>(e, SWIGTYPE_p_FIX__FieldNotFound); return Qnil;
  }
  catch(FIX::FieldConvertError const& e)
  {
    raiseRubyException<FIX::FieldConvertError>(e, SWIGTYPE_p_FIX__FieldConvertError); return Qnil;
  }
  catch(FIX::MessageParseError const& e)
  {
    raiseRubyException<FIX::MessageParseError>(e, SWIGTYPE_p_FIX__MessageParseError); return Qnil;
  }
  catch(FIX::InvalidMessage const& e)
  {
    raiseRubyException<FIX::InvalidMessage>(e, SWIGTYPE_p_FIX__InvalidMessage); return Qnil;
  }
  catch(FIX::ConfigError const& e)
  {
    raiseRubyException<FIX::ConfigError>(e, SWIGTYPE_p_FIX__ConfigError); return Qnil;
  }
  catch(FIX::RuntimeError const& e)
  {
    raiseRubyException<FIX::RuntimeError>(e, SWIGTYPE_p_FIX__RuntimeError); return Qnil;
  }
  catch(FIX::InvalidTagNumber const& e)
  {
    raiseRubyException<FIX::InvalidTagNumber>(e, SWIGTYPE_p_FIX__InvalidTagNumber); return Qnil;
  }
  catch(FIX::RequiredTagMissing const& e)
  {
    raiseRubyException<FIX::RequiredTagMissing>(e, SWIGTYPE_p_FIX__RequiredTagMissing); return Qnil;
  }
  catch(FIX::TagNotDefinedForMessage const& e)
  {
    raiseRubyException<FIX::TagNotDefinedForMessage>(e, SWIGTYPE_p_FIX__TagNotDefinedForMessage); return Qnil;
  }
  catch(FIX::NoTagValue const& e)
  {
    raiseRubyException<FIX::NoTagValue>(e, SWIGTYPE_p_FIX__NoTagValue); return Qnil;
  }
  catch(FIX::IncorrectTagValue const& e)
  {
    raiseRubyException<FIX::IncorrectTagValue>(e, SWIGTYPE_p_FIX__IncorrectTagValue); return Qnil;
  }
  catch(FIX::IncorrectDataFormat const& e)
  {
    raiseRubyException<FIX::IncorrectDataFormat>(e, SWIGTYPE_p_FIX__IncorrectDataFormat); return Qnil;
  }
  catch(FIX::IncorrectMessageStructure const& e)
  {
    raiseRubyException<FIX::IncorrectMessageStructure>(e, SWIGTYPE_p_FIX__IncorrectMessageStructure); return Qnil;
  }
  catch(FIX::DuplicateFieldNumber const& e)
  {
    raiseRubyException<FIX::DuplicateFieldNumber>(e, SWIGTYPE_p_FIX__DuplicateFieldNumber); return Qnil;
  }
  catch(FIX::InvalidMessageType const& e)
  {
    raiseRubyException<FIX::InvalidMessageType>(e, SWIGTYPE_p_FIX__InvalidMessageType); return Qnil;
  }
  catch(FIX::UnsupportedMessageType const& e)
  {
    raiseRubyException<FIX::UnsupportedMessageType>(e, SWIGTYPE_p_FIX__UnsupportedMessageType); return Qnil;
  }
  catch(FIX::UnsupportedVersion const& e)
  {
    raiseRubyException<FIX::UnsupportedVersion>(e, SWIGTYPE_p_FIX__UnsupportedVersion); return Qnil;
  }
  catch(FIX::TagOutOfOrder const& e)
  {
    raiseRubyException<FIX::TagOutOfOrder>(e, SWIGTYPE_p_FIX__TagOutOfOrder); return Qnil;
  }
  catch(FIX::RepeatedTag const& e)
  {
    raiseRubyException<FIX::RepeatedTag>(e, SWIGTYPE_p_FIX__RepeatedTag); return Qnil;
  }
  catch(FIX::RepeatingGroupCountMismatch const& e)
  {
    raiseRubyException<FIX::RepeatingGroupCountMismatch>(e, SWIGTYPE_p_FIX__RepeatingGroupCountMismatch); return Qnil;
  }
  catch(FIX::DoNotSend const& e)
  {
    raiseRubyException<FIX::DoNotSend>(e, SWIGTYPE_p_FIX__DoNotSend); return Qnil;
  }
  catch(FIX::RejectLogon const& e)
  {
    raiseRubyException<FIX::RejectLogon>(e, SWIGTYPE_p_FIX__RejectLogon); return Qnil;
  }
  catch(FIX::SessionNotFound const& e)
  {
    raiseRubyException<FIX::SessionNotFound>(e, SWIGTYPE_p_FIX__SessionNotFound); return Qnil;
  }
  catch(FIX::IOException const& e)
  {
    raiseRubyException<FIX::IOException>(e, SWIGTYPE_p_FIX__IOException); return Qnil;
  }
  catch(FIX::SocketSendFailed const& e)
  {
    raiseRubyException<FIX::SocketSendFailed>(e, SWIGTYPE_p_FIX__SocketSendFailed); return Qnil;
  }
  catch(FIX::SocketRecvFailed const& e)
  {
    raiseRubyException<FIX::SocketRecvFailed>(e, SWIGTYPE_p_FIX__SocketRecvFailed); return Qnil;
  }
  catch(FIX::SocketCloseFailed const& e)
  {
    raiseRubyException<FIX::SocketCloseFailed>(e, SWIGTYPE_p_FIX__SocketCloseFailed); return Qnil;
  }
  catch(FIX::SocketException const& e)
  {
    raiseRubyException<FIX::SocketException>(e, SWIGTYPE_p_FIX__SocketException); return Qnil;
  }
  catch(FIX::Exception const& e)
  {
    raiseRubyException<FIX::Exception>(e, SWIGTYPE_p_FIX__Exception); return Qnil;
  }
  catch(std::exception const& e) 
  {
    SWIG_Error(SWIG_RuntimeError, e.what()); return Qnil;
  }
  catch(...)
  {
    SWIG_Error(SWIG_RuntimeError, "unknown exception"); return Qnil;
  }
}
#endif
         
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
typedef FIX::SessionSettings SessionSettings;
%}

%typedef DoubleField PriceField;
%typedef DoubleField AmtField;
%typedef DoubleField QtyField;
%typedef StringField CurrencyField;
%typedef StringField MultipleValueStringField;
%typedef StringField MultipleStringValueField;
%typedef StringField MultipleCharValueField;
%typedef StringField ExchangeField;
%typedef StringField LocalMktTimeField;
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
%typedef IntField TagNumField;
%typedef DoubleField PercentageField;
%typedef StringField CountryField;
%typedef StringField TzTimeOnlyField;
%typedef StringField TzTimeStampField;
%typedef StringField LanguageField;
%typedef StringField QidField;
%typedef StringField QidRefField;

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
%typedef std::string FIX::LOCALMKTTIME;
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
%typedef int FIX::TAGNUM;
%typedef int FIX::LENGTH;
%typedef std::string FIX::COUNTRY;
%typedef std::string FIX::TZTIMEONLY;
%typedef std::string FIX::TZTIMESTAMP;
%typedef std::string FIX::LANGUAGE;
%typedef std::string FIX::QID;
%typedef std::string FIX::QIDREF;
%template(SessionIDSet) std::set<FIX::SessionID>;

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
    return self->getFixString();
  }
}

%init %{
#ifdef SWIGPYTHON
    PyDateTime_IMPORT;
#endif
%}

%extend FIX::SessionSettings {
    void setFromString(const std::string& str) {
        std::stringstream(str) >> (*$self);
    }
}

%include "../C++/Except.h"
%include "../C++/Exceptions.h"
%include "../C++/FieldTypes.h"
%include "../C++/Field.h"
%include "../C++/FieldMap.h"
%include "../C++/Message.h"
%include "../C++/Group.h"
%include "../C++/Field.h"
%include "../C++/FixCommonFields.h"
%include "../C++/Values.h"
%include "../C++/FixValues.h"
%include "../C++/SessionID.h"
%include "../C++/Dictionary.h"
%include "../C++/SessionSettings.h"
%include "../C++/Session.h"
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
%include "../C++/SocketMonitor.h"
%include "../C++/SSLSocketAcceptor.h"
%include "../C++/SSLSocketInitiator.h"
%include "../C++/DatabaseConnectionID.h"
%include "../C++/DatabaseConnectionPool.h"
%include "../C++/MySQLConnection.h"
%include "../C++/MySQLStore.h"
%include "../C++/MySQLLog.h"
%include "../C++/PostgreSQLConnection.h"
%include "../C++/PostgreSQLStore.h"
%include "../C++/PostgreSQLLog.h"
%include "../C++/ThreadedSocketAcceptor.h"
%include "../C++/ThreadedSocketInitiator.h"
%include "../C++/NullStore.h"