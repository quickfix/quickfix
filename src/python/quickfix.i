%exception
{
  try
  {
    $action
  }
  catch(FIX::DataDictionaryNotFound const& e)
  {
    raisePythonException<FIX::DataDictionaryNotFound>(e, SWIGTYPE_p_FIX__DataDictionaryNotFound); SWIG_fail;
  }
  catch(FIX::FieldNotFound const& e)
  {
    raisePythonException<FIX::FieldNotFound>(e, SWIGTYPE_p_FIX__FieldNotFound); SWIG_fail;
  }
  catch(FIX::FieldConvertError const& e)
  {
    raisePythonException<FIX::FieldConvertError>(e, SWIGTYPE_p_FIX__FieldConvertError); SWIG_fail;
  }
  catch(FIX::MessageParseError const& e)
  {
    raisePythonException<FIX::MessageParseError>(e, SWIGTYPE_p_FIX__MessageParseError); SWIG_fail;
  }
  catch(FIX::InvalidMessage const& e)
  {
    raisePythonException<FIX::InvalidMessage>(e, SWIGTYPE_p_FIX__InvalidMessage); SWIG_fail;
  }
  catch(FIX::ConfigError const& e)
  {
    raisePythonException<FIX::ConfigError>(e, SWIGTYPE_p_FIX__ConfigError); SWIG_fail;
  }
  catch(FIX::RuntimeError const& e)
  {
    raisePythonException<FIX::RuntimeError>(e, SWIGTYPE_p_FIX__RuntimeError); SWIG_fail;
  }
  catch(FIX::InvalidTagNumber const& e)
  {
    raisePythonException<FIX::InvalidTagNumber>(e, SWIGTYPE_p_FIX__InvalidTagNumber); SWIG_fail;
  }
  catch(FIX::RequiredTagMissing const& e)
  {
    raisePythonException<FIX::RequiredTagMissing>(e, SWIGTYPE_p_FIX__RequiredTagMissing); SWIG_fail;
  }
  catch(FIX::TagNotDefinedForMessage const& e)
  {
    raisePythonException<FIX::TagNotDefinedForMessage>(e, SWIGTYPE_p_FIX__TagNotDefinedForMessage); SWIG_fail;
  }
  catch(FIX::NoTagValue const& e)
  {
    raisePythonException<FIX::NoTagValue>(e, SWIGTYPE_p_FIX__NoTagValue); SWIG_fail;
  }
  catch(FIX::IncorrectTagValue const& e)
  {
    raisePythonException<FIX::IncorrectTagValue>(e, SWIGTYPE_p_FIX__IncorrectTagValue); SWIG_fail;
  }
  catch(FIX::IncorrectDataFormat const& e)
  {
    raisePythonException<FIX::IncorrectDataFormat>(e, SWIGTYPE_p_FIX__IncorrectDataFormat); SWIG_fail;
  }
  catch(FIX::IncorrectMessageStructure const& e)
  {
    raisePythonException<FIX::IncorrectMessageStructure>(e, SWIGTYPE_p_FIX__IncorrectMessageStructure); SWIG_fail;
  }
  catch(FIX::DuplicateFieldNumber const& e)
  {
    raisePythonException<FIX::DuplicateFieldNumber>(e, SWIGTYPE_p_FIX__DuplicateFieldNumber); SWIG_fail;
  }
  catch(FIX::InvalidMessageType const& e)
  {
    raisePythonException<FIX::InvalidMessageType>(e, SWIGTYPE_p_FIX__InvalidMessageType); SWIG_fail;
  }
  catch(FIX::UnsupportedMessageType const& e)
  {
    raisePythonException<FIX::UnsupportedMessageType>(e, SWIGTYPE_p_FIX__UnsupportedMessageType); SWIG_fail;
  }
  catch(FIX::UnsupportedVersion const& e)
  {
    raisePythonException<FIX::UnsupportedVersion>(e, SWIGTYPE_p_FIX__UnsupportedVersion); SWIG_fail;
  }
  catch(FIX::TagOutOfOrder const& e)
  {
    raisePythonException<FIX::TagOutOfOrder>(e, SWIGTYPE_p_FIX__TagOutOfOrder); SWIG_fail;
  }
  catch(FIX::RepeatedTag const& e)
  {
    raisePythonException<FIX::RepeatedTag>(e, SWIGTYPE_p_FIX__RepeatedTag); SWIG_fail;
  }
  catch(FIX::RepeatingGroupCountMismatch const& e)
  {
    raisePythonException<FIX::RepeatingGroupCountMismatch>(e, SWIGTYPE_p_FIX__RepeatingGroupCountMismatch); SWIG_fail;
  }
  catch(FIX::DoNotSend const& e)
  {
    raisePythonException<FIX::DoNotSend>(e, SWIGTYPE_p_FIX__DoNotSend); SWIG_fail;
  }
  catch(FIX::RejectLogon const& e)
  {
    raisePythonException<FIX::RejectLogon>(e, SWIGTYPE_p_FIX__RejectLogon); SWIG_fail;
  }
  catch(FIX::SessionNotFound const& e)
  {
    raisePythonException<FIX::SessionNotFound>(e, SWIGTYPE_p_FIX__SessionNotFound); SWIG_fail;
  }
  catch(FIX::IOException const& e)
  {
    raisePythonException<FIX::IOException>(e, SWIGTYPE_p_FIX__IOException); SWIG_fail;
  }
  catch(FIX::SocketSendFailed const& e)
  {
    raisePythonException<FIX::SocketSendFailed>(e, SWIGTYPE_p_FIX__SocketSendFailed); SWIG_fail;
  }
  catch(FIX::SocketRecvFailed const& e)
  {
    raisePythonException<FIX::SocketRecvFailed>(e, SWIGTYPE_p_FIX__SocketRecvFailed); SWIG_fail;
  }
  catch(FIX::SocketCloseFailed const& e)
  {
    raisePythonException<FIX::SocketCloseFailed>(e, SWIGTYPE_p_FIX__SocketCloseFailed); SWIG_fail;
  }
  catch(FIX::SocketException const& e)
  {
    raisePythonException<FIX::SocketException>(e, SWIGTYPE_p_FIX__SocketException); SWIG_fail;
  }
  catch(FIX::Exception const& e)
  {
    raisePythonException<FIX::Exception>(e, SWIGTYPE_p_FIX__Exception); SWIG_fail;
  }
  catch(std::exception const& e) 
  {
    SWIG_exception(SWIG_RuntimeError, e.what());
  }
  catch(...)
  {
    SWIG_exception(SWIG_RuntimeError, "unknown exception");
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
  pDD = reinterpret_cast< FIX::DataDictionary * >(argp);
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

