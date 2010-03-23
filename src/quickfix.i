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

#ifdef SWIGRUBY
%rename(_getFieldName) FIX::DataDictionary::getFieldName;
%rename(_getValueName) FIX::DataDictionary::getValueName;
%rename(_getFieldTag) FIX::DataDictionary::getFieldTag;
%rename(_getGroup) FIX::DataDictionary::getGroup;
#endif

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

#ifdef SWIGRUBY 	 
%typemap(in) std::string& (std::string temp) {
  temp = std::string((char*)STR2CSTR($input));
  $1 = &temp;
} 	 
	  	 
%typemap(argout) std::string& { 	 
  if( std::string("$1_type") == "std::string &" ) 	 
  { 	 
    rb_str_resize( $input, 0 );
    rb_str_append( $input, rb_str_new2($1->c_str()) );
  }
} 	 
	  	 
%typemap(in) int& (int temp) {
  temp = NUM2INT($input);
  $1 = &temp;
} 	 
	  	 
%typemap(argout) int& {
  if( std::string("$1_type") == "int &" )
  {
    vresult = result ? SWIG_From_int(static_cast< int >(*$1)) : Qnil;
  }
}
#endif 	 
	  	 
#ifdef SWIGPYTHON
%typemap(in) std::string& (std::string temp) {
  temp = std::string((char*)PyString_AsString($input));
  $1 = &temp;
} 	 
	  	 
%typemap(argout) std::string& {
  if( std::string("$1_type") == "std::string &" )
  {
    if( !PyDict_Check(resultobj) )
      resultobj = PyDict_New();
    PyDict_SetItem( resultobj, PyInt_FromLong(PyDict_Size(resultobj)), PyString_FromString($1->c_str()) );
  }
} 	 
	  	 
%typemap(in) int& (int temp) {
  SWIG_AsVal_int($input, &temp); 	 
  $1 = &temp;
} 	 
	  	 
%typemap(argout) int& {
  if( std::string("$1_type") == "int &" )
  {
    if( !PyDict_Check(resultobj) )
      resultobj = PyDict_New();
    PyDict_SetItem( resultobj, PyInt_FromLong(PyDict_Size(resultobj)), PyInt_FromLong(*$1) ); 	 
  }
}
#endif 	 

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

%pythoncode %{
#ifdef SWIGPYTHON
import thread

def _quickfix_start_thread(i_or_a):
	i_or_a.block()
#endif
%}

%feature("shadow") FIX::Initiator::start() %{
def start(self):
	thread.start_new_thread(_quickfix_start_thread, (self,))
%}

%feature("shadow") FIX::Acceptor::start() %{
def start(self):
	thread.start_new_thread(_quickfix_start_thread, (self,))
%}

%feature("director:except") FIX::Application::onCreate {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING(message)->ptr );
    exit(1);
  }
#endif
#ifdef SWIGPYTHON
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    PyErr_Restore( ptype, pvalue, ptraceback );
    PyErr_Print();
    Py_Exit(1);
  }
#endif
}

%feature("director:except") FIX::Application::onLogon {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING(message)->ptr );
    exit(1);
  }
#endif
#ifdef SWIGPYTHON
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    PyErr_Restore( ptype, pvalue, ptraceback );
    PyErr_Print();
    Py_Exit(1);
  }
#endif
}

%feature("director:except") FIX::Application::onLogout {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING(message)->ptr );
    exit(1);
  }
#endif
#ifdef SWIGPYTHON
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    PyErr_Restore( ptype, pvalue, ptraceback );
    PyErr_Print();
    Py_Exit(1);
  }
#endif
}

%feature("director:except") FIX::Application::toAdmin {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING(message)->ptr );
    exit(1);
  }
#endif
#ifdef SWIGPYTHON
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    PyErr_Restore( ptype, pvalue, ptraceback );
    PyErr_Print();
    Py_Exit(1);
  }
#endif
}

