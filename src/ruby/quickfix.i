#ifdef SWIGRUBY
%rename(_getFieldName) FIX::DataDictionary::getFieldName;
%rename(_getValueName) FIX::DataDictionary::getValueName;
%rename(_getFieldTag) FIX::DataDictionary::getFieldTag;
%rename(_getGroup) FIX::DataDictionary::getGroup;
#endif

#ifdef SWIGRUBY 	 
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

%include ../quickfix.i
	  	 
%feature("director:except") FIX::Application::onCreate {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING_PTR(message) );
    exit(1);
  }
#endif
}

%feature("director:except") FIX::Application::onLogon {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING_PTR(message) );
    exit(1);
  }
#endif
}

%feature("director:except") FIX::Application::onLogout {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING_PTR(message) );
    exit(1);
  }
#endif
}

%feature("director:except") FIX::Application::toAdmin {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING_PTR(message) );
    exit(1);
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
      printf( "%s\n", RSTRING_PTR(message) );
      exit(1);
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
      printf( "%s\n", RSTRING_PTR(message) );
      exit(1);
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
      printf( "%s\n", RSTRING_PTR(message) );
      exit(1);
    }
  }
#endif
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
