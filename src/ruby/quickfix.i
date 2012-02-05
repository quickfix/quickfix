#ifdef SWIGRUBY
%rename(_getFieldName) FIX::DataDictionary::getFieldName;
%rename(_getValueName) FIX::DataDictionary::getValueName;
%rename(_getFieldTag) FIX::DataDictionary::getFieldTag;
%rename(_getGroup) FIX::DataDictionary::getGroup;
#endif

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

%include ../quickfix.i
	  	 
%feature("director:except") FIX::Application::onCreate {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING(message)->ptr );
    exit(1);
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
}

%feature("director:except") FIX::Application::onLogout {
#ifdef SWIGRUBY
  if( $error != 0 ) {
    VALUE message = rb_obj_as_string( $error );
    printf( "%s\n", RSTRING(message)->ptr );
    exit(1);
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
}
