#ifdef SWIGPYTHON
%feature("autodoc", "3");
%typemap(in) std::string& (std::string temp) {
  temp = std::string((char*)PyUnicode_AsEncodedString($input, "ASCII", "strict"));
  $1 = &temp;
}

%feature("autodoc", "3");
%typemap(argout) std::string& {
  if( std::string("$1_type") == "std::string &" )
  {
    if( !PyDict_Check(resultobj) )
      resultobj = PyDict_New();
    PyDict_SetItem( resultobj, PyLong_FromLong(PyDict_Size(resultobj)), PyUnicode_FromString($1->c_str()) );
  }
}

%feature("autodoc", "3");
%typemap(in) int& (int temp) {
  SWIG_AsVal_int($input, &temp);
  $1 = &temp;
}

%feature("autodoc", "3");
%typemap(argout) int& {
  if( std::string("$1_type") == "int &" )
  {
    if( !PyDict_Check(resultobj) )
      resultobj = PyDict_New();
    PyDict_SetItem( resultobj, PyLong_FromLong(PyDict_Size(resultobj)), PyLong_FromLong(*$1) );
  }
}
#endif

%feature("autodoc", "3");
%typemap(in) FIX::DataDictionary const *& (FIX::DataDictionary* temp) {
  $1 = new FIX::DataDictionary*[1];
  *$1 = temp;
}

%feature("autodoc", "3");
%typemap(free) FIX::DataDictionary const *& {
  delete[] temp;
}

%feature("autodoc", "3");
%typemap(argout) FIX::DataDictionary const *& {
  void* argp;
  FIX::DataDictionary* pDD = 0;
  int res = SWIG_ConvertPtr($input, &argp, SWIGTYPE_p_FIX__DataDictionary, 0 );
  pDD = reinterpret_cast< FIX::DataDictionary * >(argp);
  *pDD = *(*$1);
}

%include ../quickfix.i

%pythoncode %{
#ifdef SWIGPYTHON
try:
  import thread
except ImportError:
  import _thread as thread

def _quickfix_start_thread(i_or_a):
  i_or_a.block()
#endif
%}

%feature("autodoc", "3");
%feature("shadow") FIX::Initiator::start() %{
def start(self):
  thread.start_new_thread(_quickfix_start_thread, (self,))
%}

%feature("autodoc", "3");
%feature("shadow") FIX::Acceptor::start() %{
def start(self):
  thread.start_new_thread(_quickfix_start_thread, (self,))
%}

%feature("autodoc", "3");
%feature("director:except") FIX::Application::onCreate {
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

%feature("autodoc", "3");
%feature("director:except") FIX::Application::onLogon {
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

%feature("autodoc", "3");
%feature("director:except") FIX::Application::onLogout {
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

%feature("autodoc", "3");
%feature("director:except") FIX::Application::toAdmin {
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

%feature("autodoc", "3");
%feature("director:except") FIX::Application::toApp {
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

%feature("autodoc", "3");
%feature("director:except") FIX::Application::fromAdmin {
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

%feature("autodoc", "3");
%feature("director:except") FIX::Application::fromApp {
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

%include <Exceptions.h>
%include <Field.h>
%include <FieldMap.h>
%include <Message.h>
%include <Group.h>
%include <Fields.h>
%include <FixFields.h>
%include <Values.h>
%include <FixValues.h>
%include <SessionID.h>
%include <Dictionary.h>
%include <SessionSettings.h>
%include <Session.h>
%include <SessionID.h>
%include <Log.h>
%include <FileLog.h>
%include <MessageStore.h>
%include <FileStore.h>
%include <Application.h>
%include <Initiator.h>
%include <SocketInitiator.h>
%include <Acceptor.h>
%include <SocketAcceptor.h>
%include <DataDictionary.h>

%pythoncode %{
#ifdef SWIGPYTHON
class SocketInitiator(SocketInitiatorBase):
    def __init__(self, application, storeFactory, settings, logFactory=None):
        if logFactory is None:
            super(SocketInitiator, self).__init__(application, storeFactory, settings)
        else:
            super(SocketInitiator, self).__init__(application, storeFactory, settings, logFactory)

        self.application = application
        self.storeFactory = storeFactory
        self.settings = settings
        self.logFactory = logFactory

class SocketAcceptor(SocketAcceptorBase):
    def __init__(self, application, storeFactory, settings, logFactory=None):
        if logFactory is None:
            super(SocketAcceptor, self).__init__(application, storeFactory, settings)
        else:
            super(SocketAcceptor, self).__init__(application, storeFactory, settings, logFactory)

        self.application = application
        self.storeFactory = storeFactory
        self.settings = settings
        self.logFactory = logFactory
#endif
%}

%init %{
#ifndef _MSC_VER
      struct sigaction new_action, old_action;
      new_action.sa_handler = SIG_DFL;
      sigemptyset( &new_action.sa_mask );
      new_action.sa_flags = 0;
      sigaction( SIGINT, &new_action, &old_action );
#endif
%}

%include "quickfix.i"