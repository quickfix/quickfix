%module(directors="1") quickfix

%include typemaps.i
%include std_string.i
%include exception.i

%feature("director") FIX::Application;
%feature("classic") FIX::Exception;
%ignore start;

%{
#include "../C++/Exceptions.h"
#include "../C++/Field.h"
#include "../C++/Message.h"
#include "../C++/Fields.h"
#include "../C++/DeprecatedFields.h"
#include "../C++/Values.h"
#include "../C++/DeprecatedValues.h"
#include "../C++/SessionID.h"
#include "../C++/SessionSettings.h"
#include "../C++/Session.h"
#include "../C++/Log.h"
#include "../C++/FileLog.h"
#ifdef HAVE_MYSQL
#include "../C++/MySQLLog.h"
#endif
#include "../C++/MessageStore.h"
#include "../C++/FileStore.h"
#ifdef HAVE_MYSQL
#include "../C++/MySQLStore.h"
#endif
#include "../C++/Application.h"
#include "../C++/Initiator.h"
#include "../C++/SocketInitiator.h"
#include "../C++/Acceptor.h"
#include "../C++/SocketAcceptor.h"
using namespace FIX;
%}

%init %{
#ifndef _MSV_VER
      struct sigaction new_action, old_action;
      new_action.sa_handler = SIG_DFL;
      sigemptyset( &new_action.sa_mask );
      new_action.sa_flags = 0;
      sigaction( SIGINT, &new_action, &old_action );
#endif
%}

%extend FIX::Exception {
  char *__str__() {
    return (char*)self->what();
  }
}

%extend FIX::Message {
  char *__str__() {
    return (char*)self->toString().c_str();
  }
}

%extend FIX::SessionID {
  char *__str__() {
    return (char*)self->toString().c_str();
  }
}

%extend FIX::FieldBase {
  char *__str__() {
    return (char*)self->getValue().c_str();
  }
}

%feature("director:except") {
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    void *result;

    try {
      if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__DoNotSend, 0 ) != -1 ) {
	throw *((DoNotSend*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__FieldNotFound, 0 ) != -1 ) {
	throw *((FieldNotFound*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__IncorrectDataFormat, 0 ) != -1 ) {
        throw *((IncorrectDataFormat*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__IncorrectTagValue, 0 ) != -1 ) {
        throw *((IncorrectTagValue*)result);
      } else if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__RejectLogon, 0 ) != -1 ) {
        throw *((RejectLogon*)result);
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
}

%include "../C++/Exceptions.h"
%include "../C++/Field.h"
%include "../C++/FieldMap.h"
%include "../C++/Message.h"
%include "../C++/Fields.h"
%include "../C++/DeprecatedFields.h"
%include "../C++/Values.h"
%include "../C++/DeprecatedValues.h"
%include "../C++/SessionID.h"
%include "../C++/SessionSettings.h"
%include "../C++/Session.h"
%include "../C++/Log.h"
%include "../C++/FileLog.h"
%include "../C++/MySQLLog.h"
%include "../C++/MessageStore.h"
%include "../C++/FileStore.h"
%include "../C++/MySQLStore.h"
%include "../C++/Application.h"
%include "../C++/Initiator.h"
%include "../C++/SocketInitiator.h"
%include "../C++/Acceptor.h"
%include "../C++/SocketAcceptor.h"
