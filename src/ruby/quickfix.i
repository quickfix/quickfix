%exception
{
  try
  {
    $action
  }
  catch(FIX::DataDictionaryNotFound const& e)
  {
    raiseRubyException<FIX::DataDictionaryNotFound>(e, SWIGTYPE_p_FIX__DataDictionaryNotFound); SWIG_fail;
  }
  catch(FIX::FieldNotFound const& e)
  {
    raiseRubyException<FIX::FieldNotFound>(e, SWIGTYPE_p_FIX__FieldNotFound); SWIG_fail;
  }
  catch(FIX::FieldConvertError const& e)
  {
    raiseRubyException<FIX::FieldConvertError>(e, SWIGTYPE_p_FIX__FieldConvertError); SWIG_fail;
  }
  catch(FIX::MessageParseError const& e)
  {
    raiseRubyException<FIX::MessageParseError>(e, SWIGTYPE_p_FIX__MessageParseError); SWIG_fail;
  }
  catch(FIX::InvalidMessage const& e)
  {
    raiseRubyException<FIX::InvalidMessage>(e, SWIGTYPE_p_FIX__InvalidMessage); SWIG_fail;
  }
  catch(FIX::ConfigError const& e)
  {
    raiseRubyException<FIX::ConfigError>(e, SWIGTYPE_p_FIX__ConfigError); SWIG_fail;
  }
  catch(FIX::RuntimeError const& e)
  {
    raiseRubyException<FIX::RuntimeError>(e, SWIGTYPE_p_FIX__RuntimeError); SWIG_fail;
  }
  catch(FIX::InvalidTagNumber const& e)
  {
    raiseRubyException<FIX::InvalidTagNumber>(e, SWIGTYPE_p_FIX__InvalidTagNumber); SWIG_fail;
  }
  catch(FIX::RequiredTagMissing const& e)
  {
    raiseRubyException<FIX::RequiredTagMissing>(e, SWIGTYPE_p_FIX__RequiredTagMissing); SWIG_fail;
  }
  catch(FIX::TagNotDefinedForMessage const& e)
  {
    raiseRubyException<FIX::TagNotDefinedForMessage>(e, SWIGTYPE_p_FIX__TagNotDefinedForMessage); SWIG_fail;
  }
  catch(FIX::NoTagValue const& e)
  {
    raiseRubyException<FIX::NoTagValue>(e, SWIGTYPE_p_FIX__NoTagValue); SWIG_fail;
  }
  catch(FIX::IncorrectTagValue const& e)
  {
    raiseRubyException<FIX::IncorrectTagValue>(e, SWIGTYPE_p_FIX__IncorrectTagValue); SWIG_fail;
  }
  catch(FIX::IncorrectDataFormat const& e)
  {
    raiseRubyException<FIX::IncorrectDataFormat>(e, SWIGTYPE_p_FIX__IncorrectDataFormat); SWIG_fail;
  }
  catch(FIX::IncorrectMessageStructure const& e)
  {
    raiseRubyException<FIX::IncorrectMessageStructure>(e, SWIGTYPE_p_FIX__IncorrectMessageStructure); SWIG_fail;
  }
  catch(FIX::DuplicateFieldNumber const& e)
  {
    raiseRubyException<FIX::DuplicateFieldNumber>(e, SWIGTYPE_p_FIX__DuplicateFieldNumber); SWIG_fail;
  }
  catch(FIX::InvalidMessageType const& e)
  {
    raiseRubyException<FIX::InvalidMessageType>(e, SWIGTYPE_p_FIX__InvalidMessageType); SWIG_fail;
  }
  catch(FIX::UnsupportedMessageType const& e)
  {
    raiseRubyException<FIX::UnsupportedMessageType>(e, SWIGTYPE_p_FIX__UnsupportedMessageType); SWIG_fail;
  }
  catch(FIX::UnsupportedVersion const& e)
  {
    raiseRubyException<FIX::UnsupportedVersion>(e, SWIGTYPE_p_FIX__UnsupportedVersion); SWIG_fail;
  }
  catch(FIX::TagOutOfOrder const& e)
  {
    raiseRubyException<FIX::TagOutOfOrder>(e, SWIGTYPE_p_FIX__TagOutOfOrder); SWIG_fail;
  }
  catch(FIX::RepeatedTag const& e)
  {
    raiseRubyException<FIX::RepeatedTag>(e, SWIGTYPE_p_FIX__RepeatedTag); SWIG_fail;
  }
  catch(FIX::RepeatingGroupCountMismatch const& e)
  {
    raiseRubyException<FIX::RepeatingGroupCountMismatch>(e, SWIGTYPE_p_FIX__RepeatingGroupCountMismatch); SWIG_fail;
  }
  catch(FIX::DoNotSend const& e)
  {
    raiseRubyException<FIX::DoNotSend>(e, SWIGTYPE_p_FIX__DoNotSend); SWIG_fail;
  }
  catch(FIX::RejectLogon const& e)
  {
    raiseRubyException<FIX::RejectLogon>(e, SWIGTYPE_p_FIX__RejectLogon); SWIG_fail;
  }
  catch(FIX::SessionNotFound const& e)
  {
    raiseRubyException<FIX::SessionNotFound>(e, SWIGTYPE_p_FIX__SessionNotFound); SWIG_fail;
  }
  catch(FIX::IOException const& e)
  {
    raiseRubyException<FIX::IOException>(e, SWIGTYPE_p_FIX__IOException); SWIG_fail;
  }
  catch(FIX::SocketSendFailed const& e)
  {
    raiseRubyException<FIX::SocketSendFailed>(e, SWIGTYPE_p_FIX__SocketSendFailed); SWIG_fail;
  }
  catch(FIX::SocketRecvFailed const& e)
  {
    raiseRubyException<FIX::SocketRecvFailed>(e, SWIGTYPE_p_FIX__SocketRecvFailed); SWIG_fail;
  }
  catch(FIX::SocketCloseFailed const& e)
  {
    raiseRubyException<FIX::SocketCloseFailed>(e, SWIGTYPE_p_FIX__SocketCloseFailed); SWIG_fail;
  }
  catch(FIX::SocketException const& e)
  {
    raiseRubyException<FIX::SocketException>(e, SWIGTYPE_p_FIX__SocketException); SWIG_fail;
  }
  catch(FIX::Exception const& e)
  {
    raiseRubyException<FIX::Exception>(e, SWIGTYPE_p_FIX__Exception); SWIG_fail;
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

%rename(_getFieldName) FIX::DataDictionary::getFieldName;
%rename(_getValueName) FIX::DataDictionary::getValueName;
%rename(_getFieldTag) FIX::DataDictionary::getFieldTag;
%rename(_getGroup) FIX::DataDictionary::getGroup;

%typemap(in) std::string& (std::string temp) {
  temp = std::string((char*)StringValuePtr($input));
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

%include ../quickfix.i
	  	 
%feature("director:except") FIX::Application::onCreate {
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING_PTR(message) );
    exit(1);
  }
}

%feature("director:except") FIX::Application::onLogon {
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING_PTR(message) );
    exit(1);
  }
}

%feature("director:except") FIX::Application::onLogout {
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING_PTR(message) );
    exit(1);
  }
}

%feature("director:except") FIX::Application::toAdmin {
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING_PTR(message) );
    exit(1);
  }
}

%feature("director:except") FIX::Application::toApp {
  if( $error != 0 ) {
    void* result;

    Application_toApp_call_depth--;

    if( SWIG_ConvertPtr($error, &result, SWIGTYPE_p_FIX__DoNotSend, 0 ) != -1 ) {
      throw *((FIX::DoNotSend*)result);
    } else {
      VALUE message = rb_obj_as_string( $error );
      printf( "%s\n", RSTRING_PTR(message) );
      exit(1);
    }
  }
}

%feature("director:except") FIX::Application::fromAdmin {
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
      printf( "%s\n", RSTRING_PTR(message) );
      exit(1);
    }
  }
}

%feature("director:except") FIX::Application::fromApp {
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
      printf( "%s\n", RSTRING_PTR(message) );
      exit(1);
    }
  }
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
