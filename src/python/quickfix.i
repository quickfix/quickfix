%exception
{
  if(!tryPythonException([&]() mutable 
  { 
    $action
    return true;
  fail:
    return false;
  })) 
  {
    SWIG_fail;
  }
}

%typemap(in) std::string& (std::string temp) {
  temp = std::string((char*)PyUnicode_AsUTF8($input));
  $1 = &temp;
}

%typemap(argout) std::string& {
  if( std::string("$1_type") == "std::string &" )
  {
    if( !PyDict_Check(resultobj) )
      resultobj = PyDict_New();
    PyDict_SetItem( resultobj, PyLong_FromLong(PyDict_Size(resultobj)), PyUnicode_FromString($1->c_str()) );
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
    PyDict_SetItem( resultobj, PyLong_FromLong(PyDict_Size(resultobj)), PyLong_FromLong(*$1) );    
  }
}

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
  pDD = reinterpret_cast<FIX::DataDictionary *>(argp);
  *pDD = *(*$1);
}

%extend FIX::UtcTimeStamp {
  PyObject *getDateTime() {
      int y, m, d, h, mi, s, fs;
      $self->getYMD(y, m, d);
      $self->getHMS(h, mi, s, fs, 6);
      return PyDateTime_FromDateAndTime(y, m, d, h, mi, s, fs);
  }
}

%rename(FIXException) FIX::Exception;

%include ../quickfix.i

%pythoncode %{
try:
  import thread
except ImportError:
  import _thread as thread

def _quickfix_start_thread(i_or_a):
  i_or_a.block()
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
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    PyErr_Restore( ptype, pvalue, ptraceback );
    PyErr_Print();
    Py_Exit(1);
  }
}

%feature("director:except") FIX::Application::onLogon {
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    PyErr_Restore( ptype, pvalue, ptraceback );
    PyErr_Print();
    Py_Exit(1);
  }
}

%feature("director:except") FIX::Application::onLogout {
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    PyErr_Restore( ptype, pvalue, ptraceback );
    PyErr_Print();
    Py_Exit(1);
  }
}

%feature("director:except") FIX::Application::toAdmin {
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    PyErr_Restore( ptype, pvalue, ptraceback );
    PyErr_Print();
    Py_Exit(1);
  }
}

%feature("director:except") FIX::Application::toApp {
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    void *result;

    if( SWIG_ConvertPtr(pvalue, &result, SWIGTYPE_p_FIX__DoNotSend, 0 ) != -1 ) {
      throw *((FIX::DoNotSend*)result);
    } else {
      PyErr_Restore( ptype, pvalue, ptraceback );
      PyErr_Print();
      Py_Exit(1);
    }
  }
}

%feature("director:except") FIX::Application::fromAdmin {
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    void *result;

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
  }
}

%feature("director:except") FIX::Application::fromApp {
  if( $error != NULL ) {
    PyObject *ptype, *pvalue, *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback );
    void *result;

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
  }
}

%pythoncode %{
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

#if (HAVE_SSL > 0)
class SSLSocketInitiator(SSLSocketInitiatorBase):
  application = 0
  storeFactory = 0
  setting = 0
  logFactory = 0

  def __init__(self, application, storeFactory, settings, logFactory=None):
    if logFactory == None:
      SSLSocketInitiatorBase.__init__(self, application, storeFactory, settings)
    else:
      SSLSocketInitiatorBase.__init__(self, application, storeFactory, settings, logFactory)

    self.application = application
    self.storeFactory = storeFactory
    self.settings = settings
    self.logFactory = logFactory

class SSLSocketAcceptor(SSLSocketAcceptorBase):
  application = 0
  storeFactory = 0
  setting = 0
  logFactory = 0

  def __init__(self, application, storeFactory, settings, logFactory=None):
    if logFactory == None:
      SSLSocketAcceptorBase.__init__(self, application, storeFactory, settings)
    else:
      SSLSocketAcceptorBase.__init__(self, application, storeFactory, settings, logFactory)

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

