#include "ruby.h"
#include "../C/quickfix_api.h"
#include <stdio.h>

static void logon_destroy( void *p  )
{
  qfObject pObject = (qfObject)p;
  qfDestroyLogon(pObject);
}

VALUE logon_new( VALUE class )
{
  qfObject pObject = qfCreateLogon();
  VALUE data = Data_Wrap_Struct(class, 0, logon_destroy, pObject);
  return data;
}

VALUE logon_setEncryptMethod( VALUE self, VALUE value )
{
  qfObject pObject;
  Data_Get_Struct(self, struct qfStruct, pObject);
  if( qfSetEncryptMethod(pObject, NUM2INT(value)) )
    return Qtrue;
  else
    return Qfalse;
}

VALUE logon_getEncryptMethod( VALUE self )
{
  int result;
  qfObject pObject;
  Data_Get_Struct(self, struct qfStruct, pObject);
  if( qfGetEncryptMethod(pObject, &result) )
  {
    return rb_int_new(result);
  }
  else
    rb_raise(rb_eStandardError, "");
}

void Init_librbquickfix()
{
  VALUE logonClass = rb_define_class("Logon", rb_cObject);
  rb_define_singleton_method(logonClass, "new", logon_new, 0);
  rb_define_method(logonClass, "setEncryptMethod", logon_setEncryptMethod, 1);
  rb_define_method(logonClass, "getEncryptMethod", logon_getEncryptMethod, 0);
}