%feature("director:except") FIX::Application::toApp {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    void* result;

    Application_toApp_call_depth--;

    if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__DoNotSend, 0 ) != -1 ) {
      throw *((FIX::DoNotSend*)result);
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
	throw *((FIX::DoNotSend*)result);
      } else {
        PyErr_Restore( ptype, pvalue, ptraceback );
        PyErr_Print();
        Py_Exit(1);
      }
    } catch( std::exception& e ) {
      std::cout << e.what() << std::endl;
      Py_XDECREF( ptype );
      Py_XDECREF( pvalue );
      Py_XDECREF( ptraceback );
      throw;
    } catch( ... ) {
      std::cout << "Fatal exception" << std::endl;
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
      throw *((FIX::FieldNotFound*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__IncorrectDataFormat, 0 ) != -1 ) {
      throw *((FIX::IncorrectDataFormat*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__IncorrectTagValue, 0 ) != -1 ) {
      throw *((FIX::IncorrectTagValue*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__RejectLogon, 0 ) != -1 ) {
      throw *((FIX::RejectLogon*)result);
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
	throw *((FIX::FieldNotFound*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__IncorrectDataFormat, 0 ) != -1 ) {
        throw *((FIX::IncorrectDataFormat*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__IncorrectTagValue, 0 ) != -1 ) {
        throw *((FIX::IncorrectTagValue*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__RejectLogon, 0 ) != -1 ) {
        throw *((FIX::RejectLogon*)result);
      } else {
        PyErr_Restore( ptype, pvalue, ptraceback );
        PyErr_Print();
        Py_Exit(1);
      }
    } catch( std::exception& e ) {
      std::cout << e.what() << std::endl;
      Py_XDECREF( ptype );
      Py_XDECREF( pvalue );
      Py_XDECREF( ptraceback );
      throw;
    } catch( ... ) {
      std::cout << "Fatal exception" << std::endl;
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
      throw *((FIX::FieldNotFound*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__IncorrectDataFormat, 0 ) != -1 ) {
      throw *((FIX::IncorrectDataFormat*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__IncorrectTagValue, 0 ) != -1 ) {
      throw *((FIX::IncorrectTagValue*)result);
    } else if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__UnsupportedMessageType, 0 ) != -1 ) {
      throw *((FIX::UnsupportedMessageType*)result);
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
	throw *((FIX::FieldNotFound*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__IncorrectDataFormat, 0 ) != -1 ) {
        throw *((FIX::IncorrectDataFormat*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__IncorrectTagValue, 0 ) != -1 ) {
        throw *((FIX::IncorrectTagValue*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__UnsupportedMessageType, 0 ) != -1 ) {
        throw *((FIX::UnsupportedMessageType*)result);
      } else {
        PyErr_Restore( ptype, pvalue, ptraceback );
        PyErr_Print();
        Py_Exit(1);
      }
    } catch( std::exception& e ) {
      std::cout << e.what() << std::endl;
      Py_XDECREF( ptype );
      Py_XDECREF( pvalue );
      Py_XDECREF( ptraceback );
      throw;
    } catch( ... ) {
      std::cout << "Fatal exception" << std::endl;
      Py_XDECREF( ptype );
      Py_XDECREF( pvalue );
      Py_XDECREF( ptraceback );
      throw;
    }
  }
#endif
}

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

%pythoncode %{
#ifdef SWIGPYTHON
class SocketInitiator(SocketInitiatorBase):
	application = 0
	storeFactory = 0
	setting = 0
	logFactory = 0

	def __init__(self, application, storeFactory, settings, logFactory=None):
		if logFactory == None:
			SocketInitiatorBase.__init__(self, application, storeFactory, settings)
		else:
			SocketInitiatorBase.__init__(self, application, storeFactory, settings, logFactory)

		self.application = application
		self.storeFactory = storeFactory
		self.settings = settings
		self.logFactory = logFactory

class SocketAcceptor(SocketAcceptorBase):
	application = 0
	storeFactory = 0
	setting = 0
	logFactory = 0

	def __init__(self, application, storeFactory, settings, logFactory=None):
		if logFactory == None:
			SocketAcceptorBase.__init__(self, application, storeFactory, settings)
		else:
			SocketAcceptorBase.__init__(self, application, storeFactory, settings, logFactory)

		self.application = application
		self.storeFactory = storeFactory
		self.settings = settings
		self.logFactory = logFactory
#endif
%}
