%module(directors="1") quickfix

%include typemaps.i
%include std_string.i
%include exception.i
%include carrays.i

%feature("director") FIX::Application;
%feature("classic") FIX::Exception;

%array_class(int, IntArray);

%ignore FIX::Initiator::start;
%ignore FIX::Acceptor::start;
%ignore _REENTRANT;

%{
#include <config.h>
#include "../C++/Exceptions.h"
#include "../C++/Field.h"
#include "../C++/Message.h"
#include "../C++/Group.h"
#include "../C++/Fields.h"
#include "../C++/DeprecatedFields.h"
#include "../C++/Values.h"
#include "../C++/DeprecatedValues.h"
#include "../C++/SessionID.h"
#include "../C++/SessionSettings.h"
#include "../C++/Session.h"
#include "../C++/Log.h"
#include "../C++/FileLog.h"
#include "../C++/MessageStore.h"
#include "../C++/FileStore.h"
#include "../C++/Application.h"
#include "../C++/Initiator.h"
#include "../C++/SocketInitiator.h"
#include "../C++/Acceptor.h"
#include "../C++/SocketAcceptor.h"
using namespace FIX;
%}

%typedef DoubleField PriceField;
%typedef DoubleField AmtField;
%typedef DoubleField QtyField;
%typedef StringField CurrencyField;
%typedef StringField MultipleValueStringField;
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

%typedef std::string STRING;
%typedef char CHAR;
%typedef double PRICE;
%typedef int INT;
%typedef double AMT;
%typedef double QTY;
%typedef std::string CURRENCY;
%typedef std::string MULTIPLEVALUESTRING;
%typedef std::string EXCHANGE;
%typedef UtcTimeStamp UTCTIMESTAMP;
%typedef bool BOOLEAN;
%typedef std::string LOCALMKTDATE;
%typedef std::string DATA;
%typedef double FLOAT;
%typedef double PRICEOFFSET;
%typedef std::string MONTHYEAR;
%typedef std::string DAYOFMONTH;
%typedef UtcDate UTCDATE;
%typedef UtcDateOnly UTCDATEONLY;
%typedef UtcTimeOnly UTCTIMEONLY;
%typedef int NUMINGROUP;
%typedef double PERCENTAGE;
%typedef int SEQNUM;
%typedef int LENGTH;
%typedef std::string COUNTRY;

%exceptionclass FIX::Exception;

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

%feature("director:except") FIX::Application::toApp {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    void* result;

    Application_toApp_call_depth--;

    if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__DoNotSend, 0 ) != -1 ) {
      throw *((DoNotSend*)result);
    } else {
      VALUE message = rb_obj_as_string( $error );
      printf( "%s\n", RSTRING(message)->ptr );
      exit(1);
    }
  }
#endif
#ifdef SWIGPYTHON
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    void *result;

    try {
      if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__DoNotSend, 0 ) != -1 ) {
	throw *((DoNotSend*)result);
      } else {
        PyErr_Restore( ptype, pvalue, ptraceback );
        PyErr_Print();
        Py_Exit(1);
      }
    } catch( ... ) {
      Py_XDECREF( ptype );
      Py_XDECREF( pvalue );
      Py_XDECREF( ptraceback );
      throw;
    }
  }
#endif
}

%feature("director:except") FIX::Application::fromAdmin {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    void* result;

    Application_fromAdmin_call_depth--;

    if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__FieldNotFound, 0 ) != -1 ) {
      throw *((FieldNotFound*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__IncorrectDataFormat, 0 ) != -1 ) {
      throw *((IncorrectDataFormat*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__IncorrectTagValue, 0 ) != -1 ) {
      throw *((IncorrectTagValue*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__RejectLogon, 0 ) != -1 ) {
      throw *((RejectLogon*)result);
    } else {
      VALUE message = rb_obj_as_string( $error );
      printf( "%s\n", RSTRING(message)->ptr );
      exit(1);
    }
  }
#endif
#ifdef SWIGPYTHON
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    void *result;

    try {
      if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__FieldNotFound, 0 ) != -1 ) {
	throw *((FieldNotFound*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__IncorrectDataFormat, 0 ) != -1 ) {
        throw *((IncorrectDataFormat*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__IncorrectTagValue, 0 ) != -1 ) {
        throw *((IncorrectTagValue*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__RejectLogon, 0 ) != -1 ) {
        throw *((RejectLogon*)result);
      } else {
        PyErr_Restore( ptype, pvalue, ptraceback );
        PyErr_Print();
        Py_Exit(1);
      }
    } catch( ... ) {
      Py_XDECREF( ptype );
      Py_XDECREF( pvalue );
      Py_XDECREF( ptraceback );
      throw;
    }
  }
#endif
}

%feature("director:except") FIX::Application::fromApp {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    void* result;

    Application_fromApp_call_depth--;

    if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__FieldNotFound, 0 ) != -1 ) {
      throw *((FieldNotFound*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__IncorrectDataFormat, 0 ) != -1 ) {
      throw *((IncorrectDataFormat*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__IncorrectTagValue, 0 ) != -1 ) {
      throw *((IncorrectTagValue*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__UnsupportedMessageType, 0 ) != -1 ) {
      throw *((UnsupportedMessageType*)result);
    } else {
      VALUE message = rb_obj_as_string( $error );
      printf( "%s\n", RSTRING(message)->ptr );
      exit(1);
    }
  }
#endif
#ifdef SWIGPYTHON
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    void *result;

    try {
      if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__FieldNotFound, 0 ) != -1 ) {
	throw *((FieldNotFound*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__IncorrectDataFormat, 0 ) != -1 ) {
        throw *((IncorrectDataFormat*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__IncorrectTagValue, 0 ) != -1 ) {
        throw *((IncorrectTagValue*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__UnsupportedMessageType, 0 ) != -1 ) {
        throw *((UnsupportedMessageType*)result);
      } else {
        PyErr_Restore( ptype, pvalue, ptraceback );
        PyErr_Print();
        Py_Exit(1);
      }
    } catch( ... ) {
      Py_XDECREF( ptype );
      Py_XDECREF( pvalue );
      Py_XDECREF( ptraceback );
      throw;
    }
  }
#endif
}

%include "../config.h"
%include "../C++/Exceptions.h"
%include "../C++/Field.h"
%include "../C++/FieldMap.h"
%include "../C++/Message.h"
%include "../C++/Group.h"
%include "../C++/Fields.h"
%include "../C++/DeprecatedFields.h"
%include "../C++/Values.h"
%include "../C++/DeprecatedValues.h"
%include "../C++/SessionID.h"
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

