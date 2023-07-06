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

%feature("director") FIX::Application;
%feature("classic") FIX::Exception;

%array_class(int, IntArray);

%ignore _REENTRANT;
%rename(SocketInitiatorBase) FIX::SocketInitiator;
%rename(SocketAcceptorBase) FIX::SocketAcceptor;
%rename(SSLSocketInitiatorBase) FIX::SSLSocketInitiator;
%rename(SSLSocketAcceptorBase) FIX::SSLSocketAcceptor;

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
#include <Field.h>
#include <Message.h>
#include <Group.h>
#include <Fields.h>
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
#include <SSLSocketAcceptor.h>
#include <SSLSocketInitiator.h>
#include <SSLSocketConnection.h>
#ifdef SWIGPYTHON
#include "datetime.h"
#endif

template<typename Exception>
void raisePythonException(Exception const& e, swig_type_info* swigType)
{
  SWIG_Python_Raise(SWIG_NewPointerObj((new Exception(static_cast<const Exception&>(e))),swigType,SWIG_POINTER_OWN), typeid(Exception).name(), swigType);
}

template<typename Exception>
void raiseRubyException(Exception const& e, swig_type_info* swigType)
{
  rb_exc_raise(SWIG_Ruby_ExceptionType(swigType, SWIG_NewPointerObj((new Exception(static_cast<const Exception&>(e))),swigType,SWIG_POINTER_OWN)));
}

#ifndef HAVE_SSL
struct SSL{};
struct RSA{};
struct X509{};

namespace FIX
{
enum SSLHandshakeStatus {
  SSL_HANDSHAKE_FAILED = 0,
  SSL_HANDSHAKE_SUCCEDED = 1,
  SSL_HANDSHAKE_IN_PROGRESS = 2
};

class SSLSocketInitiator : public Initiator, SocketConnector::Strategy
{
public:
  SSLSocketInitiator( Application& application, 
                      MessageStoreFactory& factory,
                      const SessionSettings& settings ) EXCEPT ( ConfigError ) 
  : Initiator( application, factory, settings)
  {
    throw ConfigError("SSL not enabled");
  }

  SSLSocketInitiator( Application& application, 
                      MessageStoreFactory& factory,
                      const SessionSettings& settings, 
                      LogFactory& logFactory ) EXCEPT ( ConfigError ) 
  : Initiator( application, factory, settings, logFactory )
  {
    throw ConfigError("SSL not enabled");
  }

  virtual ~SSLSocketInitiator() {}

  void setPassword(const std::string &) {}

  void setCertAndKey(X509 *, RSA *) {}

  int passwordHandleCallback(char *, size_t, int ) { return 0; }

  static int passwordHandleCB(char *, int, int, void *) { return 0; }

private:
  void onStart() {};
  bool onPoll() { return false; };
  void onStop() {};

  void doConnect( const SessionID&, const Dictionary& ) override {};
  void onConnect( SocketConnector&, socket_handle ) override {};
  void onWrite( SocketConnector&, socket_handle ) override {};
  bool onData( SocketConnector&, socket_handle ) override { return false; };
  void onDisconnect( SocketConnector&, socket_handle ) override {};
  void onError( SocketConnector& ) override {};
};

class SSLSocketAcceptor : public Acceptor, SocketServer::Strategy
{
public:
  SSLSocketAcceptor( Application& application, 
                     MessageStoreFactory& factory,
                     const SessionSettings& settings ) EXCEPT ( ConfigError ) 
  : Acceptor( application, factory, settings)
  {
    throw ConfigError("SSL not enabled");
  }

  SSLSocketAcceptor( Application& application, 
                     MessageStoreFactory& factory,
                     const SessionSettings& settings, 
                     LogFactory& logFactory ) EXCEPT ( ConfigError ) 
  : Acceptor( application, factory, settings, logFactory )
  {
    throw ConfigError("SSL not enabled");
  }

  virtual ~SSLSocketAcceptor() {}

  void setPassword(const std::string &pwd) {}

  int passwordHandleCallback(char *, size_t, int) { return 0; }

  static int passPhraseHandleCB(char *, int, int, void *) { return 0; }

private:
  void onStart() override {};
  bool onPoll() override { return false; };
  void onStop() override {};

  void onConnect( SocketServer&, socket_handle, socket_handle ) override {};
  void onWrite( SocketServer&, socket_handle ) override {};
  bool onData( SocketServer&, socket_handle ) override { return false; };
  void onDisconnect( SocketServer&, socket_handle ) override {};
  void onError( SocketServer& ) override {};
};

class SSLSocketConnection : Responder
{
public:
  typedef std::set<SessionID> Sessions;

  SSLSocketConnection( socket_handle, SSL *, Sessions, SocketMonitor* ) {}
  SSLSocketConnection( SSLSocketInitiator&, const SessionID&, socket_handle, SSL *, SocketMonitor* ) {}
  virtual ~SSLSocketConnection() {};

  socket_handle getSocket() const { return 0; }
  Session* getSession() const { return nullptr; }

  bool read( SocketConnector& ) { return false; };
  bool read( SSLSocketAcceptor&, SocketServer& ) { return false; };
  bool processQueue() { return false; }

  void signal() {}

  void subscribeToSocketWriteAvailableEvents() {}

  void unsignal() {}

  void setHandshakeStartTime(time_t) {}

  int getSecondsFromHandshakeStart(time_t) { return 0; }

  void onTimeout() {}

  SSL *sslObject() { return nullptr; }

  bool didProcessQueueRequestToRead() const { return false; };
  bool didReadFromSocketRequestToWrite() const { return false; };

private:
  bool send( const std::string& ) override { return false; };
  void disconnect() override {};
};
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
%include "../C++/Fields.h"
%include "../C++/FixFields.h"
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
%include "../C++/SSLSocketConnection.h"