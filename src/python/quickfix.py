# This file was created automatically by SWIG 1.3.29.
# Don't modify this file, modify the SWIG interface instead.
# This file is compatible with both classic and new-style classes.

import _quickfix
import new
new_instancemethod = new.instancemethod
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'PySwigObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static) or hasattr(self,name):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError,name

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

import types
try:
    _object = types.ObjectType
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0
del types


try:
    import weakref
    weakref_proxy = weakref.proxy
except:
    weakref_proxy = lambda x: x


class IntArray(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, IntArray, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, IntArray, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IntArray(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IntArray
    __del__ = lambda self : None;
    def __getitem__(*args): return _quickfix.IntArray___getitem__(*args)
    def __setitem__(*args): return _quickfix.IntArray___setitem__(*args)
    def cast(*args): return _quickfix.IntArray_cast(*args)
    __swig_getmethods__["frompointer"] = lambda x: _quickfix.IntArray_frompointer
    if _newclass:frompointer = staticmethod(_quickfix.IntArray_frompointer)
IntArray_swigregister = _quickfix.IntArray_swigregister
IntArray_swigregister(IntArray)
IntArray_frompointer = _quickfix.IntArray_frompointer

#ifdef SWIGPYTHON
import thread

def _quickfix_start_thread(i_or_a):
	i_or_a.block()
#endif

HAVE_DLFCN_H = _quickfix.HAVE_DLFCN_H
HAVE_FTIME = _quickfix.HAVE_FTIME
HAVE_INTTYPES_H = _quickfix.HAVE_INTTYPES_H
HAVE_MEMORY_H = _quickfix.HAVE_MEMORY_H
HAVE_PYTHON = _quickfix.HAVE_PYTHON
HAVE_RUBY = _quickfix.HAVE_RUBY
HAVE_STDINT_H = _quickfix.HAVE_STDINT_H
HAVE_STDIO_H = _quickfix.HAVE_STDIO_H
HAVE_STDLIB_H = _quickfix.HAVE_STDLIB_H
HAVE_STRINGS_H = _quickfix.HAVE_STRINGS_H
HAVE_STRING_H = _quickfix.HAVE_STRING_H
HAVE_SYS_STAT_H = _quickfix.HAVE_SYS_STAT_H
HAVE_SYS_TYPES_H = _quickfix.HAVE_SYS_TYPES_H
HAVE_UNISTD_H = _quickfix.HAVE_UNISTD_H
PACKAGE = _quickfix.PACKAGE
PACKAGE_BUGREPORT = _quickfix.PACKAGE_BUGREPORT
PACKAGE_NAME = _quickfix.PACKAGE_NAME
PACKAGE_STRING = _quickfix.PACKAGE_STRING
PACKAGE_TARNAME = _quickfix.PACKAGE_TARNAME
PACKAGE_VERSION = _quickfix.PACKAGE_VERSION
STDC_HEADERS = _quickfix.STDC_HEADERS
TERMINATE_IN_STD = _quickfix.TERMINATE_IN_STD
TYPEINFO_IN_STD = _quickfix.TYPEINFO_IN_STD
VERSION = _quickfix.VERSION
YYTEXT_POINTER = _quickfix.YYTEXT_POINTER
class Exception:
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Exception, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Exception, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Exception(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Exception
    __del__ = lambda self : None;
    __swig_setmethods__["type"] = _quickfix.Exception_type_set
    __swig_getmethods__["type"] = _quickfix.Exception_type_get
    __swig_setmethods__["detail"] = _quickfix.Exception_detail_set
    __swig_getmethods__["detail"] = _quickfix.Exception_detail_get
    def __str__(*args): return _quickfix.Exception___str__(*args)
Exception_swigregister = _quickfix.Exception_swigregister
Exception_swigregister(Exception)

class FieldNotFound(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FieldNotFound, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FieldNotFound, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FieldNotFound(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["field"] = _quickfix.FieldNotFound_field_set
    __swig_getmethods__["field"] = _quickfix.FieldNotFound_field_get
    __swig_destroy__ = _quickfix.delete_FieldNotFound
    __del__ = lambda self : None;
FieldNotFound_swigregister = _quickfix.FieldNotFound_swigregister
FieldNotFound_swigregister(FieldNotFound)

class FieldConvertError(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FieldConvertError, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FieldConvertError, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FieldConvertError(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_FieldConvertError
    __del__ = lambda self : None;
FieldConvertError_swigregister = _quickfix.FieldConvertError_swigregister
FieldConvertError_swigregister(FieldConvertError)

class MessageParseError(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MessageParseError, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MessageParseError, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MessageParseError(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MessageParseError
    __del__ = lambda self : None;
MessageParseError_swigregister = _quickfix.MessageParseError_swigregister
MessageParseError_swigregister(MessageParseError)

class InvalidMessage(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, InvalidMessage, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, InvalidMessage, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_InvalidMessage(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_InvalidMessage
    __del__ = lambda self : None;
InvalidMessage_swigregister = _quickfix.InvalidMessage_swigregister
InvalidMessage_swigregister(InvalidMessage)

class ConfigError(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ConfigError, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ConfigError, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ConfigError(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ConfigError
    __del__ = lambda self : None;
ConfigError_swigregister = _quickfix.ConfigError_swigregister
ConfigError_swigregister(ConfigError)

class RuntimeError(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RuntimeError, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RuntimeError, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RuntimeError(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RuntimeError
    __del__ = lambda self : None;
RuntimeError_swigregister = _quickfix.RuntimeError_swigregister
RuntimeError_swigregister(RuntimeError)

class InvalidTagNumber(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, InvalidTagNumber, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, InvalidTagNumber, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_InvalidTagNumber(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["field"] = _quickfix.InvalidTagNumber_field_set
    __swig_getmethods__["field"] = _quickfix.InvalidTagNumber_field_get
    if _newclass:field = property(_quickfix.InvalidTagNumber_field_get, _quickfix.InvalidTagNumber_field_set)
    __swig_destroy__ = _quickfix.delete_InvalidTagNumber
    __del__ = lambda self : None;
InvalidTagNumber_swigregister = _quickfix.InvalidTagNumber_swigregister
InvalidTagNumber_swigregister(InvalidTagNumber)

class RequiredTagMissing(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RequiredTagMissing, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RequiredTagMissing, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RequiredTagMissing(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["field"] = _quickfix.RequiredTagMissing_field_set
    __swig_getmethods__["field"] = _quickfix.RequiredTagMissing_field_get
    if _newclass:field = property(_quickfix.RequiredTagMissing_field_get, _quickfix.RequiredTagMissing_field_set)
    __swig_destroy__ = _quickfix.delete_RequiredTagMissing
    __del__ = lambda self : None;
RequiredTagMissing_swigregister = _quickfix.RequiredTagMissing_swigregister
RequiredTagMissing_swigregister(RequiredTagMissing)

class TagNotDefinedForMessage(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TagNotDefinedForMessage, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TagNotDefinedForMessage, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TagNotDefinedForMessage(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["field"] = _quickfix.TagNotDefinedForMessage_field_set
    __swig_getmethods__["field"] = _quickfix.TagNotDefinedForMessage_field_get
    if _newclass:field = property(_quickfix.TagNotDefinedForMessage_field_get, _quickfix.TagNotDefinedForMessage_field_set)
    __swig_destroy__ = _quickfix.delete_TagNotDefinedForMessage
    __del__ = lambda self : None;
TagNotDefinedForMessage_swigregister = _quickfix.TagNotDefinedForMessage_swigregister
TagNotDefinedForMessage_swigregister(TagNotDefinedForMessage)

class NoTagValue(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoTagValue, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoTagValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoTagValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["field"] = _quickfix.NoTagValue_field_set
    __swig_getmethods__["field"] = _quickfix.NoTagValue_field_get
    __swig_destroy__ = _quickfix.delete_NoTagValue
    __del__ = lambda self : None;
NoTagValue_swigregister = _quickfix.NoTagValue_swigregister
NoTagValue_swigregister(NoTagValue)

class IncorrectTagValue(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IncorrectTagValue, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IncorrectTagValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IncorrectTagValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["field"] = _quickfix.IncorrectTagValue_field_set
    __swig_getmethods__["field"] = _quickfix.IncorrectTagValue_field_get
    __swig_destroy__ = _quickfix.delete_IncorrectTagValue
    __del__ = lambda self : None;
IncorrectTagValue_swigregister = _quickfix.IncorrectTagValue_swigregister
IncorrectTagValue_swigregister(IncorrectTagValue)

class IncorrectDataFormat(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IncorrectDataFormat, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IncorrectDataFormat, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IncorrectDataFormat(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["field"] = _quickfix.IncorrectDataFormat_field_set
    __swig_getmethods__["field"] = _quickfix.IncorrectDataFormat_field_get
    __swig_destroy__ = _quickfix.delete_IncorrectDataFormat
    __del__ = lambda self : None;
IncorrectDataFormat_swigregister = _quickfix.IncorrectDataFormat_swigregister
IncorrectDataFormat_swigregister(IncorrectDataFormat)

class IncorrectMessageStructure(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IncorrectMessageStructure, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IncorrectMessageStructure, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IncorrectMessageStructure(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IncorrectMessageStructure
    __del__ = lambda self : None;
IncorrectMessageStructure_swigregister = _quickfix.IncorrectMessageStructure_swigregister
IncorrectMessageStructure_swigregister(IncorrectMessageStructure)

class DuplicateFieldNumber(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DuplicateFieldNumber, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DuplicateFieldNumber, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DuplicateFieldNumber(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DuplicateFieldNumber
    __del__ = lambda self : None;
DuplicateFieldNumber_swigregister = _quickfix.DuplicateFieldNumber_swigregister
DuplicateFieldNumber_swigregister(DuplicateFieldNumber)

class InvalidMessageType(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, InvalidMessageType, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, InvalidMessageType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_InvalidMessageType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_InvalidMessageType
    __del__ = lambda self : None;
InvalidMessageType_swigregister = _quickfix.InvalidMessageType_swigregister
InvalidMessageType_swigregister(InvalidMessageType)

class UnsupportedMessageType(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnsupportedMessageType, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnsupportedMessageType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnsupportedMessageType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnsupportedMessageType
    __del__ = lambda self : None;
UnsupportedMessageType_swigregister = _quickfix.UnsupportedMessageType_swigregister
UnsupportedMessageType_swigregister(UnsupportedMessageType)

class UnsupportedVersion(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnsupportedVersion, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnsupportedVersion, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnsupportedVersion(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnsupportedVersion
    __del__ = lambda self : None;
UnsupportedVersion_swigregister = _quickfix.UnsupportedVersion_swigregister
UnsupportedVersion_swigregister(UnsupportedVersion)

class TagOutOfOrder(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TagOutOfOrder, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TagOutOfOrder, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TagOutOfOrder(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["field"] = _quickfix.TagOutOfOrder_field_set
    __swig_getmethods__["field"] = _quickfix.TagOutOfOrder_field_get
    if _newclass:field = property(_quickfix.TagOutOfOrder_field_get, _quickfix.TagOutOfOrder_field_set)
    __swig_destroy__ = _quickfix.delete_TagOutOfOrder
    __del__ = lambda self : None;
TagOutOfOrder_swigregister = _quickfix.TagOutOfOrder_swigregister
TagOutOfOrder_swigregister(TagOutOfOrder)

class RepeatedTag(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RepeatedTag, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RepeatedTag, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RepeatedTag(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["field"] = _quickfix.RepeatedTag_field_set
    __swig_getmethods__["field"] = _quickfix.RepeatedTag_field_get
    __swig_destroy__ = _quickfix.delete_RepeatedTag
    __del__ = lambda self : None;
RepeatedTag_swigregister = _quickfix.RepeatedTag_swigregister
RepeatedTag_swigregister(RepeatedTag)

class RepeatingGroupCountMismatch(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RepeatingGroupCountMismatch, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RepeatingGroupCountMismatch, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RepeatingGroupCountMismatch(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["field"] = _quickfix.RepeatingGroupCountMismatch_field_set
    __swig_getmethods__["field"] = _quickfix.RepeatingGroupCountMismatch_field_get
    if _newclass:field = property(_quickfix.RepeatingGroupCountMismatch_field_get, _quickfix.RepeatingGroupCountMismatch_field_set)
    __swig_destroy__ = _quickfix.delete_RepeatingGroupCountMismatch
    __del__ = lambda self : None;
RepeatingGroupCountMismatch_swigregister = _quickfix.RepeatingGroupCountMismatch_swigregister
RepeatingGroupCountMismatch_swigregister(RepeatingGroupCountMismatch)

class DoNotSend(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DoNotSend, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DoNotSend, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DoNotSend(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DoNotSend
    __del__ = lambda self : None;
DoNotSend_swigregister = _quickfix.DoNotSend_swigregister
DoNotSend_swigregister(DoNotSend)

class RejectLogon(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RejectLogon, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RejectLogon, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RejectLogon(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RejectLogon
    __del__ = lambda self : None;
RejectLogon_swigregister = _quickfix.RejectLogon_swigregister
RejectLogon_swigregister(RejectLogon)

class SessionNotFound(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SessionNotFound, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SessionNotFound, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SessionNotFound(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SessionNotFound
    __del__ = lambda self : None;
SessionNotFound_swigregister = _quickfix.SessionNotFound_swigregister
SessionNotFound_swigregister(SessionNotFound)

class IOException(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IOException, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IOException, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IOException(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IOException
    __del__ = lambda self : None;
IOException_swigregister = _quickfix.IOException_swigregister
IOException_swigregister(IOException)

class SocketException(Exception):
    __swig_setmethods__ = {}
    for _s in [Exception]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SocketException, name, value)
    __swig_getmethods__ = {}
    for _s in [Exception]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SocketException, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SocketException(*args)
        try: self.this.append(this)
        except: self.this = this
    def errorToWhat(*args): return _quickfix.SocketException_errorToWhat(*args)
    __swig_setmethods__["error"] = _quickfix.SocketException_error_set
    __swig_getmethods__["error"] = _quickfix.SocketException_error_get
    if _newclass:error = property(_quickfix.SocketException_error_get, _quickfix.SocketException_error_set)
    __swig_destroy__ = _quickfix.delete_SocketException
    __del__ = lambda self : None;
SocketException_swigregister = _quickfix.SocketException_swigregister
SocketException_swigregister(SocketException)

class SocketSendFailed(SocketException):
    __swig_setmethods__ = {}
    for _s in [SocketException]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SocketSendFailed, name, value)
    __swig_getmethods__ = {}
    for _s in [SocketException]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SocketSendFailed, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SocketSendFailed(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SocketSendFailed
    __del__ = lambda self : None;
SocketSendFailed_swigregister = _quickfix.SocketSendFailed_swigregister
SocketSendFailed_swigregister(SocketSendFailed)

class SocketRecvFailed(SocketException):
    __swig_setmethods__ = {}
    for _s in [SocketException]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SocketRecvFailed, name, value)
    __swig_getmethods__ = {}
    for _s in [SocketException]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SocketRecvFailed, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SocketRecvFailed(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SocketRecvFailed
    __del__ = lambda self : None;
SocketRecvFailed_swigregister = _quickfix.SocketRecvFailed_swigregister
SocketRecvFailed_swigregister(SocketRecvFailed)

class SocketCloseFailed(SocketException):
    __swig_setmethods__ = {}
    for _s in [SocketException]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SocketCloseFailed, name, value)
    __swig_getmethods__ = {}
    for _s in [SocketException]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SocketCloseFailed, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SocketCloseFailed(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SocketCloseFailed
    __del__ = lambda self : None;
SocketCloseFailed_swigregister = _quickfix.SocketCloseFailed_swigregister
SocketCloseFailed_swigregister(SocketCloseFailed)

class FieldBase(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, FieldBase, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, FieldBase, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FieldBase(*args)
        try: self.this.append(this)
        except: self.this = this
    def setField(*args): return _quickfix.FieldBase_setField(*args)
    def setString(*args): return _quickfix.FieldBase_setString(*args)
    def getField(*args): return _quickfix.FieldBase_getField(*args)
    def getString(*args): return _quickfix.FieldBase_getString(*args)
    def getValue(*args): return _quickfix.FieldBase_getValue(*args)
    def getLength(*args): return _quickfix.FieldBase_getLength(*args)
    def getTotal(*args): return _quickfix.FieldBase_getTotal(*args)
    def __lt__(*args): return _quickfix.FieldBase___lt__(*args)
    def __str__(*args): return _quickfix.FieldBase___str__(*args)
    __swig_destroy__ = _quickfix.delete_FieldBase
    __del__ = lambda self : None;
FieldBase_swigregister = _quickfix.FieldBase_swigregister
FieldBase_swigregister(FieldBase)

class StringField(FieldBase):
    __swig_setmethods__ = {}
    for _s in [FieldBase]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StringField, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldBase]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StringField, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StringField(*args)
        try: self.this.append(this)
        except: self.this = this
    def setValue(*args): return _quickfix.StringField_setValue(*args)
    def getValue(*args): return _quickfix.StringField_getValue(*args)
    def __lt__(*args): return _quickfix.StringField___lt__(*args)
    def __gt__(*args): return _quickfix.StringField___gt__(*args)
    def __eq__(*args): return _quickfix.StringField___eq__(*args)
    def __ne__(*args): return _quickfix.StringField___ne__(*args)
    def __le__(*args): return _quickfix.StringField___le__(*args)
    def __ge__(*args): return _quickfix.StringField___ge__(*args)
    __swig_destroy__ = _quickfix.delete_StringField
    __del__ = lambda self : None;
StringField_swigregister = _quickfix.StringField_swigregister
StringField_swigregister(StringField)

class CharField(FieldBase):
    __swig_setmethods__ = {}
    for _s in [FieldBase]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CharField, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldBase]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CharField, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CharField(*args)
        try: self.this.append(this)
        except: self.this = this
    def setValue(*args): return _quickfix.CharField_setValue(*args)
    def getValue(*args): return _quickfix.CharField_getValue(*args)
    __swig_destroy__ = _quickfix.delete_CharField
    __del__ = lambda self : None;
CharField_swigregister = _quickfix.CharField_swigregister
CharField_swigregister(CharField)
__gt__ = _quickfix.__gt__
__le__ = _quickfix.__le__
__ge__ = _quickfix.__ge__

class DoubleField(FieldBase):
    __swig_setmethods__ = {}
    for _s in [FieldBase]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DoubleField, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldBase]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DoubleField, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DoubleField(*args)
        try: self.this.append(this)
        except: self.this = this
    def setValue(*args): return _quickfix.DoubleField_setValue(*args)
    def getValue(*args): return _quickfix.DoubleField_getValue(*args)
    __swig_destroy__ = _quickfix.delete_DoubleField
    __del__ = lambda self : None;
DoubleField_swigregister = _quickfix.DoubleField_swigregister
DoubleField_swigregister(DoubleField)

class IntField(FieldBase):
    __swig_setmethods__ = {}
    for _s in [FieldBase]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IntField, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldBase]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IntField, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IntField(*args)
        try: self.this.append(this)
        except: self.this = this
    def setValue(*args): return _quickfix.IntField_setValue(*args)
    def getValue(*args): return _quickfix.IntField_getValue(*args)
    __swig_destroy__ = _quickfix.delete_IntField
    __del__ = lambda self : None;
IntField_swigregister = _quickfix.IntField_swigregister
IntField_swigregister(IntField)

class BoolField(FieldBase):
    __swig_setmethods__ = {}
    for _s in [FieldBase]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BoolField, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldBase]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BoolField, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BoolField(*args)
        try: self.this.append(this)
        except: self.this = this
    def setValue(*args): return _quickfix.BoolField_setValue(*args)
    def getValue(*args): return _quickfix.BoolField_getValue(*args)
    __swig_destroy__ = _quickfix.delete_BoolField
    __del__ = lambda self : None;
BoolField_swigregister = _quickfix.BoolField_swigregister
BoolField_swigregister(BoolField)

class UtcTimeStampField(FieldBase):
    __swig_setmethods__ = {}
    for _s in [FieldBase]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UtcTimeStampField, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldBase]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UtcTimeStampField, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UtcTimeStampField(*args)
        try: self.this.append(this)
        except: self.this = this
    def setValue(*args): return _quickfix.UtcTimeStampField_setValue(*args)
    def getValue(*args): return _quickfix.UtcTimeStampField_getValue(*args)
    def __lt__(*args): return _quickfix.UtcTimeStampField___lt__(*args)
    def __eq__(*args): return _quickfix.UtcTimeStampField___eq__(*args)
    def __ne__(*args): return _quickfix.UtcTimeStampField___ne__(*args)
    __swig_destroy__ = _quickfix.delete_UtcTimeStampField
    __del__ = lambda self : None;
UtcTimeStampField_swigregister = _quickfix.UtcTimeStampField_swigregister
UtcTimeStampField_swigregister(UtcTimeStampField)

class UtcDateField(FieldBase):
    __swig_setmethods__ = {}
    for _s in [FieldBase]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UtcDateField, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldBase]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UtcDateField, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UtcDateField(*args)
        try: self.this.append(this)
        except: self.this = this
    def setValue(*args): return _quickfix.UtcDateField_setValue(*args)
    def getValue(*args): return _quickfix.UtcDateField_getValue(*args)
    def __lt__(*args): return _quickfix.UtcDateField___lt__(*args)
    def __eq__(*args): return _quickfix.UtcDateField___eq__(*args)
    def __ne__(*args): return _quickfix.UtcDateField___ne__(*args)
    __swig_destroy__ = _quickfix.delete_UtcDateField
    __del__ = lambda self : None;
UtcDateField_swigregister = _quickfix.UtcDateField_swigregister
UtcDateField_swigregister(UtcDateField)

class UtcTimeOnlyField(FieldBase):
    __swig_setmethods__ = {}
    for _s in [FieldBase]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UtcTimeOnlyField, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldBase]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UtcTimeOnlyField, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UtcTimeOnlyField(*args)
        try: self.this.append(this)
        except: self.this = this
    def setValue(*args): return _quickfix.UtcTimeOnlyField_setValue(*args)
    def getValue(*args): return _quickfix.UtcTimeOnlyField_getValue(*args)
    def __lt__(*args): return _quickfix.UtcTimeOnlyField___lt__(*args)
    def __eq__(*args): return _quickfix.UtcTimeOnlyField___eq__(*args)
    def __ne__(*args): return _quickfix.UtcTimeOnlyField___ne__(*args)
    __swig_destroy__ = _quickfix.delete_UtcTimeOnlyField
    __del__ = lambda self : None;
UtcTimeOnlyField_swigregister = _quickfix.UtcTimeOnlyField_swigregister
UtcTimeOnlyField_swigregister(UtcTimeOnlyField)

class CheckSumField(FieldBase):
    __swig_setmethods__ = {}
    for _s in [FieldBase]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CheckSumField, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldBase]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CheckSumField, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CheckSumField(*args)
        try: self.this.append(this)
        except: self.this = this
    def setValue(*args): return _quickfix.CheckSumField_setValue(*args)
    def getValue(*args): return _quickfix.CheckSumField_getValue(*args)
    __swig_destroy__ = _quickfix.delete_CheckSumField
    __del__ = lambda self : None;
CheckSumField_swigregister = _quickfix.CheckSumField_swigregister
CheckSumField_swigregister(CheckSumField)

class FieldMap(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, FieldMap, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, FieldMap, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FieldMap(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_FieldMap
    __del__ = lambda self : None;
    def setField(*args): return _quickfix.FieldMap_setField(*args)
    def getField(*args): return _quickfix.FieldMap_getField(*args)
    def isSetField(*args): return _quickfix.FieldMap_isSetField(*args)
    def removeField(*args): return _quickfix.FieldMap_removeField(*args)
    def addGroup(*args): return _quickfix.FieldMap_addGroup(*args)
    def replaceGroup(*args): return _quickfix.FieldMap_replaceGroup(*args)
    def getGroup(*args): return _quickfix.FieldMap_getGroup(*args)
    def removeGroup(*args): return _quickfix.FieldMap_removeGroup(*args)
    def hasGroup(*args): return _quickfix.FieldMap_hasGroup(*args)
    def groupCount(*args): return _quickfix.FieldMap_groupCount(*args)
    def clear(*args): return _quickfix.FieldMap_clear(*args)
    def isEmpty(*args): return _quickfix.FieldMap_isEmpty(*args)
    def calculateString(*args): return _quickfix.FieldMap_calculateString(*args)
    def calculateLength(*args): return _quickfix.FieldMap_calculateLength(*args)
    def calculateTotal(*args): return _quickfix.FieldMap_calculateTotal(*args)
    def begin(*args): return _quickfix.FieldMap_begin(*args)
    def end(*args): return _quickfix.FieldMap_end(*args)
    def g_begin(*args): return _quickfix.FieldMap_g_begin(*args)
    def g_end(*args): return _quickfix.FieldMap_g_end(*args)
FieldMap_swigregister = _quickfix.FieldMap_swigregister
FieldMap_swigregister(FieldMap)

class Message(FieldMap):
    __swig_setmethods__ = {}
    for _s in [FieldMap]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Message, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldMap]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Message, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Message(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_getmethods__["InitializeXML"] = lambda x: _quickfix.Message_InitializeXML
    if _newclass:InitializeXML = staticmethod(_quickfix.Message_InitializeXML)
    def addGroup(*args): return _quickfix.Message_addGroup(*args)
    def replaceGroup(*args): return _quickfix.Message_replaceGroup(*args)
    def getGroup(*args): return _quickfix.Message_getGroup(*args)
    def removeGroup(*args): return _quickfix.Message_removeGroup(*args)
    def hasGroup(*args): return _quickfix.Message_hasGroup(*args)
    def toString(*args): return _quickfix.Message_toString(*args)
    def toXML(*args): return _quickfix.Message_toXML(*args)
    def reverseRoute(*args): return _quickfix.Message_reverseRoute(*args)
    def setString(*args): return _quickfix.Message_setString(*args)
    def setGroup(*args): return _quickfix.Message_setGroup(*args)
    def setStringHeader(*args): return _quickfix.Message_setStringHeader(*args)
    def getHeader(*args): return _quickfix.Message_getHeader(*args)
    def getTrailer(*args): return _quickfix.Message_getTrailer(*args)
    def hasValidStructure(*args): return _quickfix.Message_hasValidStructure(*args)
    def bodyLength(*args): return _quickfix.Message_bodyLength(*args)
    def checkSum(*args): return _quickfix.Message_checkSum(*args)
    def isAdmin(*args): return _quickfix.Message_isAdmin(*args)
    def isApp(*args): return _quickfix.Message_isApp(*args)
    def isEmpty(*args): return _quickfix.Message_isEmpty(*args)
    def clear(*args): return _quickfix.Message_clear(*args)
    __swig_getmethods__["isAdminMsgType"] = lambda x: _quickfix.Message_isAdminMsgType
    if _newclass:isAdminMsgType = staticmethod(_quickfix.Message_isAdminMsgType)
    __swig_getmethods__["isHeaderField"] = lambda x: _quickfix.Message_isHeaderField
    if _newclass:isHeaderField = staticmethod(_quickfix.Message_isHeaderField)
    __swig_getmethods__["isTrailerField"] = lambda x: _quickfix.Message_isTrailerField
    if _newclass:isTrailerField = staticmethod(_quickfix.Message_isTrailerField)
    def getSessionID(*args): return _quickfix.Message_getSessionID(*args)
    def setSessionID(*args): return _quickfix.Message_setSessionID(*args)
    def __str__(*args): return _quickfix.Message___str__(*args)
    __swig_destroy__ = _quickfix.delete_Message
    __del__ = lambda self : None;
Message_swigregister = _quickfix.Message_swigregister
Message_swigregister(Message)
cvar = _quickfix.cvar
headerOrder = cvar.headerOrder
Message_InitializeXML = _quickfix.Message_InitializeXML
Message_isAdminMsgType = _quickfix.Message_isAdminMsgType
Message_isHeaderField = _quickfix.Message_isHeaderField
Message_isTrailerField = _quickfix.Message_isTrailerField

identifyType = _quickfix.identifyType
class Group(FieldMap):
    __swig_setmethods__ = {}
    for _s in [FieldMap]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Group, name, value)
    __swig_getmethods__ = {}
    for _s in [FieldMap]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Group, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Group(*args)
        try: self.this.append(this)
        except: self.this = this
    def field(*args): return _quickfix.Group_field(*args)
    def delim(*args): return _quickfix.Group_delim(*args)
    def addGroup(*args): return _quickfix.Group_addGroup(*args)
    def replaceGroup(*args): return _quickfix.Group_replaceGroup(*args)
    def getGroup(*args): return _quickfix.Group_getGroup(*args)
    def removeGroup(*args): return _quickfix.Group_removeGroup(*args)
    def hasGroup(*args): return _quickfix.Group_hasGroup(*args)
    __swig_destroy__ = _quickfix.delete_Group
    __del__ = lambda self : None;
Group_swigregister = _quickfix.Group_swigregister
Group_swigregister(Group)

class Account(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Account, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Account, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Account(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Account
    __del__ = lambda self : None;
Account_swigregister = _quickfix.Account_swigregister
Account_swigregister(Account)

class AdvId(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AdvId, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AdvId, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AdvId(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AdvId
    __del__ = lambda self : None;
AdvId_swigregister = _quickfix.AdvId_swigregister
AdvId_swigregister(AdvId)

class AdvRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AdvRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AdvRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AdvRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AdvRefID
    __del__ = lambda self : None;
AdvRefID_swigregister = _quickfix.AdvRefID_swigregister
AdvRefID_swigregister(AdvRefID)

class AdvSide(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AdvSide, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AdvSide, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AdvSide(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AdvSide
    __del__ = lambda self : None;
AdvSide_swigregister = _quickfix.AdvSide_swigregister
AdvSide_swigregister(AdvSide)

class AdvTransType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AdvTransType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AdvTransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AdvTransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AdvTransType
    __del__ = lambda self : None;
AdvTransType_swigregister = _quickfix.AdvTransType_swigregister
AdvTransType_swigregister(AdvTransType)

class AvgPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AvgPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AvgPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AvgPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AvgPx
    __del__ = lambda self : None;
AvgPx_swigregister = _quickfix.AvgPx_swigregister
AvgPx_swigregister(AvgPx)

class BeginSeqNo(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BeginSeqNo, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BeginSeqNo, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BeginSeqNo(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BeginSeqNo
    __del__ = lambda self : None;
BeginSeqNo_swigregister = _quickfix.BeginSeqNo_swigregister
BeginSeqNo_swigregister(BeginSeqNo)

class BeginString(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BeginString, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BeginString, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BeginString(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BeginString
    __del__ = lambda self : None;
BeginString_swigregister = _quickfix.BeginString_swigregister
BeginString_swigregister(BeginString)

class BodyLength(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BodyLength, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BodyLength, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BodyLength(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BodyLength
    __del__ = lambda self : None;
BodyLength_swigregister = _quickfix.BodyLength_swigregister
BodyLength_swigregister(BodyLength)

class CheckSum(CheckSumField):
    __swig_setmethods__ = {}
    for _s in [CheckSumField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CheckSum, name, value)
    __swig_getmethods__ = {}
    for _s in [CheckSumField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CheckSum, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CheckSum(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CheckSum
    __del__ = lambda self : None;
CheckSum_swigregister = _quickfix.CheckSum_swigregister
CheckSum_swigregister(CheckSum)

class ClOrdID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ClOrdID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ClOrdID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ClOrdID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ClOrdID
    __del__ = lambda self : None;
ClOrdID_swigregister = _quickfix.ClOrdID_swigregister
ClOrdID_swigregister(ClOrdID)

class Commission(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Commission, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Commission, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Commission(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Commission
    __del__ = lambda self : None;
Commission_swigregister = _quickfix.Commission_swigregister
Commission_swigregister(Commission)

class CommType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CommType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CommType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CommType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CommType
    __del__ = lambda self : None;
CommType_swigregister = _quickfix.CommType_swigregister
CommType_swigregister(CommType)

class CumQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CumQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CumQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CumQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CumQty
    __del__ = lambda self : None;
CumQty_swigregister = _quickfix.CumQty_swigregister
CumQty_swigregister(CumQty)

class Currency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Currency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Currency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Currency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Currency
    __del__ = lambda self : None;
Currency_swigregister = _quickfix.Currency_swigregister
Currency_swigregister(Currency)

class EndSeqNo(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EndSeqNo, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EndSeqNo, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EndSeqNo(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EndSeqNo
    __del__ = lambda self : None;
EndSeqNo_swigregister = _quickfix.EndSeqNo_swigregister
EndSeqNo_swigregister(EndSeqNo)

class ExecID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExecID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExecID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExecID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExecID
    __del__ = lambda self : None;
ExecID_swigregister = _quickfix.ExecID_swigregister
ExecID_swigregister(ExecID)

class ExecInst(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExecInst, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExecInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExecInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExecInst
    __del__ = lambda self : None;
ExecInst_swigregister = _quickfix.ExecInst_swigregister
ExecInst_swigregister(ExecInst)

class ExecRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExecRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExecRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExecRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExecRefID
    __del__ = lambda self : None;
ExecRefID_swigregister = _quickfix.ExecRefID_swigregister
ExecRefID_swigregister(ExecRefID)

class HandlInst(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, HandlInst, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, HandlInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_HandlInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_HandlInst
    __del__ = lambda self : None;
HandlInst_swigregister = _quickfix.HandlInst_swigregister
HandlInst_swigregister(HandlInst)

class SecurityIDSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityIDSource
    __del__ = lambda self : None;
SecurityIDSource_swigregister = _quickfix.SecurityIDSource_swigregister
SecurityIDSource_swigregister(SecurityIDSource)

class IOIid(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IOIid, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IOIid, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IOIid(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IOIid
    __del__ = lambda self : None;
IOIid_swigregister = _quickfix.IOIid_swigregister
IOIid_swigregister(IOIid)

class IOIQltyInd(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IOIQltyInd, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IOIQltyInd, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IOIQltyInd(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IOIQltyInd
    __del__ = lambda self : None;
IOIQltyInd_swigregister = _quickfix.IOIQltyInd_swigregister
IOIQltyInd_swigregister(IOIQltyInd)

class IOIRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IOIRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IOIRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IOIRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IOIRefID
    __del__ = lambda self : None;
IOIRefID_swigregister = _quickfix.IOIRefID_swigregister
IOIRefID_swigregister(IOIRefID)

class IOIQty(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IOIQty, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IOIQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IOIQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IOIQty
    __del__ = lambda self : None;
IOIQty_swigregister = _quickfix.IOIQty_swigregister
IOIQty_swigregister(IOIQty)

class IOITransType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IOITransType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IOITransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IOITransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IOITransType
    __del__ = lambda self : None;
IOITransType_swigregister = _quickfix.IOITransType_swigregister
IOITransType_swigregister(IOITransType)

class LastCapacity(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastCapacity, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastCapacity, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastCapacity(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastCapacity
    __del__ = lambda self : None;
LastCapacity_swigregister = _quickfix.LastCapacity_swigregister
LastCapacity_swigregister(LastCapacity)

class LastMkt(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastMkt, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastMkt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastMkt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastMkt
    __del__ = lambda self : None;
LastMkt_swigregister = _quickfix.LastMkt_swigregister
LastMkt_swigregister(LastMkt)

class LastPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastPx
    __del__ = lambda self : None;
LastPx_swigregister = _quickfix.LastPx_swigregister
LastPx_swigregister(LastPx)

class LastQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastQty
    __del__ = lambda self : None;
LastQty_swigregister = _quickfix.LastQty_swigregister
LastQty_swigregister(LastQty)

class LinesOfText(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LinesOfText, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LinesOfText, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LinesOfText(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LinesOfText
    __del__ = lambda self : None;
LinesOfText_swigregister = _quickfix.LinesOfText_swigregister
LinesOfText_swigregister(LinesOfText)

class MsgSeqNum(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MsgSeqNum, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MsgSeqNum, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MsgSeqNum(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MsgSeqNum
    __del__ = lambda self : None;
MsgSeqNum_swigregister = _quickfix.MsgSeqNum_swigregister
MsgSeqNum_swigregister(MsgSeqNum)

class MsgType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MsgType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MsgType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MsgType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MsgType
    __del__ = lambda self : None;
MsgType_swigregister = _quickfix.MsgType_swigregister
MsgType_swigregister(MsgType)

class NewSeqNo(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NewSeqNo, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NewSeqNo, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NewSeqNo(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NewSeqNo
    __del__ = lambda self : None;
NewSeqNo_swigregister = _quickfix.NewSeqNo_swigregister
NewSeqNo_swigregister(NewSeqNo)

class OrderID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrderID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrderID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrderID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrderID
    __del__ = lambda self : None;
OrderID_swigregister = _quickfix.OrderID_swigregister
OrderID_swigregister(OrderID)

class OrderQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrderQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrderQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrderQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrderQty
    __del__ = lambda self : None;
OrderQty_swigregister = _quickfix.OrderQty_swigregister
OrderQty_swigregister(OrderQty)

class OrdStatus(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrdStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrdStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrdStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrdStatus
    __del__ = lambda self : None;
OrdStatus_swigregister = _quickfix.OrdStatus_swigregister
OrdStatus_swigregister(OrdStatus)

class OrdType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrdType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrdType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrdType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrdType
    __del__ = lambda self : None;
OrdType_swigregister = _quickfix.OrdType_swigregister
OrdType_swigregister(OrdType)

class OrigClOrdID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrigClOrdID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrigClOrdID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrigClOrdID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrigClOrdID
    __del__ = lambda self : None;
OrigClOrdID_swigregister = _quickfix.OrigClOrdID_swigregister
OrigClOrdID_swigregister(OrigClOrdID)

class OrigTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrigTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrigTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrigTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrigTime
    __del__ = lambda self : None;
OrigTime_swigregister = _quickfix.OrigTime_swigregister
OrigTime_swigregister(OrigTime)

class PossDupFlag(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PossDupFlag, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PossDupFlag, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PossDupFlag(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PossDupFlag
    __del__ = lambda self : None;
PossDupFlag_swigregister = _quickfix.PossDupFlag_swigregister
PossDupFlag_swigregister(PossDupFlag)

class Price(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Price, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Price, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Price(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Price
    __del__ = lambda self : None;
Price_swigregister = _quickfix.Price_swigregister
Price_swigregister(Price)

class RefSeqNum(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RefSeqNum, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RefSeqNum, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RefSeqNum(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RefSeqNum
    __del__ = lambda self : None;
RefSeqNum_swigregister = _quickfix.RefSeqNum_swigregister
RefSeqNum_swigregister(RefSeqNum)

class SecurityID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityID
    __del__ = lambda self : None;
SecurityID_swigregister = _quickfix.SecurityID_swigregister
SecurityID_swigregister(SecurityID)

class SenderCompID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SenderCompID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SenderCompID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SenderCompID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SenderCompID
    __del__ = lambda self : None;
SenderCompID_swigregister = _quickfix.SenderCompID_swigregister
SenderCompID_swigregister(SenderCompID)

class SenderSubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SenderSubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SenderSubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SenderSubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SenderSubID
    __del__ = lambda self : None;
SenderSubID_swigregister = _quickfix.SenderSubID_swigregister
SenderSubID_swigregister(SenderSubID)

class SendingTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SendingTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SendingTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SendingTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SendingTime
    __del__ = lambda self : None;
SendingTime_swigregister = _quickfix.SendingTime_swigregister
SendingTime_swigregister(SendingTime)

class Quantity(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Quantity, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Quantity, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Quantity(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Quantity
    __del__ = lambda self : None;
Quantity_swigregister = _quickfix.Quantity_swigregister
Quantity_swigregister(Quantity)

class Side(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Side, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Side, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Side(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Side
    __del__ = lambda self : None;
Side_swigregister = _quickfix.Side_swigregister
Side_swigregister(Side)

class Symbol(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Symbol, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Symbol, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Symbol(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Symbol
    __del__ = lambda self : None;
Symbol_swigregister = _quickfix.Symbol_swigregister
Symbol_swigregister(Symbol)

class TargetCompID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TargetCompID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TargetCompID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TargetCompID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TargetCompID
    __del__ = lambda self : None;
TargetCompID_swigregister = _quickfix.TargetCompID_swigregister
TargetCompID_swigregister(TargetCompID)

class TargetSubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TargetSubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TargetSubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TargetSubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TargetSubID
    __del__ = lambda self : None;
TargetSubID_swigregister = _quickfix.TargetSubID_swigregister
TargetSubID_swigregister(TargetSubID)

class Text(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Text, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Text, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Text(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Text
    __del__ = lambda self : None;
Text_swigregister = _quickfix.Text_swigregister
Text_swigregister(Text)

class TimeInForce(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TimeInForce, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TimeInForce, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TimeInForce(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TimeInForce
    __del__ = lambda self : None;
TimeInForce_swigregister = _quickfix.TimeInForce_swigregister
TimeInForce_swigregister(TimeInForce)

class TransactTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TransactTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TransactTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TransactTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TransactTime
    __del__ = lambda self : None;
TransactTime_swigregister = _quickfix.TransactTime_swigregister
TransactTime_swigregister(TransactTime)

class Urgency(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Urgency, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Urgency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Urgency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Urgency
    __del__ = lambda self : None;
Urgency_swigregister = _quickfix.Urgency_swigregister
Urgency_swigregister(Urgency)

class ValidUntilTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ValidUntilTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ValidUntilTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ValidUntilTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ValidUntilTime
    __del__ = lambda self : None;
ValidUntilTime_swigregister = _quickfix.ValidUntilTime_swigregister
ValidUntilTime_swigregister(ValidUntilTime)

class SettlType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlType
    __del__ = lambda self : None;
SettlType_swigregister = _quickfix.SettlType_swigregister
SettlType_swigregister(SettlType)

class SettlDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlDate
    __del__ = lambda self : None;
SettlDate_swigregister = _quickfix.SettlDate_swigregister
SettlDate_swigregister(SettlDate)

class SymbolSfx(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SymbolSfx, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SymbolSfx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SymbolSfx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SymbolSfx
    __del__ = lambda self : None;
SymbolSfx_swigregister = _quickfix.SymbolSfx_swigregister
SymbolSfx_swigregister(SymbolSfx)

class ListID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ListID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ListID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ListID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ListID
    __del__ = lambda self : None;
ListID_swigregister = _quickfix.ListID_swigregister
ListID_swigregister(ListID)

class ListSeqNo(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ListSeqNo, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ListSeqNo, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ListSeqNo(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ListSeqNo
    __del__ = lambda self : None;
ListSeqNo_swigregister = _quickfix.ListSeqNo_swigregister
ListSeqNo_swigregister(ListSeqNo)

class TotNoOrders(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotNoOrders, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotNoOrders, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotNoOrders(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotNoOrders
    __del__ = lambda self : None;
TotNoOrders_swigregister = _quickfix.TotNoOrders_swigregister
TotNoOrders_swigregister(TotNoOrders)

class ListNoOrds(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ListNoOrds, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ListNoOrds, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ListNoOrds(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ListNoOrds
    __del__ = lambda self : None;
ListNoOrds_swigregister = _quickfix.ListNoOrds_swigregister
ListNoOrds_swigregister(ListNoOrds)

class ListExecInst(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ListExecInst, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ListExecInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ListExecInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ListExecInst
    __del__ = lambda self : None;
ListExecInst_swigregister = _quickfix.ListExecInst_swigregister
ListExecInst_swigregister(ListExecInst)

class AllocID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocID
    __del__ = lambda self : None;
AllocID_swigregister = _quickfix.AllocID_swigregister
AllocID_swigregister(AllocID)

class AllocTransType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocTransType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocTransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocTransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocTransType
    __del__ = lambda self : None;
AllocTransType_swigregister = _quickfix.AllocTransType_swigregister
AllocTransType_swigregister(AllocTransType)

class RefAllocID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RefAllocID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RefAllocID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RefAllocID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RefAllocID
    __del__ = lambda self : None;
RefAllocID_swigregister = _quickfix.RefAllocID_swigregister
RefAllocID_swigregister(RefAllocID)

class NoOrders(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoOrders, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoOrders, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoOrders(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoOrders
    __del__ = lambda self : None;
NoOrders_swigregister = _quickfix.NoOrders_swigregister
NoOrders_swigregister(NoOrders)

class AvgPxPrecision(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AvgPxPrecision, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AvgPxPrecision, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AvgPxPrecision(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AvgPxPrecision
    __del__ = lambda self : None;
AvgPxPrecision_swigregister = _quickfix.AvgPxPrecision_swigregister
AvgPxPrecision_swigregister(AvgPxPrecision)

class TradeDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeDate
    __del__ = lambda self : None;
TradeDate_swigregister = _quickfix.TradeDate_swigregister
TradeDate_swigregister(TradeDate)

class PositionEffect(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PositionEffect, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PositionEffect, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PositionEffect(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PositionEffect
    __del__ = lambda self : None;
PositionEffect_swigregister = _quickfix.PositionEffect_swigregister
PositionEffect_swigregister(PositionEffect)

class NoAllocs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoAllocs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoAllocs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoAllocs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoAllocs
    __del__ = lambda self : None;
NoAllocs_swigregister = _quickfix.NoAllocs_swigregister
NoAllocs_swigregister(NoAllocs)

class AllocAccount(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocAccount, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocAccount, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocAccount(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocAccount
    __del__ = lambda self : None;
AllocAccount_swigregister = _quickfix.AllocAccount_swigregister
AllocAccount_swigregister(AllocAccount)

class AllocQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocQty
    __del__ = lambda self : None;
AllocQty_swigregister = _quickfix.AllocQty_swigregister
AllocQty_swigregister(AllocQty)

class ProcessCode(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ProcessCode, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ProcessCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ProcessCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ProcessCode
    __del__ = lambda self : None;
ProcessCode_swigregister = _quickfix.ProcessCode_swigregister
ProcessCode_swigregister(ProcessCode)

class NoRpts(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoRpts, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoRpts, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoRpts(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoRpts
    __del__ = lambda self : None;
NoRpts_swigregister = _quickfix.NoRpts_swigregister
NoRpts_swigregister(NoRpts)

class RptSeq(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RptSeq, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RptSeq, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RptSeq(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RptSeq
    __del__ = lambda self : None;
RptSeq_swigregister = _quickfix.RptSeq_swigregister
RptSeq_swigregister(RptSeq)

class CxlQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CxlQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CxlQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CxlQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CxlQty
    __del__ = lambda self : None;
CxlQty_swigregister = _quickfix.CxlQty_swigregister
CxlQty_swigregister(CxlQty)

class NoDlvyInst(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoDlvyInst, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoDlvyInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoDlvyInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoDlvyInst
    __del__ = lambda self : None;
NoDlvyInst_swigregister = _quickfix.NoDlvyInst_swigregister
NoDlvyInst_swigregister(NoDlvyInst)

class AllocStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocStatus
    __del__ = lambda self : None;
AllocStatus_swigregister = _quickfix.AllocStatus_swigregister
AllocStatus_swigregister(AllocStatus)

class AllocRejCode(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocRejCode, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocRejCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocRejCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocRejCode
    __del__ = lambda self : None;
AllocRejCode_swigregister = _quickfix.AllocRejCode_swigregister
AllocRejCode_swigregister(AllocRejCode)

class Signature(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Signature, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Signature, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Signature(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Signature
    __del__ = lambda self : None;
Signature_swigregister = _quickfix.Signature_swigregister
Signature_swigregister(Signature)

class SecureDataLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecureDataLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecureDataLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecureDataLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecureDataLen
    __del__ = lambda self : None;
SecureDataLen_swigregister = _quickfix.SecureDataLen_swigregister
SecureDataLen_swigregister(SecureDataLen)

class SecureData(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecureData, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecureData, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecureData(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecureData
    __del__ = lambda self : None;
SecureData_swigregister = _quickfix.SecureData_swigregister
SecureData_swigregister(SecureData)

class SignatureLength(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SignatureLength, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SignatureLength, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SignatureLength(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SignatureLength
    __del__ = lambda self : None;
SignatureLength_swigregister = _quickfix.SignatureLength_swigregister
SignatureLength_swigregister(SignatureLength)

class EmailType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EmailType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EmailType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EmailType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EmailType
    __del__ = lambda self : None;
EmailType_swigregister = _quickfix.EmailType_swigregister
EmailType_swigregister(EmailType)

class RawDataLength(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RawDataLength, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RawDataLength, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RawDataLength(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RawDataLength
    __del__ = lambda self : None;
RawDataLength_swigregister = _quickfix.RawDataLength_swigregister
RawDataLength_swigregister(RawDataLength)

class RawData(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RawData, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RawData, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RawData(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RawData
    __del__ = lambda self : None;
RawData_swigregister = _quickfix.RawData_swigregister
RawData_swigregister(RawData)

class PossResend(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PossResend, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PossResend, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PossResend(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PossResend
    __del__ = lambda self : None;
PossResend_swigregister = _quickfix.PossResend_swigregister
PossResend_swigregister(PossResend)

class EncryptMethod(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncryptMethod, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncryptMethod, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncryptMethod(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncryptMethod
    __del__ = lambda self : None;
EncryptMethod_swigregister = _quickfix.EncryptMethod_swigregister
EncryptMethod_swigregister(EncryptMethod)

class StopPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StopPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StopPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StopPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StopPx
    __del__ = lambda self : None;
StopPx_swigregister = _quickfix.StopPx_swigregister
StopPx_swigregister(StopPx)

class ExDestination(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExDestination, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExDestination, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExDestination(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExDestination
    __del__ = lambda self : None;
ExDestination_swigregister = _quickfix.ExDestination_swigregister
ExDestination_swigregister(ExDestination)

class CxlRejReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CxlRejReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CxlRejReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CxlRejReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CxlRejReason
    __del__ = lambda self : None;
CxlRejReason_swigregister = _quickfix.CxlRejReason_swigregister
CxlRejReason_swigregister(CxlRejReason)

class OrdRejReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrdRejReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrdRejReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrdRejReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrdRejReason
    __del__ = lambda self : None;
OrdRejReason_swigregister = _quickfix.OrdRejReason_swigregister
OrdRejReason_swigregister(OrdRejReason)

class IOIQualifier(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IOIQualifier, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IOIQualifier, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IOIQualifier(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IOIQualifier
    __del__ = lambda self : None;
IOIQualifier_swigregister = _quickfix.IOIQualifier_swigregister
IOIQualifier_swigregister(IOIQualifier)

class WaveNo(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, WaveNo, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, WaveNo, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_WaveNo(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_WaveNo
    __del__ = lambda self : None;
WaveNo_swigregister = _quickfix.WaveNo_swigregister
WaveNo_swigregister(WaveNo)

class Issuer(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Issuer, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Issuer, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Issuer(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Issuer
    __del__ = lambda self : None;
Issuer_swigregister = _quickfix.Issuer_swigregister
Issuer_swigregister(Issuer)

class SecurityDesc(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityDesc, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityDesc, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityDesc(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityDesc
    __del__ = lambda self : None;
SecurityDesc_swigregister = _quickfix.SecurityDesc_swigregister
SecurityDesc_swigregister(SecurityDesc)

class HeartBtInt(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, HeartBtInt, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, HeartBtInt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_HeartBtInt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_HeartBtInt
    __del__ = lambda self : None;
HeartBtInt_swigregister = _quickfix.HeartBtInt_swigregister
HeartBtInt_swigregister(HeartBtInt)

class MinQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MinQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MinQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MinQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MinQty
    __del__ = lambda self : None;
MinQty_swigregister = _quickfix.MinQty_swigregister
MinQty_swigregister(MinQty)

class MaxFloor(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MaxFloor, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MaxFloor, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MaxFloor(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MaxFloor
    __del__ = lambda self : None;
MaxFloor_swigregister = _quickfix.MaxFloor_swigregister
MaxFloor_swigregister(MaxFloor)

class TestReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TestReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TestReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TestReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TestReqID
    __del__ = lambda self : None;
TestReqID_swigregister = _quickfix.TestReqID_swigregister
TestReqID_swigregister(TestReqID)

class ReportToExch(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ReportToExch, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ReportToExch, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ReportToExch(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ReportToExch
    __del__ = lambda self : None;
ReportToExch_swigregister = _quickfix.ReportToExch_swigregister
ReportToExch_swigregister(ReportToExch)

class LocateReqd(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LocateReqd, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LocateReqd, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LocateReqd(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LocateReqd
    __del__ = lambda self : None;
LocateReqd_swigregister = _quickfix.LocateReqd_swigregister
LocateReqd_swigregister(LocateReqd)

class OnBehalfOfCompID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OnBehalfOfCompID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OnBehalfOfCompID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OnBehalfOfCompID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OnBehalfOfCompID
    __del__ = lambda self : None;
OnBehalfOfCompID_swigregister = _quickfix.OnBehalfOfCompID_swigregister
OnBehalfOfCompID_swigregister(OnBehalfOfCompID)

class OnBehalfOfSubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OnBehalfOfSubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OnBehalfOfSubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OnBehalfOfSubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OnBehalfOfSubID
    __del__ = lambda self : None;
OnBehalfOfSubID_swigregister = _quickfix.OnBehalfOfSubID_swigregister
OnBehalfOfSubID_swigregister(OnBehalfOfSubID)

class QuoteID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteID
    __del__ = lambda self : None;
QuoteID_swigregister = _quickfix.QuoteID_swigregister
QuoteID_swigregister(QuoteID)

class NetMoney(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NetMoney, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NetMoney, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NetMoney(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NetMoney
    __del__ = lambda self : None;
NetMoney_swigregister = _quickfix.NetMoney_swigregister
NetMoney_swigregister(NetMoney)

class SettlCurrAmt(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlCurrAmt, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlCurrAmt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlCurrAmt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlCurrAmt
    __del__ = lambda self : None;
SettlCurrAmt_swigregister = _quickfix.SettlCurrAmt_swigregister
SettlCurrAmt_swigregister(SettlCurrAmt)

class SettlCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlCurrency
    __del__ = lambda self : None;
SettlCurrency_swigregister = _quickfix.SettlCurrency_swigregister
SettlCurrency_swigregister(SettlCurrency)

class ForexReq(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ForexReq, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ForexReq, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ForexReq(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ForexReq
    __del__ = lambda self : None;
ForexReq_swigregister = _quickfix.ForexReq_swigregister
ForexReq_swigregister(ForexReq)

class OrigSendingTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrigSendingTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrigSendingTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrigSendingTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrigSendingTime
    __del__ = lambda self : None;
OrigSendingTime_swigregister = _quickfix.OrigSendingTime_swigregister
OrigSendingTime_swigregister(OrigSendingTime)

class GapFillFlag(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, GapFillFlag, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, GapFillFlag, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_GapFillFlag(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_GapFillFlag
    __del__ = lambda self : None;
GapFillFlag_swigregister = _quickfix.GapFillFlag_swigregister
GapFillFlag_swigregister(GapFillFlag)

class NoExecs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoExecs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoExecs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoExecs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoExecs
    __del__ = lambda self : None;
NoExecs_swigregister = _quickfix.NoExecs_swigregister
NoExecs_swigregister(NoExecs)

class ExpireTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExpireTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExpireTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExpireTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExpireTime
    __del__ = lambda self : None;
ExpireTime_swigregister = _quickfix.ExpireTime_swigregister
ExpireTime_swigregister(ExpireTime)

class DKReason(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DKReason, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DKReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DKReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DKReason
    __del__ = lambda self : None;
DKReason_swigregister = _quickfix.DKReason_swigregister
DKReason_swigregister(DKReason)

class DeliverToCompID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DeliverToCompID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DeliverToCompID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DeliverToCompID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DeliverToCompID
    __del__ = lambda self : None;
DeliverToCompID_swigregister = _quickfix.DeliverToCompID_swigregister
DeliverToCompID_swigregister(DeliverToCompID)

class DeliverToSubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DeliverToSubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DeliverToSubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DeliverToSubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DeliverToSubID
    __del__ = lambda self : None;
DeliverToSubID_swigregister = _quickfix.DeliverToSubID_swigregister
DeliverToSubID_swigregister(DeliverToSubID)

class IOINaturalFlag(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IOINaturalFlag, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IOINaturalFlag, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IOINaturalFlag(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IOINaturalFlag
    __del__ = lambda self : None;
IOINaturalFlag_swigregister = _quickfix.IOINaturalFlag_swigregister
IOINaturalFlag_swigregister(IOINaturalFlag)

class QuoteReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteReqID
    __del__ = lambda self : None;
QuoteReqID_swigregister = _quickfix.QuoteReqID_swigregister
QuoteReqID_swigregister(QuoteReqID)

class BidPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidPx
    __del__ = lambda self : None;
BidPx_swigregister = _quickfix.BidPx_swigregister
BidPx_swigregister(BidPx)

class OfferPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OfferPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OfferPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OfferPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OfferPx
    __del__ = lambda self : None;
OfferPx_swigregister = _quickfix.OfferPx_swigregister
OfferPx_swigregister(OfferPx)

class BidSize(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidSize, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidSize, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidSize(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidSize
    __del__ = lambda self : None;
BidSize_swigregister = _quickfix.BidSize_swigregister
BidSize_swigregister(BidSize)

class OfferSize(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OfferSize, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OfferSize, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OfferSize(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OfferSize
    __del__ = lambda self : None;
OfferSize_swigregister = _quickfix.OfferSize_swigregister
OfferSize_swigregister(OfferSize)

class NoMiscFees(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoMiscFees, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoMiscFees, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoMiscFees(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoMiscFees
    __del__ = lambda self : None;
NoMiscFees_swigregister = _quickfix.NoMiscFees_swigregister
NoMiscFees_swigregister(NoMiscFees)

class MiscFeeAmt(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MiscFeeAmt, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MiscFeeAmt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MiscFeeAmt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MiscFeeAmt
    __del__ = lambda self : None;
MiscFeeAmt_swigregister = _quickfix.MiscFeeAmt_swigregister
MiscFeeAmt_swigregister(MiscFeeAmt)

class MiscFeeCurr(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MiscFeeCurr, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MiscFeeCurr, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MiscFeeCurr(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MiscFeeCurr
    __del__ = lambda self : None;
MiscFeeCurr_swigregister = _quickfix.MiscFeeCurr_swigregister
MiscFeeCurr_swigregister(MiscFeeCurr)

class MiscFeeType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MiscFeeType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MiscFeeType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MiscFeeType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MiscFeeType
    __del__ = lambda self : None;
MiscFeeType_swigregister = _quickfix.MiscFeeType_swigregister
MiscFeeType_swigregister(MiscFeeType)

class PrevClosePx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PrevClosePx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PrevClosePx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PrevClosePx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PrevClosePx
    __del__ = lambda self : None;
PrevClosePx_swigregister = _quickfix.PrevClosePx_swigregister
PrevClosePx_swigregister(PrevClosePx)

class ResetSeqNumFlag(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ResetSeqNumFlag, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ResetSeqNumFlag, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ResetSeqNumFlag(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ResetSeqNumFlag
    __del__ = lambda self : None;
ResetSeqNumFlag_swigregister = _quickfix.ResetSeqNumFlag_swigregister
ResetSeqNumFlag_swigregister(ResetSeqNumFlag)

class SenderLocationID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SenderLocationID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SenderLocationID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SenderLocationID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SenderLocationID
    __del__ = lambda self : None;
SenderLocationID_swigregister = _quickfix.SenderLocationID_swigregister
SenderLocationID_swigregister(SenderLocationID)

class TargetLocationID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TargetLocationID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TargetLocationID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TargetLocationID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TargetLocationID
    __del__ = lambda self : None;
TargetLocationID_swigregister = _quickfix.TargetLocationID_swigregister
TargetLocationID_swigregister(TargetLocationID)

class OnBehalfOfLocationID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OnBehalfOfLocationID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OnBehalfOfLocationID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OnBehalfOfLocationID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OnBehalfOfLocationID
    __del__ = lambda self : None;
OnBehalfOfLocationID_swigregister = _quickfix.OnBehalfOfLocationID_swigregister
OnBehalfOfLocationID_swigregister(OnBehalfOfLocationID)

class DeliverToLocationID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DeliverToLocationID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DeliverToLocationID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DeliverToLocationID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DeliverToLocationID
    __del__ = lambda self : None;
DeliverToLocationID_swigregister = _quickfix.DeliverToLocationID_swigregister
DeliverToLocationID_swigregister(DeliverToLocationID)

class NoRelatedSym(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoRelatedSym, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoRelatedSym, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoRelatedSym(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoRelatedSym
    __del__ = lambda self : None;
NoRelatedSym_swigregister = _quickfix.NoRelatedSym_swigregister
NoRelatedSym_swigregister(NoRelatedSym)

class Subject(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Subject, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Subject, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Subject(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Subject
    __del__ = lambda self : None;
Subject_swigregister = _quickfix.Subject_swigregister
Subject_swigregister(Subject)

class Headline(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Headline, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Headline, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Headline(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Headline
    __del__ = lambda self : None;
Headline_swigregister = _quickfix.Headline_swigregister
Headline_swigregister(Headline)

class URLLink(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, URLLink, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, URLLink, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_URLLink(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_URLLink
    __del__ = lambda self : None;
URLLink_swigregister = _quickfix.URLLink_swigregister
URLLink_swigregister(URLLink)

class ExecType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExecType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExecType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExecType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExecType
    __del__ = lambda self : None;
ExecType_swigregister = _quickfix.ExecType_swigregister
ExecType_swigregister(ExecType)

class LeavesQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LeavesQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LeavesQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LeavesQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LeavesQty
    __del__ = lambda self : None;
LeavesQty_swigregister = _quickfix.LeavesQty_swigregister
LeavesQty_swigregister(LeavesQty)

class CashOrderQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashOrderQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashOrderQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashOrderQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashOrderQty
    __del__ = lambda self : None;
CashOrderQty_swigregister = _quickfix.CashOrderQty_swigregister
CashOrderQty_swigregister(CashOrderQty)

class AllocAvgPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocAvgPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocAvgPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocAvgPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocAvgPx
    __del__ = lambda self : None;
AllocAvgPx_swigregister = _quickfix.AllocAvgPx_swigregister
AllocAvgPx_swigregister(AllocAvgPx)

class AllocNetMoney(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocNetMoney, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocNetMoney, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocNetMoney(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocNetMoney
    __del__ = lambda self : None;
AllocNetMoney_swigregister = _quickfix.AllocNetMoney_swigregister
AllocNetMoney_swigregister(AllocNetMoney)

class SettlCurrFxRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlCurrFxRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlCurrFxRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlCurrFxRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlCurrFxRate
    __del__ = lambda self : None;
SettlCurrFxRate_swigregister = _quickfix.SettlCurrFxRate_swigregister
SettlCurrFxRate_swigregister(SettlCurrFxRate)

class SettlCurrFxRateCalc(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlCurrFxRateCalc, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlCurrFxRateCalc, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlCurrFxRateCalc(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlCurrFxRateCalc
    __del__ = lambda self : None;
SettlCurrFxRateCalc_swigregister = _quickfix.SettlCurrFxRateCalc_swigregister
SettlCurrFxRateCalc_swigregister(SettlCurrFxRateCalc)

class NumDaysInterest(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NumDaysInterest, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NumDaysInterest, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NumDaysInterest(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NumDaysInterest
    __del__ = lambda self : None;
NumDaysInterest_swigregister = _quickfix.NumDaysInterest_swigregister
NumDaysInterest_swigregister(NumDaysInterest)

class AccruedInterestRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AccruedInterestRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AccruedInterestRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AccruedInterestRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AccruedInterestRate
    __del__ = lambda self : None;
AccruedInterestRate_swigregister = _quickfix.AccruedInterestRate_swigregister
AccruedInterestRate_swigregister(AccruedInterestRate)

class AccruedInterestAmt(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AccruedInterestAmt, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AccruedInterestAmt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AccruedInterestAmt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AccruedInterestAmt
    __del__ = lambda self : None;
AccruedInterestAmt_swigregister = _quickfix.AccruedInterestAmt_swigregister
AccruedInterestAmt_swigregister(AccruedInterestAmt)

class SettlInstMode(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlInstMode, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlInstMode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlInstMode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlInstMode
    __del__ = lambda self : None;
SettlInstMode_swigregister = _quickfix.SettlInstMode_swigregister
SettlInstMode_swigregister(SettlInstMode)

class AllocText(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocText, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocText, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocText(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocText
    __del__ = lambda self : None;
AllocText_swigregister = _quickfix.AllocText_swigregister
AllocText_swigregister(AllocText)

class SettlInstID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlInstID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlInstID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlInstID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlInstID
    __del__ = lambda self : None;
SettlInstID_swigregister = _quickfix.SettlInstID_swigregister
SettlInstID_swigregister(SettlInstID)

class SettlInstTransType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlInstTransType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlInstTransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlInstTransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlInstTransType
    __del__ = lambda self : None;
SettlInstTransType_swigregister = _quickfix.SettlInstTransType_swigregister
SettlInstTransType_swigregister(SettlInstTransType)

class EmailThreadID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EmailThreadID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EmailThreadID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EmailThreadID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EmailThreadID
    __del__ = lambda self : None;
EmailThreadID_swigregister = _quickfix.EmailThreadID_swigregister
EmailThreadID_swigregister(EmailThreadID)

class SettlInstSource(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlInstSource, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlInstSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlInstSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlInstSource
    __del__ = lambda self : None;
SettlInstSource_swigregister = _quickfix.SettlInstSource_swigregister
SettlInstSource_swigregister(SettlInstSource)

class SecurityType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityType
    __del__ = lambda self : None;
SecurityType_swigregister = _quickfix.SecurityType_swigregister
SecurityType_swigregister(SecurityType)

class EffectiveTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EffectiveTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EffectiveTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EffectiveTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EffectiveTime
    __del__ = lambda self : None;
EffectiveTime_swigregister = _quickfix.EffectiveTime_swigregister
EffectiveTime_swigregister(EffectiveTime)

class StandInstDbType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StandInstDbType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StandInstDbType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StandInstDbType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StandInstDbType
    __del__ = lambda self : None;
StandInstDbType_swigregister = _quickfix.StandInstDbType_swigregister
StandInstDbType_swigregister(StandInstDbType)

class StandInstDbName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StandInstDbName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StandInstDbName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StandInstDbName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StandInstDbName
    __del__ = lambda self : None;
StandInstDbName_swigregister = _quickfix.StandInstDbName_swigregister
StandInstDbName_swigregister(StandInstDbName)

class StandInstDbID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StandInstDbID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StandInstDbID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StandInstDbID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StandInstDbID
    __del__ = lambda self : None;
StandInstDbID_swigregister = _quickfix.StandInstDbID_swigregister
StandInstDbID_swigregister(StandInstDbID)

class SettlDeliveryType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlDeliveryType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlDeliveryType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlDeliveryType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlDeliveryType
    __del__ = lambda self : None;
SettlDeliveryType_swigregister = _quickfix.SettlDeliveryType_swigregister
SettlDeliveryType_swigregister(SettlDeliveryType)

class BidSpotRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidSpotRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidSpotRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidSpotRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidSpotRate
    __del__ = lambda self : None;
BidSpotRate_swigregister = _quickfix.BidSpotRate_swigregister
BidSpotRate_swigregister(BidSpotRate)

class BidForwardPoints(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidForwardPoints, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidForwardPoints, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidForwardPoints(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidForwardPoints
    __del__ = lambda self : None;
BidForwardPoints_swigregister = _quickfix.BidForwardPoints_swigregister
BidForwardPoints_swigregister(BidForwardPoints)

class OfferSpotRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OfferSpotRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OfferSpotRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OfferSpotRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OfferSpotRate
    __del__ = lambda self : None;
OfferSpotRate_swigregister = _quickfix.OfferSpotRate_swigregister
OfferSpotRate_swigregister(OfferSpotRate)

class OfferForwardPoints(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OfferForwardPoints, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OfferForwardPoints, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OfferForwardPoints(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OfferForwardPoints
    __del__ = lambda self : None;
OfferForwardPoints_swigregister = _quickfix.OfferForwardPoints_swigregister
OfferForwardPoints_swigregister(OfferForwardPoints)

class OrderQty2(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrderQty2, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrderQty2, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrderQty2(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrderQty2
    __del__ = lambda self : None;
OrderQty2_swigregister = _quickfix.OrderQty2_swigregister
OrderQty2_swigregister(OrderQty2)

class SettlDate2(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlDate2, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlDate2, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlDate2(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlDate2
    __del__ = lambda self : None;
SettlDate2_swigregister = _quickfix.SettlDate2_swigregister
SettlDate2_swigregister(SettlDate2)

class LastSpotRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastSpotRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastSpotRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastSpotRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastSpotRate
    __del__ = lambda self : None;
LastSpotRate_swigregister = _quickfix.LastSpotRate_swigregister
LastSpotRate_swigregister(LastSpotRate)

class LastForwardPoints(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastForwardPoints, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastForwardPoints, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastForwardPoints(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastForwardPoints
    __del__ = lambda self : None;
LastForwardPoints_swigregister = _quickfix.LastForwardPoints_swigregister
LastForwardPoints_swigregister(LastForwardPoints)

class AllocLinkID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocLinkID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocLinkID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocLinkID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocLinkID
    __del__ = lambda self : None;
AllocLinkID_swigregister = _quickfix.AllocLinkID_swigregister
AllocLinkID_swigregister(AllocLinkID)

class AllocLinkType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocLinkType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocLinkType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocLinkType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocLinkType
    __del__ = lambda self : None;
AllocLinkType_swigregister = _quickfix.AllocLinkType_swigregister
AllocLinkType_swigregister(AllocLinkType)

class SecondaryOrderID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecondaryOrderID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecondaryOrderID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecondaryOrderID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecondaryOrderID
    __del__ = lambda self : None;
SecondaryOrderID_swigregister = _quickfix.SecondaryOrderID_swigregister
SecondaryOrderID_swigregister(SecondaryOrderID)

class NoIOIQualifiers(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoIOIQualifiers, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoIOIQualifiers, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoIOIQualifiers(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoIOIQualifiers
    __del__ = lambda self : None;
NoIOIQualifiers_swigregister = _quickfix.NoIOIQualifiers_swigregister
NoIOIQualifiers_swigregister(NoIOIQualifiers)

class MaturityMonthYear(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MaturityMonthYear, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MaturityMonthYear, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MaturityMonthYear(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MaturityMonthYear
    __del__ = lambda self : None;
MaturityMonthYear_swigregister = _quickfix.MaturityMonthYear_swigregister
MaturityMonthYear_swigregister(MaturityMonthYear)

class StrikePrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StrikePrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StrikePrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StrikePrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StrikePrice
    __del__ = lambda self : None;
StrikePrice_swigregister = _quickfix.StrikePrice_swigregister
StrikePrice_swigregister(StrikePrice)

class CoveredOrUncovered(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CoveredOrUncovered, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CoveredOrUncovered, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CoveredOrUncovered(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CoveredOrUncovered
    __del__ = lambda self : None;
CoveredOrUncovered_swigregister = _quickfix.CoveredOrUncovered_swigregister
CoveredOrUncovered_swigregister(CoveredOrUncovered)

class OptAttribute(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OptAttribute, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OptAttribute, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OptAttribute(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OptAttribute
    __del__ = lambda self : None;
OptAttribute_swigregister = _quickfix.OptAttribute_swigregister
OptAttribute_swigregister(OptAttribute)

class SecurityExchange(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityExchange, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityExchange, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityExchange(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityExchange
    __del__ = lambda self : None;
SecurityExchange_swigregister = _quickfix.SecurityExchange_swigregister
SecurityExchange_swigregister(SecurityExchange)

class NotifyBrokerOfCredit(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NotifyBrokerOfCredit, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NotifyBrokerOfCredit, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NotifyBrokerOfCredit(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NotifyBrokerOfCredit
    __del__ = lambda self : None;
NotifyBrokerOfCredit_swigregister = _quickfix.NotifyBrokerOfCredit_swigregister
NotifyBrokerOfCredit_swigregister(NotifyBrokerOfCredit)

class AllocHandlInst(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocHandlInst, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocHandlInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocHandlInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocHandlInst
    __del__ = lambda self : None;
AllocHandlInst_swigregister = _quickfix.AllocHandlInst_swigregister
AllocHandlInst_swigregister(AllocHandlInst)

class MaxShow(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MaxShow, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MaxShow, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MaxShow(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MaxShow
    __del__ = lambda self : None;
MaxShow_swigregister = _quickfix.MaxShow_swigregister
MaxShow_swigregister(MaxShow)

class PegOffsetValue(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PegOffsetValue, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PegOffsetValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PegOffsetValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PegOffsetValue
    __del__ = lambda self : None;
PegOffsetValue_swigregister = _quickfix.PegOffsetValue_swigregister
PegOffsetValue_swigregister(PegOffsetValue)

class XmlDataLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, XmlDataLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, XmlDataLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_XmlDataLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_XmlDataLen
    __del__ = lambda self : None;
XmlDataLen_swigregister = _quickfix.XmlDataLen_swigregister
XmlDataLen_swigregister(XmlDataLen)

class XmlData(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, XmlData, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, XmlData, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_XmlData(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_XmlData
    __del__ = lambda self : None;
XmlData_swigregister = _quickfix.XmlData_swigregister
XmlData_swigregister(XmlData)

class SettlInstRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlInstRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlInstRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlInstRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlInstRefID
    __del__ = lambda self : None;
SettlInstRefID_swigregister = _quickfix.SettlInstRefID_swigregister
SettlInstRefID_swigregister(SettlInstRefID)

class NoRoutingIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoRoutingIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoRoutingIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoRoutingIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoRoutingIDs
    __del__ = lambda self : None;
NoRoutingIDs_swigregister = _quickfix.NoRoutingIDs_swigregister
NoRoutingIDs_swigregister(NoRoutingIDs)

class RoutingType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RoutingType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RoutingType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RoutingType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RoutingType
    __del__ = lambda self : None;
RoutingType_swigregister = _quickfix.RoutingType_swigregister
RoutingType_swigregister(RoutingType)

class RoutingID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RoutingID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RoutingID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RoutingID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RoutingID
    __del__ = lambda self : None;
RoutingID_swigregister = _quickfix.RoutingID_swigregister
RoutingID_swigregister(RoutingID)

class Spread(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Spread, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Spread, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Spread(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Spread
    __del__ = lambda self : None;
Spread_swigregister = _quickfix.Spread_swigregister
Spread_swigregister(Spread)

class BenchmarkCurveCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BenchmarkCurveCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BenchmarkCurveCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BenchmarkCurveCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BenchmarkCurveCurrency
    __del__ = lambda self : None;
BenchmarkCurveCurrency_swigregister = _quickfix.BenchmarkCurveCurrency_swigregister
BenchmarkCurveCurrency_swigregister(BenchmarkCurveCurrency)

class BenchmarkCurveName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BenchmarkCurveName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BenchmarkCurveName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BenchmarkCurveName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BenchmarkCurveName
    __del__ = lambda self : None;
BenchmarkCurveName_swigregister = _quickfix.BenchmarkCurveName_swigregister
BenchmarkCurveName_swigregister(BenchmarkCurveName)

class BenchmarkCurvePoint(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BenchmarkCurvePoint, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BenchmarkCurvePoint, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BenchmarkCurvePoint(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BenchmarkCurvePoint
    __del__ = lambda self : None;
BenchmarkCurvePoint_swigregister = _quickfix.BenchmarkCurvePoint_swigregister
BenchmarkCurvePoint_swigregister(BenchmarkCurvePoint)

class CouponRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CouponRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CouponRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CouponRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CouponRate
    __del__ = lambda self : None;
CouponRate_swigregister = _quickfix.CouponRate_swigregister
CouponRate_swigregister(CouponRate)

class CouponPaymentDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CouponPaymentDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CouponPaymentDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CouponPaymentDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CouponPaymentDate
    __del__ = lambda self : None;
CouponPaymentDate_swigregister = _quickfix.CouponPaymentDate_swigregister
CouponPaymentDate_swigregister(CouponPaymentDate)

class IssueDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IssueDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IssueDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IssueDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IssueDate
    __del__ = lambda self : None;
IssueDate_swigregister = _quickfix.IssueDate_swigregister
IssueDate_swigregister(IssueDate)

class RepurchaseTerm(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RepurchaseTerm, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RepurchaseTerm, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RepurchaseTerm(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RepurchaseTerm
    __del__ = lambda self : None;
RepurchaseTerm_swigregister = _quickfix.RepurchaseTerm_swigregister
RepurchaseTerm_swigregister(RepurchaseTerm)

class RepurchaseRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RepurchaseRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RepurchaseRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RepurchaseRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RepurchaseRate
    __del__ = lambda self : None;
RepurchaseRate_swigregister = _quickfix.RepurchaseRate_swigregister
RepurchaseRate_swigregister(RepurchaseRate)

class Factor(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Factor, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Factor, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Factor(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Factor
    __del__ = lambda self : None;
Factor_swigregister = _quickfix.Factor_swigregister
Factor_swigregister(Factor)

class TradeOriginationDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeOriginationDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeOriginationDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeOriginationDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeOriginationDate
    __del__ = lambda self : None;
TradeOriginationDate_swigregister = _quickfix.TradeOriginationDate_swigregister
TradeOriginationDate_swigregister(TradeOriginationDate)

class ExDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExDate
    __del__ = lambda self : None;
ExDate_swigregister = _quickfix.ExDate_swigregister
ExDate_swigregister(ExDate)

class ContractMultiplier(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContractMultiplier, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContractMultiplier, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContractMultiplier(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContractMultiplier
    __del__ = lambda self : None;
ContractMultiplier_swigregister = _quickfix.ContractMultiplier_swigregister
ContractMultiplier_swigregister(ContractMultiplier)

class NoStipulations(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoStipulations, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoStipulations, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoStipulations(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoStipulations
    __del__ = lambda self : None;
NoStipulations_swigregister = _quickfix.NoStipulations_swigregister
NoStipulations_swigregister(NoStipulations)

class StipulationType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StipulationType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StipulationType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StipulationType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StipulationType
    __del__ = lambda self : None;
StipulationType_swigregister = _quickfix.StipulationType_swigregister
StipulationType_swigregister(StipulationType)

class StipulationValue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StipulationValue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StipulationValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StipulationValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StipulationValue
    __del__ = lambda self : None;
StipulationValue_swigregister = _quickfix.StipulationValue_swigregister
StipulationValue_swigregister(StipulationValue)

class YieldType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, YieldType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, YieldType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_YieldType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_YieldType
    __del__ = lambda self : None;
YieldType_swigregister = _quickfix.YieldType_swigregister
YieldType_swigregister(YieldType)

class Yield(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Yield, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Yield, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Yield(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Yield
    __del__ = lambda self : None;
Yield_swigregister = _quickfix.Yield_swigregister
Yield_swigregister(Yield)

class TotalTakedown(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotalTakedown, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotalTakedown, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotalTakedown(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotalTakedown
    __del__ = lambda self : None;
TotalTakedown_swigregister = _quickfix.TotalTakedown_swigregister
TotalTakedown_swigregister(TotalTakedown)

class Concession(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Concession, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Concession, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Concession(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Concession
    __del__ = lambda self : None;
Concession_swigregister = _quickfix.Concession_swigregister
Concession_swigregister(Concession)

class RepoCollateralSecurityType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RepoCollateralSecurityType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RepoCollateralSecurityType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RepoCollateralSecurityType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RepoCollateralSecurityType
    __del__ = lambda self : None;
RepoCollateralSecurityType_swigregister = _quickfix.RepoCollateralSecurityType_swigregister
RepoCollateralSecurityType_swigregister(RepoCollateralSecurityType)

class RedemptionDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RedemptionDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RedemptionDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RedemptionDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RedemptionDate
    __del__ = lambda self : None;
RedemptionDate_swigregister = _quickfix.RedemptionDate_swigregister
RedemptionDate_swigregister(RedemptionDate)

class UnderlyingCouponPaymentDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingCouponPaymentDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingCouponPaymentDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingCouponPaymentDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingCouponPaymentDate
    __del__ = lambda self : None;
UnderlyingCouponPaymentDate_swigregister = _quickfix.UnderlyingCouponPaymentDate_swigregister
UnderlyingCouponPaymentDate_swigregister(UnderlyingCouponPaymentDate)

class UnderlyingIssueDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingIssueDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingIssueDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingIssueDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingIssueDate
    __del__ = lambda self : None;
UnderlyingIssueDate_swigregister = _quickfix.UnderlyingIssueDate_swigregister
UnderlyingIssueDate_swigregister(UnderlyingIssueDate)

class UnderlyingRepoCollateralSecurityType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingRepoCollateralSecurityType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingRepoCollateralSecurityType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingRepoCollateralSecurityType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingRepoCollateralSecurityType
    __del__ = lambda self : None;
UnderlyingRepoCollateralSecurityType_swigregister = _quickfix.UnderlyingRepoCollateralSecurityType_swigregister
UnderlyingRepoCollateralSecurityType_swigregister(UnderlyingRepoCollateralSecurityType)

class UnderlyingRepurchaseTerm(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingRepurchaseTerm, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingRepurchaseTerm, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingRepurchaseTerm(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingRepurchaseTerm
    __del__ = lambda self : None;
UnderlyingRepurchaseTerm_swigregister = _quickfix.UnderlyingRepurchaseTerm_swigregister
UnderlyingRepurchaseTerm_swigregister(UnderlyingRepurchaseTerm)

class UnderlyingRepurchaseRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingRepurchaseRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingRepurchaseRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingRepurchaseRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingRepurchaseRate
    __del__ = lambda self : None;
UnderlyingRepurchaseRate_swigregister = _quickfix.UnderlyingRepurchaseRate_swigregister
UnderlyingRepurchaseRate_swigregister(UnderlyingRepurchaseRate)

class UnderlyingFactor(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingFactor, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingFactor, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingFactor(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingFactor
    __del__ = lambda self : None;
UnderlyingFactor_swigregister = _quickfix.UnderlyingFactor_swigregister
UnderlyingFactor_swigregister(UnderlyingFactor)

class UnderlyingRedemptionDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingRedemptionDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingRedemptionDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingRedemptionDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingRedemptionDate
    __del__ = lambda self : None;
UnderlyingRedemptionDate_swigregister = _quickfix.UnderlyingRedemptionDate_swigregister
UnderlyingRedemptionDate_swigregister(UnderlyingRedemptionDate)

class LegCouponPaymentDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegCouponPaymentDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegCouponPaymentDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegCouponPaymentDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegCouponPaymentDate
    __del__ = lambda self : None;
LegCouponPaymentDate_swigregister = _quickfix.LegCouponPaymentDate_swigregister
LegCouponPaymentDate_swigregister(LegCouponPaymentDate)

class LegIssueDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegIssueDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegIssueDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegIssueDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegIssueDate
    __del__ = lambda self : None;
LegIssueDate_swigregister = _quickfix.LegIssueDate_swigregister
LegIssueDate_swigregister(LegIssueDate)

class LegRepoCollateralSecurityType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegRepoCollateralSecurityType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegRepoCollateralSecurityType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegRepoCollateralSecurityType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegRepoCollateralSecurityType
    __del__ = lambda self : None;
LegRepoCollateralSecurityType_swigregister = _quickfix.LegRepoCollateralSecurityType_swigregister
LegRepoCollateralSecurityType_swigregister(LegRepoCollateralSecurityType)

class LegRepurchaseTerm(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegRepurchaseTerm, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegRepurchaseTerm, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegRepurchaseTerm(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegRepurchaseTerm
    __del__ = lambda self : None;
LegRepurchaseTerm_swigregister = _quickfix.LegRepurchaseTerm_swigregister
LegRepurchaseTerm_swigregister(LegRepurchaseTerm)

class LegRepurchaseRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegRepurchaseRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegRepurchaseRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegRepurchaseRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegRepurchaseRate
    __del__ = lambda self : None;
LegRepurchaseRate_swigregister = _quickfix.LegRepurchaseRate_swigregister
LegRepurchaseRate_swigregister(LegRepurchaseRate)

class LegFactor(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegFactor, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegFactor, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegFactor(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegFactor
    __del__ = lambda self : None;
LegFactor_swigregister = _quickfix.LegFactor_swigregister
LegFactor_swigregister(LegFactor)

class LegRedemptionDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegRedemptionDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegRedemptionDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegRedemptionDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegRedemptionDate
    __del__ = lambda self : None;
LegRedemptionDate_swigregister = _quickfix.LegRedemptionDate_swigregister
LegRedemptionDate_swigregister(LegRedemptionDate)

class CreditRating(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CreditRating, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CreditRating, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CreditRating(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CreditRating
    __del__ = lambda self : None;
CreditRating_swigregister = _quickfix.CreditRating_swigregister
CreditRating_swigregister(CreditRating)

class UnderlyingCreditRating(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingCreditRating, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingCreditRating, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingCreditRating(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingCreditRating
    __del__ = lambda self : None;
UnderlyingCreditRating_swigregister = _quickfix.UnderlyingCreditRating_swigregister
UnderlyingCreditRating_swigregister(UnderlyingCreditRating)

class LegCreditRating(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegCreditRating, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegCreditRating, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegCreditRating(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegCreditRating
    __del__ = lambda self : None;
LegCreditRating_swigregister = _quickfix.LegCreditRating_swigregister
LegCreditRating_swigregister(LegCreditRating)

class TradedFlatSwitch(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradedFlatSwitch, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradedFlatSwitch, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradedFlatSwitch(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradedFlatSwitch
    __del__ = lambda self : None;
TradedFlatSwitch_swigregister = _quickfix.TradedFlatSwitch_swigregister
TradedFlatSwitch_swigregister(TradedFlatSwitch)

class BasisFeatureDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BasisFeatureDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BasisFeatureDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BasisFeatureDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BasisFeatureDate
    __del__ = lambda self : None;
BasisFeatureDate_swigregister = _quickfix.BasisFeatureDate_swigregister
BasisFeatureDate_swigregister(BasisFeatureDate)

class BasisFeaturePrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BasisFeaturePrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BasisFeaturePrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BasisFeaturePrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BasisFeaturePrice
    __del__ = lambda self : None;
BasisFeaturePrice_swigregister = _quickfix.BasisFeaturePrice_swigregister
BasisFeaturePrice_swigregister(BasisFeaturePrice)

class MDReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDReqID
    __del__ = lambda self : None;
MDReqID_swigregister = _quickfix.MDReqID_swigregister
MDReqID_swigregister(MDReqID)

class SubscriptionRequestType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SubscriptionRequestType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SubscriptionRequestType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SubscriptionRequestType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SubscriptionRequestType
    __del__ = lambda self : None;
SubscriptionRequestType_swigregister = _quickfix.SubscriptionRequestType_swigregister
SubscriptionRequestType_swigregister(SubscriptionRequestType)

class MarketDepth(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MarketDepth, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MarketDepth, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MarketDepth(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MarketDepth
    __del__ = lambda self : None;
MarketDepth_swigregister = _quickfix.MarketDepth_swigregister
MarketDepth_swigregister(MarketDepth)

class MDUpdateType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDUpdateType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDUpdateType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDUpdateType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDUpdateType
    __del__ = lambda self : None;
MDUpdateType_swigregister = _quickfix.MDUpdateType_swigregister
MDUpdateType_swigregister(MDUpdateType)

class AggregatedBook(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AggregatedBook, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AggregatedBook, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AggregatedBook(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AggregatedBook
    __del__ = lambda self : None;
AggregatedBook_swigregister = _quickfix.AggregatedBook_swigregister
AggregatedBook_swigregister(AggregatedBook)

class NoMDEntryTypes(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoMDEntryTypes, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoMDEntryTypes, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoMDEntryTypes(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoMDEntryTypes
    __del__ = lambda self : None;
NoMDEntryTypes_swigregister = _quickfix.NoMDEntryTypes_swigregister
NoMDEntryTypes_swigregister(NoMDEntryTypes)

class NoMDEntries(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoMDEntries, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoMDEntries, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoMDEntries(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoMDEntries
    __del__ = lambda self : None;
NoMDEntries_swigregister = _quickfix.NoMDEntries_swigregister
NoMDEntries_swigregister(NoMDEntries)

class MDEntryType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntryType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntryType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntryType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntryType
    __del__ = lambda self : None;
MDEntryType_swigregister = _quickfix.MDEntryType_swigregister
MDEntryType_swigregister(MDEntryType)

class MDEntryPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntryPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntryPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntryPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntryPx
    __del__ = lambda self : None;
MDEntryPx_swigregister = _quickfix.MDEntryPx_swigregister
MDEntryPx_swigregister(MDEntryPx)

class MDEntrySize(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntrySize, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntrySize, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntrySize(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntrySize
    __del__ = lambda self : None;
MDEntrySize_swigregister = _quickfix.MDEntrySize_swigregister
MDEntrySize_swigregister(MDEntrySize)

class MDEntryDate(UtcDateField):
    __swig_setmethods__ = {}
    for _s in [UtcDateField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntryDate, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcDateField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntryDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntryDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntryDate
    __del__ = lambda self : None;
MDEntryDate_swigregister = _quickfix.MDEntryDate_swigregister
MDEntryDate_swigregister(MDEntryDate)

class MDEntryTime(UtcTimeOnlyField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeOnlyField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntryTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeOnlyField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntryTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntryTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntryTime
    __del__ = lambda self : None;
MDEntryTime_swigregister = _quickfix.MDEntryTime_swigregister
MDEntryTime_swigregister(MDEntryTime)

class TickDirection(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TickDirection, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TickDirection, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TickDirection(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TickDirection
    __del__ = lambda self : None;
TickDirection_swigregister = _quickfix.TickDirection_swigregister
TickDirection_swigregister(TickDirection)

class MDMkt(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDMkt, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDMkt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDMkt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDMkt
    __del__ = lambda self : None;
MDMkt_swigregister = _quickfix.MDMkt_swigregister
MDMkt_swigregister(MDMkt)

class QuoteCondition(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteCondition, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteCondition, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteCondition(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteCondition
    __del__ = lambda self : None;
QuoteCondition_swigregister = _quickfix.QuoteCondition_swigregister
QuoteCondition_swigregister(QuoteCondition)

class TradeCondition(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeCondition, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeCondition, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeCondition(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeCondition
    __del__ = lambda self : None;
TradeCondition_swigregister = _quickfix.TradeCondition_swigregister
TradeCondition_swigregister(TradeCondition)

class MDEntryID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntryID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntryID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntryID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntryID
    __del__ = lambda self : None;
MDEntryID_swigregister = _quickfix.MDEntryID_swigregister
MDEntryID_swigregister(MDEntryID)

class MDUpdateAction(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDUpdateAction, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDUpdateAction, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDUpdateAction(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDUpdateAction
    __del__ = lambda self : None;
MDUpdateAction_swigregister = _quickfix.MDUpdateAction_swigregister
MDUpdateAction_swigregister(MDUpdateAction)

class MDEntryRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntryRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntryRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntryRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntryRefID
    __del__ = lambda self : None;
MDEntryRefID_swigregister = _quickfix.MDEntryRefID_swigregister
MDEntryRefID_swigregister(MDEntryRefID)

class MDReqRejReason(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDReqRejReason, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDReqRejReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDReqRejReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDReqRejReason
    __del__ = lambda self : None;
MDReqRejReason_swigregister = _quickfix.MDReqRejReason_swigregister
MDReqRejReason_swigregister(MDReqRejReason)

class MDEntryOriginator(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntryOriginator, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntryOriginator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntryOriginator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntryOriginator
    __del__ = lambda self : None;
MDEntryOriginator_swigregister = _quickfix.MDEntryOriginator_swigregister
MDEntryOriginator_swigregister(MDEntryOriginator)

class LocationID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LocationID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LocationID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LocationID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LocationID
    __del__ = lambda self : None;
LocationID_swigregister = _quickfix.LocationID_swigregister
LocationID_swigregister(LocationID)

class DeskID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DeskID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DeskID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DeskID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DeskID
    __del__ = lambda self : None;
DeskID_swigregister = _quickfix.DeskID_swigregister
DeskID_swigregister(DeskID)

class DeleteReason(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DeleteReason, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DeleteReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DeleteReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DeleteReason
    __del__ = lambda self : None;
DeleteReason_swigregister = _quickfix.DeleteReason_swigregister
DeleteReason_swigregister(DeleteReason)

class OpenCloseSettlFlag(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OpenCloseSettlFlag, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OpenCloseSettlFlag, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OpenCloseSettlFlag(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OpenCloseSettlFlag
    __del__ = lambda self : None;
OpenCloseSettlFlag_swigregister = _quickfix.OpenCloseSettlFlag_swigregister
OpenCloseSettlFlag_swigregister(OpenCloseSettlFlag)

class SellerDays(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SellerDays, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SellerDays, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SellerDays(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SellerDays
    __del__ = lambda self : None;
SellerDays_swigregister = _quickfix.SellerDays_swigregister
SellerDays_swigregister(SellerDays)

class MDEntryBuyer(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntryBuyer, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntryBuyer, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntryBuyer(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntryBuyer
    __del__ = lambda self : None;
MDEntryBuyer_swigregister = _quickfix.MDEntryBuyer_swigregister
MDEntryBuyer_swigregister(MDEntryBuyer)

class MDEntrySeller(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntrySeller, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntrySeller, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntrySeller(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntrySeller
    __del__ = lambda self : None;
MDEntrySeller_swigregister = _quickfix.MDEntrySeller_swigregister
MDEntrySeller_swigregister(MDEntrySeller)

class MDEntryPositionNo(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDEntryPositionNo, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDEntryPositionNo, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDEntryPositionNo(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDEntryPositionNo
    __del__ = lambda self : None;
MDEntryPositionNo_swigregister = _quickfix.MDEntryPositionNo_swigregister
MDEntryPositionNo_swigregister(MDEntryPositionNo)

class FinancialStatus(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FinancialStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FinancialStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FinancialStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_FinancialStatus
    __del__ = lambda self : None;
FinancialStatus_swigregister = _quickfix.FinancialStatus_swigregister
FinancialStatus_swigregister(FinancialStatus)

class CorporateAction(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CorporateAction, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CorporateAction, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CorporateAction(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CorporateAction
    __del__ = lambda self : None;
CorporateAction_swigregister = _quickfix.CorporateAction_swigregister
CorporateAction_swigregister(CorporateAction)

class DefBidSize(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DefBidSize, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DefBidSize, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DefBidSize(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DefBidSize
    __del__ = lambda self : None;
DefBidSize_swigregister = _quickfix.DefBidSize_swigregister
DefBidSize_swigregister(DefBidSize)

class DefOfferSize(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DefOfferSize, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DefOfferSize, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DefOfferSize(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DefOfferSize
    __del__ = lambda self : None;
DefOfferSize_swigregister = _quickfix.DefOfferSize_swigregister
DefOfferSize_swigregister(DefOfferSize)

class NoQuoteEntries(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoQuoteEntries, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoQuoteEntries, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoQuoteEntries(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoQuoteEntries
    __del__ = lambda self : None;
NoQuoteEntries_swigregister = _quickfix.NoQuoteEntries_swigregister
NoQuoteEntries_swigregister(NoQuoteEntries)

class NoQuoteSets(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoQuoteSets, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoQuoteSets, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoQuoteSets(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoQuoteSets
    __del__ = lambda self : None;
NoQuoteSets_swigregister = _quickfix.NoQuoteSets_swigregister
NoQuoteSets_swigregister(NoQuoteSets)

class QuoteStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteStatus
    __del__ = lambda self : None;
QuoteStatus_swigregister = _quickfix.QuoteStatus_swigregister
QuoteStatus_swigregister(QuoteStatus)

class QuoteCancelType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteCancelType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteCancelType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteCancelType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteCancelType
    __del__ = lambda self : None;
QuoteCancelType_swigregister = _quickfix.QuoteCancelType_swigregister
QuoteCancelType_swigregister(QuoteCancelType)

class QuoteEntryID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteEntryID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteEntryID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteEntryID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteEntryID
    __del__ = lambda self : None;
QuoteEntryID_swigregister = _quickfix.QuoteEntryID_swigregister
QuoteEntryID_swigregister(QuoteEntryID)

class QuoteRejectReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteRejectReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteRejectReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteRejectReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteRejectReason
    __del__ = lambda self : None;
QuoteRejectReason_swigregister = _quickfix.QuoteRejectReason_swigregister
QuoteRejectReason_swigregister(QuoteRejectReason)

class QuoteResponseLevel(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteResponseLevel, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteResponseLevel, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteResponseLevel(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteResponseLevel
    __del__ = lambda self : None;
QuoteResponseLevel_swigregister = _quickfix.QuoteResponseLevel_swigregister
QuoteResponseLevel_swigregister(QuoteResponseLevel)

class QuoteSetID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteSetID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteSetID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteSetID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteSetID
    __del__ = lambda self : None;
QuoteSetID_swigregister = _quickfix.QuoteSetID_swigregister
QuoteSetID_swigregister(QuoteSetID)

class QuoteRequestType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteRequestType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteRequestType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteRequestType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteRequestType
    __del__ = lambda self : None;
QuoteRequestType_swigregister = _quickfix.QuoteRequestType_swigregister
QuoteRequestType_swigregister(QuoteRequestType)

class TotNoQuoteEntries(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotNoQuoteEntries, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotNoQuoteEntries, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotNoQuoteEntries(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotNoQuoteEntries
    __del__ = lambda self : None;
TotNoQuoteEntries_swigregister = _quickfix.TotNoQuoteEntries_swigregister
TotNoQuoteEntries_swigregister(TotNoQuoteEntries)

class UnderlyingSecurityIDSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSecurityIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSecurityIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSecurityIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSecurityIDSource
    __del__ = lambda self : None;
UnderlyingSecurityIDSource_swigregister = _quickfix.UnderlyingSecurityIDSource_swigregister
UnderlyingSecurityIDSource_swigregister(UnderlyingSecurityIDSource)

class UnderlyingIssuer(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingIssuer, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingIssuer, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingIssuer(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingIssuer
    __del__ = lambda self : None;
UnderlyingIssuer_swigregister = _quickfix.UnderlyingIssuer_swigregister
UnderlyingIssuer_swigregister(UnderlyingIssuer)

class UnderlyingSecurityDesc(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSecurityDesc, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSecurityDesc, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSecurityDesc(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSecurityDesc
    __del__ = lambda self : None;
UnderlyingSecurityDesc_swigregister = _quickfix.UnderlyingSecurityDesc_swigregister
UnderlyingSecurityDesc_swigregister(UnderlyingSecurityDesc)

class UnderlyingSecurityExchange(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSecurityExchange, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSecurityExchange, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSecurityExchange(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSecurityExchange
    __del__ = lambda self : None;
UnderlyingSecurityExchange_swigregister = _quickfix.UnderlyingSecurityExchange_swigregister
UnderlyingSecurityExchange_swigregister(UnderlyingSecurityExchange)

class UnderlyingSecurityID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSecurityID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSecurityID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSecurityID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSecurityID
    __del__ = lambda self : None;
UnderlyingSecurityID_swigregister = _quickfix.UnderlyingSecurityID_swigregister
UnderlyingSecurityID_swigregister(UnderlyingSecurityID)

class UnderlyingSecurityType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSecurityType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSecurityType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSecurityType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSecurityType
    __del__ = lambda self : None;
UnderlyingSecurityType_swigregister = _quickfix.UnderlyingSecurityType_swigregister
UnderlyingSecurityType_swigregister(UnderlyingSecurityType)

class UnderlyingSymbol(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSymbol, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSymbol, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSymbol(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSymbol
    __del__ = lambda self : None;
UnderlyingSymbol_swigregister = _quickfix.UnderlyingSymbol_swigregister
UnderlyingSymbol_swigregister(UnderlyingSymbol)

class UnderlyingSymbolSfx(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSymbolSfx, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSymbolSfx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSymbolSfx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSymbolSfx
    __del__ = lambda self : None;
UnderlyingSymbolSfx_swigregister = _quickfix.UnderlyingSymbolSfx_swigregister
UnderlyingSymbolSfx_swigregister(UnderlyingSymbolSfx)

class UnderlyingMaturityMonthYear(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingMaturityMonthYear, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingMaturityMonthYear, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingMaturityMonthYear(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingMaturityMonthYear
    __del__ = lambda self : None;
UnderlyingMaturityMonthYear_swigregister = _quickfix.UnderlyingMaturityMonthYear_swigregister
UnderlyingMaturityMonthYear_swigregister(UnderlyingMaturityMonthYear)

class UnderlyingStrikePrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingStrikePrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingStrikePrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingStrikePrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingStrikePrice
    __del__ = lambda self : None;
UnderlyingStrikePrice_swigregister = _quickfix.UnderlyingStrikePrice_swigregister
UnderlyingStrikePrice_swigregister(UnderlyingStrikePrice)

class UnderlyingOptAttribute(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingOptAttribute, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingOptAttribute, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingOptAttribute(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingOptAttribute
    __del__ = lambda self : None;
UnderlyingOptAttribute_swigregister = _quickfix.UnderlyingOptAttribute_swigregister
UnderlyingOptAttribute_swigregister(UnderlyingOptAttribute)

class UnderlyingCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingCurrency
    __del__ = lambda self : None;
UnderlyingCurrency_swigregister = _quickfix.UnderlyingCurrency_swigregister
UnderlyingCurrency_swigregister(UnderlyingCurrency)

class SecurityReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityReqID
    __del__ = lambda self : None;
SecurityReqID_swigregister = _quickfix.SecurityReqID_swigregister
SecurityReqID_swigregister(SecurityReqID)

class SecurityRequestType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityRequestType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityRequestType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityRequestType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityRequestType
    __del__ = lambda self : None;
SecurityRequestType_swigregister = _quickfix.SecurityRequestType_swigregister
SecurityRequestType_swigregister(SecurityRequestType)

class SecurityResponseID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityResponseID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityResponseID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityResponseID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityResponseID
    __del__ = lambda self : None;
SecurityResponseID_swigregister = _quickfix.SecurityResponseID_swigregister
SecurityResponseID_swigregister(SecurityResponseID)

class SecurityResponseType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityResponseType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityResponseType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityResponseType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityResponseType
    __del__ = lambda self : None;
SecurityResponseType_swigregister = _quickfix.SecurityResponseType_swigregister
SecurityResponseType_swigregister(SecurityResponseType)

class SecurityStatusReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityStatusReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityStatusReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityStatusReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityStatusReqID
    __del__ = lambda self : None;
SecurityStatusReqID_swigregister = _quickfix.SecurityStatusReqID_swigregister
SecurityStatusReqID_swigregister(SecurityStatusReqID)

class UnsolicitedIndicator(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnsolicitedIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnsolicitedIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnsolicitedIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnsolicitedIndicator
    __del__ = lambda self : None;
UnsolicitedIndicator_swigregister = _quickfix.UnsolicitedIndicator_swigregister
UnsolicitedIndicator_swigregister(UnsolicitedIndicator)

class SecurityTradingStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityTradingStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityTradingStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityTradingStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityTradingStatus
    __del__ = lambda self : None;
SecurityTradingStatus_swigregister = _quickfix.SecurityTradingStatus_swigregister
SecurityTradingStatus_swigregister(SecurityTradingStatus)

class HaltReason(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, HaltReason, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, HaltReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_HaltReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_HaltReason
    __del__ = lambda self : None;
HaltReason_swigregister = _quickfix.HaltReason_swigregister
HaltReason_swigregister(HaltReason)

class InViewOfCommon(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, InViewOfCommon, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, InViewOfCommon, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_InViewOfCommon(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_InViewOfCommon
    __del__ = lambda self : None;
InViewOfCommon_swigregister = _quickfix.InViewOfCommon_swigregister
InViewOfCommon_swigregister(InViewOfCommon)

class DueToRelated(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DueToRelated, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DueToRelated, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DueToRelated(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DueToRelated
    __del__ = lambda self : None;
DueToRelated_swigregister = _quickfix.DueToRelated_swigregister
DueToRelated_swigregister(DueToRelated)

class BuyVolume(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BuyVolume, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BuyVolume, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BuyVolume(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BuyVolume
    __del__ = lambda self : None;
BuyVolume_swigregister = _quickfix.BuyVolume_swigregister
BuyVolume_swigregister(BuyVolume)

class SellVolume(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SellVolume, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SellVolume, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SellVolume(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SellVolume
    __del__ = lambda self : None;
SellVolume_swigregister = _quickfix.SellVolume_swigregister
SellVolume_swigregister(SellVolume)

class HighPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, HighPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, HighPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_HighPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_HighPx
    __del__ = lambda self : None;
HighPx_swigregister = _quickfix.HighPx_swigregister
HighPx_swigregister(HighPx)

class LowPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LowPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LowPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LowPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LowPx
    __del__ = lambda self : None;
LowPx_swigregister = _quickfix.LowPx_swigregister
LowPx_swigregister(LowPx)

class Adjustment(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Adjustment, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Adjustment, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Adjustment(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Adjustment
    __del__ = lambda self : None;
Adjustment_swigregister = _quickfix.Adjustment_swigregister
Adjustment_swigregister(Adjustment)

class TradSesReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradSesReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradSesReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradSesReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradSesReqID
    __del__ = lambda self : None;
TradSesReqID_swigregister = _quickfix.TradSesReqID_swigregister
TradSesReqID_swigregister(TradSesReqID)

class TradingSessionID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradingSessionID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradingSessionID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradingSessionID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradingSessionID
    __del__ = lambda self : None;
TradingSessionID_swigregister = _quickfix.TradingSessionID_swigregister
TradingSessionID_swigregister(TradingSessionID)

class ContraTrader(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContraTrader, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContraTrader, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContraTrader(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContraTrader
    __del__ = lambda self : None;
ContraTrader_swigregister = _quickfix.ContraTrader_swigregister
ContraTrader_swigregister(ContraTrader)

class TradSesMethod(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradSesMethod, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradSesMethod, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradSesMethod(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradSesMethod
    __del__ = lambda self : None;
TradSesMethod_swigregister = _quickfix.TradSesMethod_swigregister
TradSesMethod_swigregister(TradSesMethod)

class TradSesMode(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradSesMode, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradSesMode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradSesMode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradSesMode
    __del__ = lambda self : None;
TradSesMode_swigregister = _quickfix.TradSesMode_swigregister
TradSesMode_swigregister(TradSesMode)

class TradSesStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradSesStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradSesStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradSesStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradSesStatus
    __del__ = lambda self : None;
TradSesStatus_swigregister = _quickfix.TradSesStatus_swigregister
TradSesStatus_swigregister(TradSesStatus)

class TradSesStartTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradSesStartTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradSesStartTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradSesStartTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradSesStartTime
    __del__ = lambda self : None;
TradSesStartTime_swigregister = _quickfix.TradSesStartTime_swigregister
TradSesStartTime_swigregister(TradSesStartTime)

class TradSesOpenTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradSesOpenTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradSesOpenTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradSesOpenTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradSesOpenTime
    __del__ = lambda self : None;
TradSesOpenTime_swigregister = _quickfix.TradSesOpenTime_swigregister
TradSesOpenTime_swigregister(TradSesOpenTime)

class TradSesPreCloseTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradSesPreCloseTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradSesPreCloseTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradSesPreCloseTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradSesPreCloseTime
    __del__ = lambda self : None;
TradSesPreCloseTime_swigregister = _quickfix.TradSesPreCloseTime_swigregister
TradSesPreCloseTime_swigregister(TradSesPreCloseTime)

class TradSesCloseTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradSesCloseTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradSesCloseTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradSesCloseTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradSesCloseTime
    __del__ = lambda self : None;
TradSesCloseTime_swigregister = _quickfix.TradSesCloseTime_swigregister
TradSesCloseTime_swigregister(TradSesCloseTime)

class TradSesEndTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradSesEndTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradSesEndTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradSesEndTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradSesEndTime
    __del__ = lambda self : None;
TradSesEndTime_swigregister = _quickfix.TradSesEndTime_swigregister
TradSesEndTime_swigregister(TradSesEndTime)

class NumberOfOrders(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NumberOfOrders, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NumberOfOrders, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NumberOfOrders(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NumberOfOrders
    __del__ = lambda self : None;
NumberOfOrders_swigregister = _quickfix.NumberOfOrders_swigregister
NumberOfOrders_swigregister(NumberOfOrders)

class MessageEncoding(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MessageEncoding, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MessageEncoding, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MessageEncoding(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MessageEncoding
    __del__ = lambda self : None;
MessageEncoding_swigregister = _quickfix.MessageEncoding_swigregister
MessageEncoding_swigregister(MessageEncoding)

class EncodedIssuerLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedIssuerLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedIssuerLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedIssuerLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedIssuerLen
    __del__ = lambda self : None;
EncodedIssuerLen_swigregister = _quickfix.EncodedIssuerLen_swigregister
EncodedIssuerLen_swigregister(EncodedIssuerLen)

class EncodedIssuer(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedIssuer, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedIssuer, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedIssuer(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedIssuer
    __del__ = lambda self : None;
EncodedIssuer_swigregister = _quickfix.EncodedIssuer_swigregister
EncodedIssuer_swigregister(EncodedIssuer)

class EncodedSecurityDescLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedSecurityDescLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedSecurityDescLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedSecurityDescLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedSecurityDescLen
    __del__ = lambda self : None;
EncodedSecurityDescLen_swigregister = _quickfix.EncodedSecurityDescLen_swigregister
EncodedSecurityDescLen_swigregister(EncodedSecurityDescLen)

class EncodedSecurityDesc(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedSecurityDesc, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedSecurityDesc, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedSecurityDesc(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedSecurityDesc
    __del__ = lambda self : None;
EncodedSecurityDesc_swigregister = _quickfix.EncodedSecurityDesc_swigregister
EncodedSecurityDesc_swigregister(EncodedSecurityDesc)

class EncodedListExecInstLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedListExecInstLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedListExecInstLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedListExecInstLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedListExecInstLen
    __del__ = lambda self : None;
EncodedListExecInstLen_swigregister = _quickfix.EncodedListExecInstLen_swigregister
EncodedListExecInstLen_swigregister(EncodedListExecInstLen)

class EncodedListExecInst(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedListExecInst, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedListExecInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedListExecInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedListExecInst
    __del__ = lambda self : None;
EncodedListExecInst_swigregister = _quickfix.EncodedListExecInst_swigregister
EncodedListExecInst_swigregister(EncodedListExecInst)

class EncodedTextLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedTextLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedTextLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedTextLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedTextLen
    __del__ = lambda self : None;
EncodedTextLen_swigregister = _quickfix.EncodedTextLen_swigregister
EncodedTextLen_swigregister(EncodedTextLen)

class EncodedText(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedText, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedText, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedText(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedText
    __del__ = lambda self : None;
EncodedText_swigregister = _quickfix.EncodedText_swigregister
EncodedText_swigregister(EncodedText)

class EncodedSubjectLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedSubjectLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedSubjectLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedSubjectLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedSubjectLen
    __del__ = lambda self : None;
EncodedSubjectLen_swigregister = _quickfix.EncodedSubjectLen_swigregister
EncodedSubjectLen_swigregister(EncodedSubjectLen)

class EncodedSubject(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedSubject, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedSubject, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedSubject(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedSubject
    __del__ = lambda self : None;
EncodedSubject_swigregister = _quickfix.EncodedSubject_swigregister
EncodedSubject_swigregister(EncodedSubject)

class EncodedHeadlineLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedHeadlineLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedHeadlineLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedHeadlineLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedHeadlineLen
    __del__ = lambda self : None;
EncodedHeadlineLen_swigregister = _quickfix.EncodedHeadlineLen_swigregister
EncodedHeadlineLen_swigregister(EncodedHeadlineLen)

class EncodedHeadline(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedHeadline, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedHeadline, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedHeadline(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedHeadline
    __del__ = lambda self : None;
EncodedHeadline_swigregister = _quickfix.EncodedHeadline_swigregister
EncodedHeadline_swigregister(EncodedHeadline)

class EncodedAllocTextLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedAllocTextLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedAllocTextLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedAllocTextLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedAllocTextLen
    __del__ = lambda self : None;
EncodedAllocTextLen_swigregister = _quickfix.EncodedAllocTextLen_swigregister
EncodedAllocTextLen_swigregister(EncodedAllocTextLen)

class EncodedAllocText(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedAllocText, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedAllocText, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedAllocText(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedAllocText
    __del__ = lambda self : None;
EncodedAllocText_swigregister = _quickfix.EncodedAllocText_swigregister
EncodedAllocText_swigregister(EncodedAllocText)

class EncodedUnderlyingIssuerLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedUnderlyingIssuerLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedUnderlyingIssuerLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedUnderlyingIssuerLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedUnderlyingIssuerLen
    __del__ = lambda self : None;
EncodedUnderlyingIssuerLen_swigregister = _quickfix.EncodedUnderlyingIssuerLen_swigregister
EncodedUnderlyingIssuerLen_swigregister(EncodedUnderlyingIssuerLen)

class EncodedUnderlyingIssuer(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedUnderlyingIssuer, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedUnderlyingIssuer, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedUnderlyingIssuer(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedUnderlyingIssuer
    __del__ = lambda self : None;
EncodedUnderlyingIssuer_swigregister = _quickfix.EncodedUnderlyingIssuer_swigregister
EncodedUnderlyingIssuer_swigregister(EncodedUnderlyingIssuer)

class EncodedUnderlyingSecurityDescLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedUnderlyingSecurityDescLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedUnderlyingSecurityDescLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedUnderlyingSecurityDescLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedUnderlyingSecurityDescLen
    __del__ = lambda self : None;
EncodedUnderlyingSecurityDescLen_swigregister = _quickfix.EncodedUnderlyingSecurityDescLen_swigregister
EncodedUnderlyingSecurityDescLen_swigregister(EncodedUnderlyingSecurityDescLen)

class EncodedUnderlyingSecurityDesc(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedUnderlyingSecurityDesc, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedUnderlyingSecurityDesc, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedUnderlyingSecurityDesc(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedUnderlyingSecurityDesc
    __del__ = lambda self : None;
EncodedUnderlyingSecurityDesc_swigregister = _quickfix.EncodedUnderlyingSecurityDesc_swigregister
EncodedUnderlyingSecurityDesc_swigregister(EncodedUnderlyingSecurityDesc)

class AllocPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocPrice
    __del__ = lambda self : None;
AllocPrice_swigregister = _quickfix.AllocPrice_swigregister
AllocPrice_swigregister(AllocPrice)

class QuoteSetValidUntilTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteSetValidUntilTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteSetValidUntilTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteSetValidUntilTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteSetValidUntilTime
    __del__ = lambda self : None;
QuoteSetValidUntilTime_swigregister = _quickfix.QuoteSetValidUntilTime_swigregister
QuoteSetValidUntilTime_swigregister(QuoteSetValidUntilTime)

class QuoteEntryRejectReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteEntryRejectReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteEntryRejectReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteEntryRejectReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteEntryRejectReason
    __del__ = lambda self : None;
QuoteEntryRejectReason_swigregister = _quickfix.QuoteEntryRejectReason_swigregister
QuoteEntryRejectReason_swigregister(QuoteEntryRejectReason)

class LastMsgSeqNumProcessed(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastMsgSeqNumProcessed, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastMsgSeqNumProcessed, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastMsgSeqNumProcessed(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastMsgSeqNumProcessed
    __del__ = lambda self : None;
LastMsgSeqNumProcessed_swigregister = _quickfix.LastMsgSeqNumProcessed_swigregister
LastMsgSeqNumProcessed_swigregister(LastMsgSeqNumProcessed)

class RefTagID(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RefTagID, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RefTagID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RefTagID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RefTagID
    __del__ = lambda self : None;
RefTagID_swigregister = _quickfix.RefTagID_swigregister
RefTagID_swigregister(RefTagID)

class RefMsgType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RefMsgType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RefMsgType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RefMsgType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RefMsgType
    __del__ = lambda self : None;
RefMsgType_swigregister = _quickfix.RefMsgType_swigregister
RefMsgType_swigregister(RefMsgType)

class SessionRejectReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SessionRejectReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SessionRejectReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SessionRejectReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SessionRejectReason
    __del__ = lambda self : None;
SessionRejectReason_swigregister = _quickfix.SessionRejectReason_swigregister
SessionRejectReason_swigregister(SessionRejectReason)

class BidRequestTransType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidRequestTransType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidRequestTransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidRequestTransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidRequestTransType
    __del__ = lambda self : None;
BidRequestTransType_swigregister = _quickfix.BidRequestTransType_swigregister
BidRequestTransType_swigregister(BidRequestTransType)

class ContraBroker(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContraBroker, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContraBroker, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContraBroker(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContraBroker
    __del__ = lambda self : None;
ContraBroker_swigregister = _quickfix.ContraBroker_swigregister
ContraBroker_swigregister(ContraBroker)

class ComplianceID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ComplianceID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ComplianceID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ComplianceID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ComplianceID
    __del__ = lambda self : None;
ComplianceID_swigregister = _quickfix.ComplianceID_swigregister
ComplianceID_swigregister(ComplianceID)

class SolicitedFlag(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SolicitedFlag, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SolicitedFlag, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SolicitedFlag(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SolicitedFlag
    __del__ = lambda self : None;
SolicitedFlag_swigregister = _quickfix.SolicitedFlag_swigregister
SolicitedFlag_swigregister(SolicitedFlag)

class ExecRestatementReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExecRestatementReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExecRestatementReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExecRestatementReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExecRestatementReason
    __del__ = lambda self : None;
ExecRestatementReason_swigregister = _quickfix.ExecRestatementReason_swigregister
ExecRestatementReason_swigregister(ExecRestatementReason)

class BusinessRejectRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BusinessRejectRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BusinessRejectRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BusinessRejectRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BusinessRejectRefID
    __del__ = lambda self : None;
BusinessRejectRefID_swigregister = _quickfix.BusinessRejectRefID_swigregister
BusinessRejectRefID_swigregister(BusinessRejectRefID)

class BusinessRejectReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BusinessRejectReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BusinessRejectReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BusinessRejectReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BusinessRejectReason
    __del__ = lambda self : None;
BusinessRejectReason_swigregister = _quickfix.BusinessRejectReason_swigregister
BusinessRejectReason_swigregister(BusinessRejectReason)

class GrossTradeAmt(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, GrossTradeAmt, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, GrossTradeAmt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_GrossTradeAmt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_GrossTradeAmt
    __del__ = lambda self : None;
GrossTradeAmt_swigregister = _quickfix.GrossTradeAmt_swigregister
GrossTradeAmt_swigregister(GrossTradeAmt)

class NoContraBrokers(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoContraBrokers, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoContraBrokers, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoContraBrokers(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoContraBrokers
    __del__ = lambda self : None;
NoContraBrokers_swigregister = _quickfix.NoContraBrokers_swigregister
NoContraBrokers_swigregister(NoContraBrokers)

class MaxMessageSize(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MaxMessageSize, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MaxMessageSize, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MaxMessageSize(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MaxMessageSize
    __del__ = lambda self : None;
MaxMessageSize_swigregister = _quickfix.MaxMessageSize_swigregister
MaxMessageSize_swigregister(MaxMessageSize)

class NoMsgTypes(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoMsgTypes, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoMsgTypes, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoMsgTypes(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoMsgTypes
    __del__ = lambda self : None;
NoMsgTypes_swigregister = _quickfix.NoMsgTypes_swigregister
NoMsgTypes_swigregister(NoMsgTypes)

class MsgDirection(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MsgDirection, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MsgDirection, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MsgDirection(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MsgDirection
    __del__ = lambda self : None;
MsgDirection_swigregister = _quickfix.MsgDirection_swigregister
MsgDirection_swigregister(MsgDirection)

class NoTradingSessions(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoTradingSessions, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoTradingSessions, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoTradingSessions(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoTradingSessions
    __del__ = lambda self : None;
NoTradingSessions_swigregister = _quickfix.NoTradingSessions_swigregister
NoTradingSessions_swigregister(NoTradingSessions)

class TotalVolumeTraded(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotalVolumeTraded, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotalVolumeTraded, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotalVolumeTraded(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotalVolumeTraded
    __del__ = lambda self : None;
TotalVolumeTraded_swigregister = _quickfix.TotalVolumeTraded_swigregister
TotalVolumeTraded_swigregister(TotalVolumeTraded)

class DiscretionInst(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DiscretionInst, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DiscretionInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DiscretionInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DiscretionInst
    __del__ = lambda self : None;
DiscretionInst_swigregister = _quickfix.DiscretionInst_swigregister
DiscretionInst_swigregister(DiscretionInst)

class DiscretionOffsetValue(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DiscretionOffsetValue, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DiscretionOffsetValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DiscretionOffsetValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DiscretionOffsetValue
    __del__ = lambda self : None;
DiscretionOffsetValue_swigregister = _quickfix.DiscretionOffsetValue_swigregister
DiscretionOffsetValue_swigregister(DiscretionOffsetValue)

class BidID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidID
    __del__ = lambda self : None;
BidID_swigregister = _quickfix.BidID_swigregister
BidID_swigregister(BidID)

class ClientBidID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ClientBidID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ClientBidID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ClientBidID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ClientBidID
    __del__ = lambda self : None;
ClientBidID_swigregister = _quickfix.ClientBidID_swigregister
ClientBidID_swigregister(ClientBidID)

class ListName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ListName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ListName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ListName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ListName
    __del__ = lambda self : None;
ListName_swigregister = _quickfix.ListName_swigregister
ListName_swigregister(ListName)

class TotNoRelatedSym(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotNoRelatedSym, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotNoRelatedSym, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotNoRelatedSym(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotNoRelatedSym
    __del__ = lambda self : None;
TotNoRelatedSym_swigregister = _quickfix.TotNoRelatedSym_swigregister
TotNoRelatedSym_swigregister(TotNoRelatedSym)

class BidType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidType
    __del__ = lambda self : None;
BidType_swigregister = _quickfix.BidType_swigregister
BidType_swigregister(BidType)

class NumTickets(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NumTickets, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NumTickets, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NumTickets(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NumTickets
    __del__ = lambda self : None;
NumTickets_swigregister = _quickfix.NumTickets_swigregister
NumTickets_swigregister(NumTickets)

class SideValue1(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SideValue1, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SideValue1, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SideValue1(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SideValue1
    __del__ = lambda self : None;
SideValue1_swigregister = _quickfix.SideValue1_swigregister
SideValue1_swigregister(SideValue1)

class SideValue2(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SideValue2, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SideValue2, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SideValue2(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SideValue2
    __del__ = lambda self : None;
SideValue2_swigregister = _quickfix.SideValue2_swigregister
SideValue2_swigregister(SideValue2)

class NoBidDescriptors(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoBidDescriptors, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoBidDescriptors, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoBidDescriptors(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoBidDescriptors
    __del__ = lambda self : None;
NoBidDescriptors_swigregister = _quickfix.NoBidDescriptors_swigregister
NoBidDescriptors_swigregister(NoBidDescriptors)

class BidDescriptorType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidDescriptorType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidDescriptorType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidDescriptorType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidDescriptorType
    __del__ = lambda self : None;
BidDescriptorType_swigregister = _quickfix.BidDescriptorType_swigregister
BidDescriptorType_swigregister(BidDescriptorType)

class BidDescriptor(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidDescriptor, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidDescriptor, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidDescriptor(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidDescriptor
    __del__ = lambda self : None;
BidDescriptor_swigregister = _quickfix.BidDescriptor_swigregister
BidDescriptor_swigregister(BidDescriptor)

class SideValueInd(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SideValueInd, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SideValueInd, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SideValueInd(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SideValueInd
    __del__ = lambda self : None;
SideValueInd_swigregister = _quickfix.SideValueInd_swigregister
SideValueInd_swigregister(SideValueInd)

class LiquidityPctLow(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LiquidityPctLow, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LiquidityPctLow, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LiquidityPctLow(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LiquidityPctLow
    __del__ = lambda self : None;
LiquidityPctLow_swigregister = _quickfix.LiquidityPctLow_swigregister
LiquidityPctLow_swigregister(LiquidityPctLow)

class LiquidityPctHigh(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LiquidityPctHigh, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LiquidityPctHigh, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LiquidityPctHigh(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LiquidityPctHigh
    __del__ = lambda self : None;
LiquidityPctHigh_swigregister = _quickfix.LiquidityPctHigh_swigregister
LiquidityPctHigh_swigregister(LiquidityPctHigh)

class LiquidityValue(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LiquidityValue, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LiquidityValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LiquidityValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LiquidityValue
    __del__ = lambda self : None;
LiquidityValue_swigregister = _quickfix.LiquidityValue_swigregister
LiquidityValue_swigregister(LiquidityValue)

class EFPTrackingError(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EFPTrackingError, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EFPTrackingError, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EFPTrackingError(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EFPTrackingError
    __del__ = lambda self : None;
EFPTrackingError_swigregister = _quickfix.EFPTrackingError_swigregister
EFPTrackingError_swigregister(EFPTrackingError)

class FairValue(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FairValue, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FairValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FairValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_FairValue
    __del__ = lambda self : None;
FairValue_swigregister = _quickfix.FairValue_swigregister
FairValue_swigregister(FairValue)

class OutsideIndexPct(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OutsideIndexPct, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OutsideIndexPct, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OutsideIndexPct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OutsideIndexPct
    __del__ = lambda self : None;
OutsideIndexPct_swigregister = _quickfix.OutsideIndexPct_swigregister
OutsideIndexPct_swigregister(OutsideIndexPct)

class ValueOfFutures(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ValueOfFutures, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ValueOfFutures, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ValueOfFutures(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ValueOfFutures
    __del__ = lambda self : None;
ValueOfFutures_swigregister = _quickfix.ValueOfFutures_swigregister
ValueOfFutures_swigregister(ValueOfFutures)

class LiquidityIndType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LiquidityIndType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LiquidityIndType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LiquidityIndType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LiquidityIndType
    __del__ = lambda self : None;
LiquidityIndType_swigregister = _quickfix.LiquidityIndType_swigregister
LiquidityIndType_swigregister(LiquidityIndType)

class WtAverageLiquidity(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, WtAverageLiquidity, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, WtAverageLiquidity, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_WtAverageLiquidity(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_WtAverageLiquidity
    __del__ = lambda self : None;
WtAverageLiquidity_swigregister = _quickfix.WtAverageLiquidity_swigregister
WtAverageLiquidity_swigregister(WtAverageLiquidity)

class ExchangeForPhysical(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExchangeForPhysical, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExchangeForPhysical, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExchangeForPhysical(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExchangeForPhysical
    __del__ = lambda self : None;
ExchangeForPhysical_swigregister = _quickfix.ExchangeForPhysical_swigregister
ExchangeForPhysical_swigregister(ExchangeForPhysical)

class OutMainCntryUIndex(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OutMainCntryUIndex, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OutMainCntryUIndex, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OutMainCntryUIndex(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OutMainCntryUIndex
    __del__ = lambda self : None;
OutMainCntryUIndex_swigregister = _quickfix.OutMainCntryUIndex_swigregister
OutMainCntryUIndex_swigregister(OutMainCntryUIndex)

class CrossPercent(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CrossPercent, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CrossPercent, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CrossPercent(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CrossPercent
    __del__ = lambda self : None;
CrossPercent_swigregister = _quickfix.CrossPercent_swigregister
CrossPercent_swigregister(CrossPercent)

class ProgRptReqs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ProgRptReqs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ProgRptReqs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ProgRptReqs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ProgRptReqs
    __del__ = lambda self : None;
ProgRptReqs_swigregister = _quickfix.ProgRptReqs_swigregister
ProgRptReqs_swigregister(ProgRptReqs)

class ProgPeriodInterval(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ProgPeriodInterval, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ProgPeriodInterval, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ProgPeriodInterval(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ProgPeriodInterval
    __del__ = lambda self : None;
ProgPeriodInterval_swigregister = _quickfix.ProgPeriodInterval_swigregister
ProgPeriodInterval_swigregister(ProgPeriodInterval)

class IncTaxInd(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IncTaxInd, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IncTaxInd, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IncTaxInd(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IncTaxInd
    __del__ = lambda self : None;
IncTaxInd_swigregister = _quickfix.IncTaxInd_swigregister
IncTaxInd_swigregister(IncTaxInd)

class NumBidders(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NumBidders, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NumBidders, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NumBidders(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NumBidders
    __del__ = lambda self : None;
NumBidders_swigregister = _quickfix.NumBidders_swigregister
NumBidders_swigregister(NumBidders)

class BidTradeType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidTradeType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidTradeType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidTradeType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidTradeType
    __del__ = lambda self : None;
BidTradeType_swigregister = _quickfix.BidTradeType_swigregister
BidTradeType_swigregister(BidTradeType)

class BasisPxType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BasisPxType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BasisPxType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BasisPxType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BasisPxType
    __del__ = lambda self : None;
BasisPxType_swigregister = _quickfix.BasisPxType_swigregister
BasisPxType_swigregister(BasisPxType)

class NoBidComponents(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoBidComponents, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoBidComponents, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoBidComponents(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoBidComponents
    __del__ = lambda self : None;
NoBidComponents_swigregister = _quickfix.NoBidComponents_swigregister
NoBidComponents_swigregister(NoBidComponents)

class Country(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Country, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Country, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Country(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Country
    __del__ = lambda self : None;
Country_swigregister = _quickfix.Country_swigregister
Country_swigregister(Country)

class TotNoStrikes(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotNoStrikes, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotNoStrikes, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotNoStrikes(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotNoStrikes
    __del__ = lambda self : None;
TotNoStrikes_swigregister = _quickfix.TotNoStrikes_swigregister
TotNoStrikes_swigregister(TotNoStrikes)

class PriceType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PriceType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PriceType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PriceType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PriceType
    __del__ = lambda self : None;
PriceType_swigregister = _quickfix.PriceType_swigregister
PriceType_swigregister(PriceType)

class DayOrderQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DayOrderQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DayOrderQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DayOrderQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DayOrderQty
    __del__ = lambda self : None;
DayOrderQty_swigregister = _quickfix.DayOrderQty_swigregister
DayOrderQty_swigregister(DayOrderQty)

class DayCumQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DayCumQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DayCumQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DayCumQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DayCumQty
    __del__ = lambda self : None;
DayCumQty_swigregister = _quickfix.DayCumQty_swigregister
DayCumQty_swigregister(DayCumQty)

class DayAvgPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DayAvgPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DayAvgPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DayAvgPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DayAvgPx
    __del__ = lambda self : None;
DayAvgPx_swigregister = _quickfix.DayAvgPx_swigregister
DayAvgPx_swigregister(DayAvgPx)

class GTBookingInst(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, GTBookingInst, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, GTBookingInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_GTBookingInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_GTBookingInst
    __del__ = lambda self : None;
GTBookingInst_swigregister = _quickfix.GTBookingInst_swigregister
GTBookingInst_swigregister(GTBookingInst)

class NoStrikes(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoStrikes, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoStrikes, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoStrikes(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoStrikes
    __del__ = lambda self : None;
NoStrikes_swigregister = _quickfix.NoStrikes_swigregister
NoStrikes_swigregister(NoStrikes)

class ListStatusType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ListStatusType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ListStatusType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ListStatusType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ListStatusType
    __del__ = lambda self : None;
ListStatusType_swigregister = _quickfix.ListStatusType_swigregister
ListStatusType_swigregister(ListStatusType)

class NetGrossInd(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NetGrossInd, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NetGrossInd, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NetGrossInd(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NetGrossInd
    __del__ = lambda self : None;
NetGrossInd_swigregister = _quickfix.NetGrossInd_swigregister
NetGrossInd_swigregister(NetGrossInd)

class ListOrderStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ListOrderStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ListOrderStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ListOrderStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ListOrderStatus
    __del__ = lambda self : None;
ListOrderStatus_swigregister = _quickfix.ListOrderStatus_swigregister
ListOrderStatus_swigregister(ListOrderStatus)

class ExpireDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExpireDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExpireDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExpireDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExpireDate
    __del__ = lambda self : None;
ExpireDate_swigregister = _quickfix.ExpireDate_swigregister
ExpireDate_swigregister(ExpireDate)

class ListExecInstType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ListExecInstType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ListExecInstType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ListExecInstType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ListExecInstType
    __del__ = lambda self : None;
ListExecInstType_swigregister = _quickfix.ListExecInstType_swigregister
ListExecInstType_swigregister(ListExecInstType)

class CxlRejResponseTo(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CxlRejResponseTo, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CxlRejResponseTo, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CxlRejResponseTo(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CxlRejResponseTo
    __del__ = lambda self : None;
CxlRejResponseTo_swigregister = _quickfix.CxlRejResponseTo_swigregister
CxlRejResponseTo_swigregister(CxlRejResponseTo)

class UnderlyingCouponRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingCouponRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingCouponRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingCouponRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingCouponRate
    __del__ = lambda self : None;
UnderlyingCouponRate_swigregister = _quickfix.UnderlyingCouponRate_swigregister
UnderlyingCouponRate_swigregister(UnderlyingCouponRate)

class UnderlyingContractMultiplier(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingContractMultiplier, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingContractMultiplier, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingContractMultiplier(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingContractMultiplier
    __del__ = lambda self : None;
UnderlyingContractMultiplier_swigregister = _quickfix.UnderlyingContractMultiplier_swigregister
UnderlyingContractMultiplier_swigregister(UnderlyingContractMultiplier)

class ContraTradeQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContraTradeQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContraTradeQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContraTradeQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContraTradeQty
    __del__ = lambda self : None;
ContraTradeQty_swigregister = _quickfix.ContraTradeQty_swigregister
ContraTradeQty_swigregister(ContraTradeQty)

class ContraTradeTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContraTradeTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContraTradeTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContraTradeTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContraTradeTime
    __del__ = lambda self : None;
ContraTradeTime_swigregister = _quickfix.ContraTradeTime_swigregister
ContraTradeTime_swigregister(ContraTradeTime)

class LiquidityNumSecurities(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LiquidityNumSecurities, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LiquidityNumSecurities, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LiquidityNumSecurities(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LiquidityNumSecurities
    __del__ = lambda self : None;
LiquidityNumSecurities_swigregister = _quickfix.LiquidityNumSecurities_swigregister
LiquidityNumSecurities_swigregister(LiquidityNumSecurities)

class MultiLegReportingType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MultiLegReportingType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MultiLegReportingType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MultiLegReportingType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MultiLegReportingType
    __del__ = lambda self : None;
MultiLegReportingType_swigregister = _quickfix.MultiLegReportingType_swigregister
MultiLegReportingType_swigregister(MultiLegReportingType)

class StrikeTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StrikeTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StrikeTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StrikeTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StrikeTime
    __del__ = lambda self : None;
StrikeTime_swigregister = _quickfix.StrikeTime_swigregister
StrikeTime_swigregister(StrikeTime)

class ListStatusText(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ListStatusText, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ListStatusText, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ListStatusText(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ListStatusText
    __del__ = lambda self : None;
ListStatusText_swigregister = _quickfix.ListStatusText_swigregister
ListStatusText_swigregister(ListStatusText)

class EncodedListStatusTextLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedListStatusTextLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedListStatusTextLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedListStatusTextLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedListStatusTextLen
    __del__ = lambda self : None;
EncodedListStatusTextLen_swigregister = _quickfix.EncodedListStatusTextLen_swigregister
EncodedListStatusTextLen_swigregister(EncodedListStatusTextLen)

class EncodedListStatusText(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedListStatusText, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedListStatusText, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedListStatusText(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedListStatusText
    __del__ = lambda self : None;
EncodedListStatusText_swigregister = _quickfix.EncodedListStatusText_swigregister
EncodedListStatusText_swigregister(EncodedListStatusText)

class PartyIDSource(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PartyIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PartyIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PartyIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PartyIDSource
    __del__ = lambda self : None;
PartyIDSource_swigregister = _quickfix.PartyIDSource_swigregister
PartyIDSource_swigregister(PartyIDSource)

class PartyID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PartyID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PartyID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PartyID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PartyID
    __del__ = lambda self : None;
PartyID_swigregister = _quickfix.PartyID_swigregister
PartyID_swigregister(PartyID)

class NetChgPrevDay(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NetChgPrevDay, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NetChgPrevDay, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NetChgPrevDay(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NetChgPrevDay
    __del__ = lambda self : None;
NetChgPrevDay_swigregister = _quickfix.NetChgPrevDay_swigregister
NetChgPrevDay_swigregister(NetChgPrevDay)

class PartyRole(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PartyRole, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PartyRole, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PartyRole(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PartyRole
    __del__ = lambda self : None;
PartyRole_swigregister = _quickfix.PartyRole_swigregister
PartyRole_swigregister(PartyRole)

class NoPartyIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoPartyIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoPartyIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoPartyIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoPartyIDs
    __del__ = lambda self : None;
NoPartyIDs_swigregister = _quickfix.NoPartyIDs_swigregister
NoPartyIDs_swigregister(NoPartyIDs)

class NoSecurityAltID(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoSecurityAltID, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoSecurityAltID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoSecurityAltID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoSecurityAltID
    __del__ = lambda self : None;
NoSecurityAltID_swigregister = _quickfix.NoSecurityAltID_swigregister
NoSecurityAltID_swigregister(NoSecurityAltID)

class SecurityAltID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityAltID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityAltID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityAltID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityAltID
    __del__ = lambda self : None;
SecurityAltID_swigregister = _quickfix.SecurityAltID_swigregister
SecurityAltID_swigregister(SecurityAltID)

class SecurityAltIDSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityAltIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityAltIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityAltIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityAltIDSource
    __del__ = lambda self : None;
SecurityAltIDSource_swigregister = _quickfix.SecurityAltIDSource_swigregister
SecurityAltIDSource_swigregister(SecurityAltIDSource)

class NoUnderlyingSecurityAltID(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoUnderlyingSecurityAltID, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoUnderlyingSecurityAltID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoUnderlyingSecurityAltID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoUnderlyingSecurityAltID
    __del__ = lambda self : None;
NoUnderlyingSecurityAltID_swigregister = _quickfix.NoUnderlyingSecurityAltID_swigregister
NoUnderlyingSecurityAltID_swigregister(NoUnderlyingSecurityAltID)

class UnderlyingSecurityAltID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSecurityAltID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSecurityAltID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSecurityAltID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSecurityAltID
    __del__ = lambda self : None;
UnderlyingSecurityAltID_swigregister = _quickfix.UnderlyingSecurityAltID_swigregister
UnderlyingSecurityAltID_swigregister(UnderlyingSecurityAltID)

class UnderlyingSecurityAltIDSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSecurityAltIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSecurityAltIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSecurityAltIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSecurityAltIDSource
    __del__ = lambda self : None;
UnderlyingSecurityAltIDSource_swigregister = _quickfix.UnderlyingSecurityAltIDSource_swigregister
UnderlyingSecurityAltIDSource_swigregister(UnderlyingSecurityAltIDSource)

class Product(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Product, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Product, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Product(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Product
    __del__ = lambda self : None;
Product_swigregister = _quickfix.Product_swigregister
Product_swigregister(Product)

class CFICode(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CFICode, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CFICode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CFICode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CFICode
    __del__ = lambda self : None;
CFICode_swigregister = _quickfix.CFICode_swigregister
CFICode_swigregister(CFICode)

class UnderlyingProduct(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingProduct, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingProduct, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingProduct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingProduct
    __del__ = lambda self : None;
UnderlyingProduct_swigregister = _quickfix.UnderlyingProduct_swigregister
UnderlyingProduct_swigregister(UnderlyingProduct)

class UnderlyingCFICode(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingCFICode, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingCFICode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingCFICode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingCFICode
    __del__ = lambda self : None;
UnderlyingCFICode_swigregister = _quickfix.UnderlyingCFICode_swigregister
UnderlyingCFICode_swigregister(UnderlyingCFICode)

class TestMessageIndicator(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TestMessageIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TestMessageIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TestMessageIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TestMessageIndicator
    __del__ = lambda self : None;
TestMessageIndicator_swigregister = _quickfix.TestMessageIndicator_swigregister
TestMessageIndicator_swigregister(TestMessageIndicator)

class QuantityType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuantityType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuantityType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuantityType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuantityType
    __del__ = lambda self : None;
QuantityType_swigregister = _quickfix.QuantityType_swigregister
QuantityType_swigregister(QuantityType)

class BookingRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BookingRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BookingRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BookingRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BookingRefID
    __del__ = lambda self : None;
BookingRefID_swigregister = _quickfix.BookingRefID_swigregister
BookingRefID_swigregister(BookingRefID)

class IndividualAllocID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IndividualAllocID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IndividualAllocID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IndividualAllocID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IndividualAllocID
    __del__ = lambda self : None;
IndividualAllocID_swigregister = _quickfix.IndividualAllocID_swigregister
IndividualAllocID_swigregister(IndividualAllocID)

class RoundingDirection(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RoundingDirection, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RoundingDirection, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RoundingDirection(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RoundingDirection
    __del__ = lambda self : None;
RoundingDirection_swigregister = _quickfix.RoundingDirection_swigregister
RoundingDirection_swigregister(RoundingDirection)

class RoundingModulus(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RoundingModulus, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RoundingModulus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RoundingModulus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RoundingModulus
    __del__ = lambda self : None;
RoundingModulus_swigregister = _quickfix.RoundingModulus_swigregister
RoundingModulus_swigregister(RoundingModulus)

class CountryOfIssue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CountryOfIssue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CountryOfIssue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CountryOfIssue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CountryOfIssue
    __del__ = lambda self : None;
CountryOfIssue_swigregister = _quickfix.CountryOfIssue_swigregister
CountryOfIssue_swigregister(CountryOfIssue)

class StateOrProvinceOfIssue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StateOrProvinceOfIssue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StateOrProvinceOfIssue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StateOrProvinceOfIssue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StateOrProvinceOfIssue
    __del__ = lambda self : None;
StateOrProvinceOfIssue_swigregister = _quickfix.StateOrProvinceOfIssue_swigregister
StateOrProvinceOfIssue_swigregister(StateOrProvinceOfIssue)

class LocaleOfIssue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LocaleOfIssue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LocaleOfIssue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LocaleOfIssue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LocaleOfIssue
    __del__ = lambda self : None;
LocaleOfIssue_swigregister = _quickfix.LocaleOfIssue_swigregister
LocaleOfIssue_swigregister(LocaleOfIssue)

class NoRegistDtls(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoRegistDtls, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoRegistDtls, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoRegistDtls(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoRegistDtls
    __del__ = lambda self : None;
NoRegistDtls_swigregister = _quickfix.NoRegistDtls_swigregister
NoRegistDtls_swigregister(NoRegistDtls)

class MailingDtls(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MailingDtls, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MailingDtls, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MailingDtls(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MailingDtls
    __del__ = lambda self : None;
MailingDtls_swigregister = _quickfix.MailingDtls_swigregister
MailingDtls_swigregister(MailingDtls)

class InvestorCountryOfResidence(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, InvestorCountryOfResidence, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, InvestorCountryOfResidence, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_InvestorCountryOfResidence(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_InvestorCountryOfResidence
    __del__ = lambda self : None;
InvestorCountryOfResidence_swigregister = _quickfix.InvestorCountryOfResidence_swigregister
InvestorCountryOfResidence_swigregister(InvestorCountryOfResidence)

class PaymentRef(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PaymentRef, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PaymentRef, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PaymentRef(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PaymentRef
    __del__ = lambda self : None;
PaymentRef_swigregister = _quickfix.PaymentRef_swigregister
PaymentRef_swigregister(PaymentRef)

class DistribPaymentMethod(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DistribPaymentMethod, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DistribPaymentMethod, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DistribPaymentMethod(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DistribPaymentMethod
    __del__ = lambda self : None;
DistribPaymentMethod_swigregister = _quickfix.DistribPaymentMethod_swigregister
DistribPaymentMethod_swigregister(DistribPaymentMethod)

class CashDistribCurr(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashDistribCurr, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashDistribCurr, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashDistribCurr(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashDistribCurr
    __del__ = lambda self : None;
CashDistribCurr_swigregister = _quickfix.CashDistribCurr_swigregister
CashDistribCurr_swigregister(CashDistribCurr)

class CommCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CommCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CommCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CommCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CommCurrency
    __del__ = lambda self : None;
CommCurrency_swigregister = _quickfix.CommCurrency_swigregister
CommCurrency_swigregister(CommCurrency)

class CancellationRights(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CancellationRights, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CancellationRights, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CancellationRights(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CancellationRights
    __del__ = lambda self : None;
CancellationRights_swigregister = _quickfix.CancellationRights_swigregister
CancellationRights_swigregister(CancellationRights)

class MoneyLaunderingStatus(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MoneyLaunderingStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MoneyLaunderingStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MoneyLaunderingStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MoneyLaunderingStatus
    __del__ = lambda self : None;
MoneyLaunderingStatus_swigregister = _quickfix.MoneyLaunderingStatus_swigregister
MoneyLaunderingStatus_swigregister(MoneyLaunderingStatus)

class MailingInst(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MailingInst, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MailingInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MailingInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MailingInst
    __del__ = lambda self : None;
MailingInst_swigregister = _quickfix.MailingInst_swigregister
MailingInst_swigregister(MailingInst)

class TransBkdTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TransBkdTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TransBkdTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TransBkdTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TransBkdTime
    __del__ = lambda self : None;
TransBkdTime_swigregister = _quickfix.TransBkdTime_swigregister
TransBkdTime_swigregister(TransBkdTime)

class ExecPriceType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExecPriceType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExecPriceType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExecPriceType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExecPriceType
    __del__ = lambda self : None;
ExecPriceType_swigregister = _quickfix.ExecPriceType_swigregister
ExecPriceType_swigregister(ExecPriceType)

class ExecPriceAdjustment(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExecPriceAdjustment, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExecPriceAdjustment, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExecPriceAdjustment(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExecPriceAdjustment
    __del__ = lambda self : None;
ExecPriceAdjustment_swigregister = _quickfix.ExecPriceAdjustment_swigregister
ExecPriceAdjustment_swigregister(ExecPriceAdjustment)

class DateOfBirth(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DateOfBirth, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DateOfBirth, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DateOfBirth(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DateOfBirth
    __del__ = lambda self : None;
DateOfBirth_swigregister = _quickfix.DateOfBirth_swigregister
DateOfBirth_swigregister(DateOfBirth)

class TradeReportTransType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeReportTransType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeReportTransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeReportTransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeReportTransType
    __del__ = lambda self : None;
TradeReportTransType_swigregister = _quickfix.TradeReportTransType_swigregister
TradeReportTransType_swigregister(TradeReportTransType)

class CardHolderName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CardHolderName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CardHolderName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CardHolderName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CardHolderName
    __del__ = lambda self : None;
CardHolderName_swigregister = _quickfix.CardHolderName_swigregister
CardHolderName_swigregister(CardHolderName)

class CardNumber(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CardNumber, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CardNumber, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CardNumber(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CardNumber
    __del__ = lambda self : None;
CardNumber_swigregister = _quickfix.CardNumber_swigregister
CardNumber_swigregister(CardNumber)

class CardExpDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CardExpDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CardExpDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CardExpDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CardExpDate
    __del__ = lambda self : None;
CardExpDate_swigregister = _quickfix.CardExpDate_swigregister
CardExpDate_swigregister(CardExpDate)

class CardIssNum(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CardIssNum, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CardIssNum, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CardIssNum(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CardIssNum
    __del__ = lambda self : None;
CardIssNum_swigregister = _quickfix.CardIssNum_swigregister
CardIssNum_swigregister(CardIssNum)

class PaymentMethod(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PaymentMethod, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PaymentMethod, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PaymentMethod(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PaymentMethod
    __del__ = lambda self : None;
PaymentMethod_swigregister = _quickfix.PaymentMethod_swigregister
PaymentMethod_swigregister(PaymentMethod)

class RegistAcctType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RegistAcctType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RegistAcctType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RegistAcctType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RegistAcctType
    __del__ = lambda self : None;
RegistAcctType_swigregister = _quickfix.RegistAcctType_swigregister
RegistAcctType_swigregister(RegistAcctType)

class Designation(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Designation, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Designation, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Designation(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Designation
    __del__ = lambda self : None;
Designation_swigregister = _quickfix.Designation_swigregister
Designation_swigregister(Designation)

class TaxAdvantageType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TaxAdvantageType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TaxAdvantageType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TaxAdvantageType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TaxAdvantageType
    __del__ = lambda self : None;
TaxAdvantageType_swigregister = _quickfix.TaxAdvantageType_swigregister
TaxAdvantageType_swigregister(TaxAdvantageType)

class RegistRejReasonText(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RegistRejReasonText, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RegistRejReasonText, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RegistRejReasonText(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RegistRejReasonText
    __del__ = lambda self : None;
RegistRejReasonText_swigregister = _quickfix.RegistRejReasonText_swigregister
RegistRejReasonText_swigregister(RegistRejReasonText)

class FundRenewWaiv(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FundRenewWaiv, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FundRenewWaiv, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FundRenewWaiv(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_FundRenewWaiv
    __del__ = lambda self : None;
FundRenewWaiv_swigregister = _quickfix.FundRenewWaiv_swigregister
FundRenewWaiv_swigregister(FundRenewWaiv)

class CashDistribAgentName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashDistribAgentName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashDistribAgentName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashDistribAgentName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashDistribAgentName
    __del__ = lambda self : None;
CashDistribAgentName_swigregister = _quickfix.CashDistribAgentName_swigregister
CashDistribAgentName_swigregister(CashDistribAgentName)

class CashDistribAgentCode(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashDistribAgentCode, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashDistribAgentCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashDistribAgentCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashDistribAgentCode
    __del__ = lambda self : None;
CashDistribAgentCode_swigregister = _quickfix.CashDistribAgentCode_swigregister
CashDistribAgentCode_swigregister(CashDistribAgentCode)

class CashDistribAgentAcctNumber(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashDistribAgentAcctNumber, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashDistribAgentAcctNumber, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashDistribAgentAcctNumber(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashDistribAgentAcctNumber
    __del__ = lambda self : None;
CashDistribAgentAcctNumber_swigregister = _quickfix.CashDistribAgentAcctNumber_swigregister
CashDistribAgentAcctNumber_swigregister(CashDistribAgentAcctNumber)

class CashDistribPayRef(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashDistribPayRef, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashDistribPayRef, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashDistribPayRef(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashDistribPayRef
    __del__ = lambda self : None;
CashDistribPayRef_swigregister = _quickfix.CashDistribPayRef_swigregister
CashDistribPayRef_swigregister(CashDistribPayRef)

class CashDistribAgentAcctName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashDistribAgentAcctName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashDistribAgentAcctName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashDistribAgentAcctName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashDistribAgentAcctName
    __del__ = lambda self : None;
CashDistribAgentAcctName_swigregister = _quickfix.CashDistribAgentAcctName_swigregister
CashDistribAgentAcctName_swigregister(CashDistribAgentAcctName)

class CardStartDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CardStartDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CardStartDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CardStartDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CardStartDate
    __del__ = lambda self : None;
CardStartDate_swigregister = _quickfix.CardStartDate_swigregister
CardStartDate_swigregister(CardStartDate)

class PaymentDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PaymentDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PaymentDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PaymentDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PaymentDate
    __del__ = lambda self : None;
PaymentDate_swigregister = _quickfix.PaymentDate_swigregister
PaymentDate_swigregister(PaymentDate)

class PaymentRemitterID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PaymentRemitterID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PaymentRemitterID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PaymentRemitterID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PaymentRemitterID
    __del__ = lambda self : None;
PaymentRemitterID_swigregister = _quickfix.PaymentRemitterID_swigregister
PaymentRemitterID_swigregister(PaymentRemitterID)

class RegistStatus(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RegistStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RegistStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RegistStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RegistStatus
    __del__ = lambda self : None;
RegistStatus_swigregister = _quickfix.RegistStatus_swigregister
RegistStatus_swigregister(RegistStatus)

class RegistRejReasonCode(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RegistRejReasonCode, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RegistRejReasonCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RegistRejReasonCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RegistRejReasonCode
    __del__ = lambda self : None;
RegistRejReasonCode_swigregister = _quickfix.RegistRejReasonCode_swigregister
RegistRejReasonCode_swigregister(RegistRejReasonCode)

class RegistRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RegistRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RegistRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RegistRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RegistRefID
    __del__ = lambda self : None;
RegistRefID_swigregister = _quickfix.RegistRefID_swigregister
RegistRefID_swigregister(RegistRefID)

class RegistDtls(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RegistDtls, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RegistDtls, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RegistDtls(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RegistDtls
    __del__ = lambda self : None;
RegistDtls_swigregister = _quickfix.RegistDtls_swigregister
RegistDtls_swigregister(RegistDtls)

class NoDistribInsts(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoDistribInsts, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoDistribInsts, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoDistribInsts(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoDistribInsts
    __del__ = lambda self : None;
NoDistribInsts_swigregister = _quickfix.NoDistribInsts_swigregister
NoDistribInsts_swigregister(NoDistribInsts)

class RegistEmail(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RegistEmail, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RegistEmail, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RegistEmail(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RegistEmail
    __del__ = lambda self : None;
RegistEmail_swigregister = _quickfix.RegistEmail_swigregister
RegistEmail_swigregister(RegistEmail)

class DistribPercentage(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DistribPercentage, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DistribPercentage, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DistribPercentage(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DistribPercentage
    __del__ = lambda self : None;
DistribPercentage_swigregister = _quickfix.DistribPercentage_swigregister
DistribPercentage_swigregister(DistribPercentage)

class RegistID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RegistID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RegistID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RegistID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RegistID
    __del__ = lambda self : None;
RegistID_swigregister = _quickfix.RegistID_swigregister
RegistID_swigregister(RegistID)

class RegistTransType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RegistTransType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RegistTransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RegistTransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RegistTransType
    __del__ = lambda self : None;
RegistTransType_swigregister = _quickfix.RegistTransType_swigregister
RegistTransType_swigregister(RegistTransType)

class ExecValuationPoint(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExecValuationPoint, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExecValuationPoint, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExecValuationPoint(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExecValuationPoint
    __del__ = lambda self : None;
ExecValuationPoint_swigregister = _quickfix.ExecValuationPoint_swigregister
ExecValuationPoint_swigregister(ExecValuationPoint)

class OrderPercent(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrderPercent, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrderPercent, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrderPercent(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrderPercent
    __del__ = lambda self : None;
OrderPercent_swigregister = _quickfix.OrderPercent_swigregister
OrderPercent_swigregister(OrderPercent)

class OwnershipType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OwnershipType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OwnershipType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OwnershipType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OwnershipType
    __del__ = lambda self : None;
OwnershipType_swigregister = _quickfix.OwnershipType_swigregister
OwnershipType_swigregister(OwnershipType)

class NoContAmts(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoContAmts, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoContAmts, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoContAmts(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoContAmts
    __del__ = lambda self : None;
NoContAmts_swigregister = _quickfix.NoContAmts_swigregister
NoContAmts_swigregister(NoContAmts)

class ContAmtType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContAmtType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContAmtType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContAmtType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContAmtType
    __del__ = lambda self : None;
ContAmtType_swigregister = _quickfix.ContAmtType_swigregister
ContAmtType_swigregister(ContAmtType)

class ContAmtValue(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContAmtValue, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContAmtValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContAmtValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContAmtValue
    __del__ = lambda self : None;
ContAmtValue_swigregister = _quickfix.ContAmtValue_swigregister
ContAmtValue_swigregister(ContAmtValue)

class ContAmtCurr(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContAmtCurr, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContAmtCurr, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContAmtCurr(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContAmtCurr
    __del__ = lambda self : None;
ContAmtCurr_swigregister = _quickfix.ContAmtCurr_swigregister
ContAmtCurr_swigregister(ContAmtCurr)

class OwnerType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OwnerType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OwnerType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OwnerType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OwnerType
    __del__ = lambda self : None;
OwnerType_swigregister = _quickfix.OwnerType_swigregister
OwnerType_swigregister(OwnerType)

class PartySubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PartySubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PartySubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PartySubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PartySubID
    __del__ = lambda self : None;
PartySubID_swigregister = _quickfix.PartySubID_swigregister
PartySubID_swigregister(PartySubID)

class NestedPartyID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NestedPartyID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NestedPartyID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NestedPartyID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NestedPartyID
    __del__ = lambda self : None;
NestedPartyID_swigregister = _quickfix.NestedPartyID_swigregister
NestedPartyID_swigregister(NestedPartyID)

class NestedPartyIDSource(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NestedPartyIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NestedPartyIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NestedPartyIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NestedPartyIDSource
    __del__ = lambda self : None;
NestedPartyIDSource_swigregister = _quickfix.NestedPartyIDSource_swigregister
NestedPartyIDSource_swigregister(NestedPartyIDSource)

class SecondaryClOrdID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecondaryClOrdID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecondaryClOrdID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecondaryClOrdID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecondaryClOrdID
    __del__ = lambda self : None;
SecondaryClOrdID_swigregister = _quickfix.SecondaryClOrdID_swigregister
SecondaryClOrdID_swigregister(SecondaryClOrdID)

class SecondaryExecID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecondaryExecID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecondaryExecID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecondaryExecID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecondaryExecID
    __del__ = lambda self : None;
SecondaryExecID_swigregister = _quickfix.SecondaryExecID_swigregister
SecondaryExecID_swigregister(SecondaryExecID)

class OrderCapacity(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrderCapacity, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrderCapacity, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrderCapacity(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrderCapacity
    __del__ = lambda self : None;
OrderCapacity_swigregister = _quickfix.OrderCapacity_swigregister
OrderCapacity_swigregister(OrderCapacity)

class OrderRestrictions(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrderRestrictions, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrderRestrictions, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrderRestrictions(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrderRestrictions
    __del__ = lambda self : None;
OrderRestrictions_swigregister = _quickfix.OrderRestrictions_swigregister
OrderRestrictions_swigregister(OrderRestrictions)

class MassCancelRequestType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MassCancelRequestType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MassCancelRequestType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MassCancelRequestType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MassCancelRequestType
    __del__ = lambda self : None;
MassCancelRequestType_swigregister = _quickfix.MassCancelRequestType_swigregister
MassCancelRequestType_swigregister(MassCancelRequestType)

class MassCancelResponse(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MassCancelResponse, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MassCancelResponse, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MassCancelResponse(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MassCancelResponse
    __del__ = lambda self : None;
MassCancelResponse_swigregister = _quickfix.MassCancelResponse_swigregister
MassCancelResponse_swigregister(MassCancelResponse)

class MassCancelRejectReason(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MassCancelRejectReason, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MassCancelRejectReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MassCancelRejectReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MassCancelRejectReason
    __del__ = lambda self : None;
MassCancelRejectReason_swigregister = _quickfix.MassCancelRejectReason_swigregister
MassCancelRejectReason_swigregister(MassCancelRejectReason)

class TotalAffectedOrders(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotalAffectedOrders, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotalAffectedOrders, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotalAffectedOrders(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotalAffectedOrders
    __del__ = lambda self : None;
TotalAffectedOrders_swigregister = _quickfix.TotalAffectedOrders_swigregister
TotalAffectedOrders_swigregister(TotalAffectedOrders)

class NoAffectedOrders(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoAffectedOrders, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoAffectedOrders, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoAffectedOrders(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoAffectedOrders
    __del__ = lambda self : None;
NoAffectedOrders_swigregister = _quickfix.NoAffectedOrders_swigregister
NoAffectedOrders_swigregister(NoAffectedOrders)

class AffectedOrderID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AffectedOrderID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AffectedOrderID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AffectedOrderID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AffectedOrderID
    __del__ = lambda self : None;
AffectedOrderID_swigregister = _quickfix.AffectedOrderID_swigregister
AffectedOrderID_swigregister(AffectedOrderID)

class AffectedSecondaryOrderID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AffectedSecondaryOrderID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AffectedSecondaryOrderID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AffectedSecondaryOrderID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AffectedSecondaryOrderID
    __del__ = lambda self : None;
AffectedSecondaryOrderID_swigregister = _quickfix.AffectedSecondaryOrderID_swigregister
AffectedSecondaryOrderID_swigregister(AffectedSecondaryOrderID)

class QuoteType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteType
    __del__ = lambda self : None;
QuoteType_swigregister = _quickfix.QuoteType_swigregister
QuoteType_swigregister(QuoteType)

class NestedPartyRole(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NestedPartyRole, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NestedPartyRole, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NestedPartyRole(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NestedPartyRole
    __del__ = lambda self : None;
NestedPartyRole_swigregister = _quickfix.NestedPartyRole_swigregister
NestedPartyRole_swigregister(NestedPartyRole)

class NoNestedPartyIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoNestedPartyIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoNestedPartyIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoNestedPartyIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoNestedPartyIDs
    __del__ = lambda self : None;
NoNestedPartyIDs_swigregister = _quickfix.NoNestedPartyIDs_swigregister
NoNestedPartyIDs_swigregister(NoNestedPartyIDs)

class TotalAccruedInterestAmt(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotalAccruedInterestAmt, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotalAccruedInterestAmt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotalAccruedInterestAmt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotalAccruedInterestAmt
    __del__ = lambda self : None;
TotalAccruedInterestAmt_swigregister = _quickfix.TotalAccruedInterestAmt_swigregister
TotalAccruedInterestAmt_swigregister(TotalAccruedInterestAmt)

class MaturityDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MaturityDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MaturityDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MaturityDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MaturityDate
    __del__ = lambda self : None;
MaturityDate_swigregister = _quickfix.MaturityDate_swigregister
MaturityDate_swigregister(MaturityDate)

class UnderlyingMaturityDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingMaturityDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingMaturityDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingMaturityDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingMaturityDate
    __del__ = lambda self : None;
UnderlyingMaturityDate_swigregister = _quickfix.UnderlyingMaturityDate_swigregister
UnderlyingMaturityDate_swigregister(UnderlyingMaturityDate)

class InstrRegistry(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, InstrRegistry, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, InstrRegistry, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_InstrRegistry(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_InstrRegistry
    __del__ = lambda self : None;
InstrRegistry_swigregister = _quickfix.InstrRegistry_swigregister
InstrRegistry_swigregister(InstrRegistry)

class CashMargin(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashMargin, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashMargin, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashMargin(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashMargin
    __del__ = lambda self : None;
CashMargin_swigregister = _quickfix.CashMargin_swigregister
CashMargin_swigregister(CashMargin)

class NestedPartySubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NestedPartySubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NestedPartySubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NestedPartySubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NestedPartySubID
    __del__ = lambda self : None;
NestedPartySubID_swigregister = _quickfix.NestedPartySubID_swigregister
NestedPartySubID_swigregister(NestedPartySubID)

class Scope(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Scope, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Scope, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Scope(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Scope
    __del__ = lambda self : None;
Scope_swigregister = _quickfix.Scope_swigregister
Scope_swigregister(Scope)

class MDImplicitDelete(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MDImplicitDelete, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MDImplicitDelete, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MDImplicitDelete(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MDImplicitDelete
    __del__ = lambda self : None;
MDImplicitDelete_swigregister = _quickfix.MDImplicitDelete_swigregister
MDImplicitDelete_swigregister(MDImplicitDelete)

class CrossID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CrossID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CrossID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CrossID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CrossID
    __del__ = lambda self : None;
CrossID_swigregister = _quickfix.CrossID_swigregister
CrossID_swigregister(CrossID)

class CrossType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CrossType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CrossType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CrossType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CrossType
    __del__ = lambda self : None;
CrossType_swigregister = _quickfix.CrossType_swigregister
CrossType_swigregister(CrossType)

class CrossPrioritization(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CrossPrioritization, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CrossPrioritization, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CrossPrioritization(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CrossPrioritization
    __del__ = lambda self : None;
CrossPrioritization_swigregister = _quickfix.CrossPrioritization_swigregister
CrossPrioritization_swigregister(CrossPrioritization)

class OrigCrossID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrigCrossID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrigCrossID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrigCrossID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrigCrossID
    __del__ = lambda self : None;
OrigCrossID_swigregister = _quickfix.OrigCrossID_swigregister
OrigCrossID_swigregister(OrigCrossID)

class NoSides(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoSides, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoSides, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoSides(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoSides
    __del__ = lambda self : None;
NoSides_swigregister = _quickfix.NoSides_swigregister
NoSides_swigregister(NoSides)

class Username(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Username, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Username, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Username(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Username
    __del__ = lambda self : None;
Username_swigregister = _quickfix.Username_swigregister
Username_swigregister(Username)

class Password(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Password, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Password, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Password(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Password
    __del__ = lambda self : None;
Password_swigregister = _quickfix.Password_swigregister
Password_swigregister(Password)

class NoLegs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoLegs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoLegs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoLegs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoLegs
    __del__ = lambda self : None;
NoLegs_swigregister = _quickfix.NoLegs_swigregister
NoLegs_swigregister(NoLegs)

class LegCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegCurrency
    __del__ = lambda self : None;
LegCurrency_swigregister = _quickfix.LegCurrency_swigregister
LegCurrency_swigregister(LegCurrency)

class TotNoSecurityTypes(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotNoSecurityTypes, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotNoSecurityTypes, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotNoSecurityTypes(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotNoSecurityTypes
    __del__ = lambda self : None;
TotNoSecurityTypes_swigregister = _quickfix.TotNoSecurityTypes_swigregister
TotNoSecurityTypes_swigregister(TotNoSecurityTypes)

class NoSecurityTypes(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoSecurityTypes, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoSecurityTypes, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoSecurityTypes(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoSecurityTypes
    __del__ = lambda self : None;
NoSecurityTypes_swigregister = _quickfix.NoSecurityTypes_swigregister
NoSecurityTypes_swigregister(NoSecurityTypes)

class SecurityListRequestType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityListRequestType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityListRequestType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityListRequestType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityListRequestType
    __del__ = lambda self : None;
SecurityListRequestType_swigregister = _quickfix.SecurityListRequestType_swigregister
SecurityListRequestType_swigregister(SecurityListRequestType)

class SecurityRequestResult(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecurityRequestResult, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecurityRequestResult, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecurityRequestResult(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecurityRequestResult
    __del__ = lambda self : None;
SecurityRequestResult_swigregister = _quickfix.SecurityRequestResult_swigregister
SecurityRequestResult_swigregister(SecurityRequestResult)

class RoundLot(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RoundLot, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RoundLot, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RoundLot(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RoundLot
    __del__ = lambda self : None;
RoundLot_swigregister = _quickfix.RoundLot_swigregister
RoundLot_swigregister(RoundLot)

class MinTradeVol(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MinTradeVol, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MinTradeVol, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MinTradeVol(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MinTradeVol
    __del__ = lambda self : None;
MinTradeVol_swigregister = _quickfix.MinTradeVol_swigregister
MinTradeVol_swigregister(MinTradeVol)

class MultiLegRptTypeReq(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MultiLegRptTypeReq, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MultiLegRptTypeReq, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MultiLegRptTypeReq(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MultiLegRptTypeReq
    __del__ = lambda self : None;
MultiLegRptTypeReq_swigregister = _quickfix.MultiLegRptTypeReq_swigregister
MultiLegRptTypeReq_swigregister(MultiLegRptTypeReq)

class LegPositionEffect(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegPositionEffect, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegPositionEffect, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegPositionEffect(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegPositionEffect
    __del__ = lambda self : None;
LegPositionEffect_swigregister = _quickfix.LegPositionEffect_swigregister
LegPositionEffect_swigregister(LegPositionEffect)

class LegCoveredOrUncovered(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegCoveredOrUncovered, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegCoveredOrUncovered, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegCoveredOrUncovered(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegCoveredOrUncovered
    __del__ = lambda self : None;
LegCoveredOrUncovered_swigregister = _quickfix.LegCoveredOrUncovered_swigregister
LegCoveredOrUncovered_swigregister(LegCoveredOrUncovered)

class LegPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegPrice
    __del__ = lambda self : None;
LegPrice_swigregister = _quickfix.LegPrice_swigregister
LegPrice_swigregister(LegPrice)

class TradSesStatusRejReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradSesStatusRejReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradSesStatusRejReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradSesStatusRejReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradSesStatusRejReason
    __del__ = lambda self : None;
TradSesStatusRejReason_swigregister = _quickfix.TradSesStatusRejReason_swigregister
TradSesStatusRejReason_swigregister(TradSesStatusRejReason)

class TradeRequestID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeRequestID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeRequestID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeRequestID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeRequestID
    __del__ = lambda self : None;
TradeRequestID_swigregister = _quickfix.TradeRequestID_swigregister
TradeRequestID_swigregister(TradeRequestID)

class TradeRequestType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeRequestType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeRequestType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeRequestType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeRequestType
    __del__ = lambda self : None;
TradeRequestType_swigregister = _quickfix.TradeRequestType_swigregister
TradeRequestType_swigregister(TradeRequestType)

class PreviouslyReported(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PreviouslyReported, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PreviouslyReported, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PreviouslyReported(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PreviouslyReported
    __del__ = lambda self : None;
PreviouslyReported_swigregister = _quickfix.PreviouslyReported_swigregister
PreviouslyReported_swigregister(PreviouslyReported)

class TradeReportID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeReportID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeReportID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeReportID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeReportID
    __del__ = lambda self : None;
TradeReportID_swigregister = _quickfix.TradeReportID_swigregister
TradeReportID_swigregister(TradeReportID)

class TradeReportRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeReportRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeReportRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeReportRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeReportRefID
    __del__ = lambda self : None;
TradeReportRefID_swigregister = _quickfix.TradeReportRefID_swigregister
TradeReportRefID_swigregister(TradeReportRefID)

class MatchStatus(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MatchStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MatchStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MatchStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MatchStatus
    __del__ = lambda self : None;
MatchStatus_swigregister = _quickfix.MatchStatus_swigregister
MatchStatus_swigregister(MatchStatus)

class MatchType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MatchType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MatchType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MatchType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MatchType
    __del__ = lambda self : None;
MatchType_swigregister = _quickfix.MatchType_swigregister
MatchType_swigregister(MatchType)

class OddLot(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OddLot, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OddLot, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OddLot(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OddLot
    __del__ = lambda self : None;
OddLot_swigregister = _quickfix.OddLot_swigregister
OddLot_swigregister(OddLot)

class NoClearingInstructions(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoClearingInstructions, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoClearingInstructions, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoClearingInstructions(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoClearingInstructions
    __del__ = lambda self : None;
NoClearingInstructions_swigregister = _quickfix.NoClearingInstructions_swigregister
NoClearingInstructions_swigregister(NoClearingInstructions)

class ClearingInstruction(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ClearingInstruction, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ClearingInstruction, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ClearingInstruction(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ClearingInstruction
    __del__ = lambda self : None;
ClearingInstruction_swigregister = _quickfix.ClearingInstruction_swigregister
ClearingInstruction_swigregister(ClearingInstruction)

class TradeInputSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeInputSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeInputSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeInputSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeInputSource
    __del__ = lambda self : None;
TradeInputSource_swigregister = _quickfix.TradeInputSource_swigregister
TradeInputSource_swigregister(TradeInputSource)

class TradeInputDevice(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeInputDevice, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeInputDevice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeInputDevice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeInputDevice
    __del__ = lambda self : None;
TradeInputDevice_swigregister = _quickfix.TradeInputDevice_swigregister
TradeInputDevice_swigregister(TradeInputDevice)

class NoDates(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoDates, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoDates, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoDates(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoDates
    __del__ = lambda self : None;
NoDates_swigregister = _quickfix.NoDates_swigregister
NoDates_swigregister(NoDates)

class AccountType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AccountType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AccountType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AccountType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AccountType
    __del__ = lambda self : None;
AccountType_swigregister = _quickfix.AccountType_swigregister
AccountType_swigregister(AccountType)

class CustOrderCapacity(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CustOrderCapacity, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CustOrderCapacity, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CustOrderCapacity(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CustOrderCapacity
    __del__ = lambda self : None;
CustOrderCapacity_swigregister = _quickfix.CustOrderCapacity_swigregister
CustOrderCapacity_swigregister(CustOrderCapacity)

class ClOrdLinkID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ClOrdLinkID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ClOrdLinkID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ClOrdLinkID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ClOrdLinkID
    __del__ = lambda self : None;
ClOrdLinkID_swigregister = _quickfix.ClOrdLinkID_swigregister
ClOrdLinkID_swigregister(ClOrdLinkID)

class MassStatusReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MassStatusReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MassStatusReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MassStatusReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MassStatusReqID
    __del__ = lambda self : None;
MassStatusReqID_swigregister = _quickfix.MassStatusReqID_swigregister
MassStatusReqID_swigregister(MassStatusReqID)

class MassStatusReqType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MassStatusReqType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MassStatusReqType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MassStatusReqType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MassStatusReqType
    __del__ = lambda self : None;
MassStatusReqType_swigregister = _quickfix.MassStatusReqType_swigregister
MassStatusReqType_swigregister(MassStatusReqType)

class OrigOrdModTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrigOrdModTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrigOrdModTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrigOrdModTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrigOrdModTime
    __del__ = lambda self : None;
OrigOrdModTime_swigregister = _quickfix.OrigOrdModTime_swigregister
OrigOrdModTime_swigregister(OrigOrdModTime)

class LegSettlType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSettlType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSettlType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSettlType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSettlType
    __del__ = lambda self : None;
LegSettlType_swigregister = _quickfix.LegSettlType_swigregister
LegSettlType_swigregister(LegSettlType)

class LegSettlDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSettlDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSettlDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSettlDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSettlDate
    __del__ = lambda self : None;
LegSettlDate_swigregister = _quickfix.LegSettlDate_swigregister
LegSettlDate_swigregister(LegSettlDate)

class DayBookingInst(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DayBookingInst, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DayBookingInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DayBookingInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DayBookingInst
    __del__ = lambda self : None;
DayBookingInst_swigregister = _quickfix.DayBookingInst_swigregister
DayBookingInst_swigregister(DayBookingInst)

class BookingUnit(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BookingUnit, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BookingUnit, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BookingUnit(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BookingUnit
    __del__ = lambda self : None;
BookingUnit_swigregister = _quickfix.BookingUnit_swigregister
BookingUnit_swigregister(BookingUnit)

class PreallocMethod(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PreallocMethod, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PreallocMethod, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PreallocMethod(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PreallocMethod
    __del__ = lambda self : None;
PreallocMethod_swigregister = _quickfix.PreallocMethod_swigregister
PreallocMethod_swigregister(PreallocMethod)

class UnderlyingCountryOfIssue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingCountryOfIssue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingCountryOfIssue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingCountryOfIssue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingCountryOfIssue
    __del__ = lambda self : None;
UnderlyingCountryOfIssue_swigregister = _quickfix.UnderlyingCountryOfIssue_swigregister
UnderlyingCountryOfIssue_swigregister(UnderlyingCountryOfIssue)

class UnderlyingStateOrProvinceOfIssue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingStateOrProvinceOfIssue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingStateOrProvinceOfIssue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingStateOrProvinceOfIssue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingStateOrProvinceOfIssue
    __del__ = lambda self : None;
UnderlyingStateOrProvinceOfIssue_swigregister = _quickfix.UnderlyingStateOrProvinceOfIssue_swigregister
UnderlyingStateOrProvinceOfIssue_swigregister(UnderlyingStateOrProvinceOfIssue)

class UnderlyingLocaleOfIssue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingLocaleOfIssue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingLocaleOfIssue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingLocaleOfIssue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingLocaleOfIssue
    __del__ = lambda self : None;
UnderlyingLocaleOfIssue_swigregister = _quickfix.UnderlyingLocaleOfIssue_swigregister
UnderlyingLocaleOfIssue_swigregister(UnderlyingLocaleOfIssue)

class UnderlyingInstrRegistry(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingInstrRegistry, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingInstrRegistry, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingInstrRegistry(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingInstrRegistry
    __del__ = lambda self : None;
UnderlyingInstrRegistry_swigregister = _quickfix.UnderlyingInstrRegistry_swigregister
UnderlyingInstrRegistry_swigregister(UnderlyingInstrRegistry)

class LegCountryOfIssue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegCountryOfIssue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegCountryOfIssue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegCountryOfIssue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegCountryOfIssue
    __del__ = lambda self : None;
LegCountryOfIssue_swigregister = _quickfix.LegCountryOfIssue_swigregister
LegCountryOfIssue_swigregister(LegCountryOfIssue)

class LegStateOrProvinceOfIssue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegStateOrProvinceOfIssue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegStateOrProvinceOfIssue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegStateOrProvinceOfIssue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegStateOrProvinceOfIssue
    __del__ = lambda self : None;
LegStateOrProvinceOfIssue_swigregister = _quickfix.LegStateOrProvinceOfIssue_swigregister
LegStateOrProvinceOfIssue_swigregister(LegStateOrProvinceOfIssue)

class LegLocaleOfIssue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegLocaleOfIssue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegLocaleOfIssue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegLocaleOfIssue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegLocaleOfIssue
    __del__ = lambda self : None;
LegLocaleOfIssue_swigregister = _quickfix.LegLocaleOfIssue_swigregister
LegLocaleOfIssue_swigregister(LegLocaleOfIssue)

class LegInstrRegistry(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegInstrRegistry, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegInstrRegistry, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegInstrRegistry(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegInstrRegistry
    __del__ = lambda self : None;
LegInstrRegistry_swigregister = _quickfix.LegInstrRegistry_swigregister
LegInstrRegistry_swigregister(LegInstrRegistry)

class LegSymbol(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSymbol, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSymbol, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSymbol(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSymbol
    __del__ = lambda self : None;
LegSymbol_swigregister = _quickfix.LegSymbol_swigregister
LegSymbol_swigregister(LegSymbol)

class LegSymbolSfx(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSymbolSfx, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSymbolSfx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSymbolSfx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSymbolSfx
    __del__ = lambda self : None;
LegSymbolSfx_swigregister = _quickfix.LegSymbolSfx_swigregister
LegSymbolSfx_swigregister(LegSymbolSfx)

class LegSecurityID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSecurityID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSecurityID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSecurityID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSecurityID
    __del__ = lambda self : None;
LegSecurityID_swigregister = _quickfix.LegSecurityID_swigregister
LegSecurityID_swigregister(LegSecurityID)

class LegSecurityIDSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSecurityIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSecurityIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSecurityIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSecurityIDSource
    __del__ = lambda self : None;
LegSecurityIDSource_swigregister = _quickfix.LegSecurityIDSource_swigregister
LegSecurityIDSource_swigregister(LegSecurityIDSource)

class NoLegSecurityAltID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoLegSecurityAltID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoLegSecurityAltID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoLegSecurityAltID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoLegSecurityAltID
    __del__ = lambda self : None;
NoLegSecurityAltID_swigregister = _quickfix.NoLegSecurityAltID_swigregister
NoLegSecurityAltID_swigregister(NoLegSecurityAltID)

class LegSecurityAltID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSecurityAltID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSecurityAltID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSecurityAltID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSecurityAltID
    __del__ = lambda self : None;
LegSecurityAltID_swigregister = _quickfix.LegSecurityAltID_swigregister
LegSecurityAltID_swigregister(LegSecurityAltID)

class LegSecurityAltIDSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSecurityAltIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSecurityAltIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSecurityAltIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSecurityAltIDSource
    __del__ = lambda self : None;
LegSecurityAltIDSource_swigregister = _quickfix.LegSecurityAltIDSource_swigregister
LegSecurityAltIDSource_swigregister(LegSecurityAltIDSource)

class LegProduct(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegProduct, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegProduct, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegProduct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegProduct
    __del__ = lambda self : None;
LegProduct_swigregister = _quickfix.LegProduct_swigregister
LegProduct_swigregister(LegProduct)

class LegCFICode(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegCFICode, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegCFICode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegCFICode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegCFICode
    __del__ = lambda self : None;
LegCFICode_swigregister = _quickfix.LegCFICode_swigregister
LegCFICode_swigregister(LegCFICode)

class LegSecurityType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSecurityType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSecurityType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSecurityType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSecurityType
    __del__ = lambda self : None;
LegSecurityType_swigregister = _quickfix.LegSecurityType_swigregister
LegSecurityType_swigregister(LegSecurityType)

class LegMaturityMonthYear(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegMaturityMonthYear, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegMaturityMonthYear, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegMaturityMonthYear(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegMaturityMonthYear
    __del__ = lambda self : None;
LegMaturityMonthYear_swigregister = _quickfix.LegMaturityMonthYear_swigregister
LegMaturityMonthYear_swigregister(LegMaturityMonthYear)

class LegMaturityDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegMaturityDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegMaturityDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegMaturityDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegMaturityDate
    __del__ = lambda self : None;
LegMaturityDate_swigregister = _quickfix.LegMaturityDate_swigregister
LegMaturityDate_swigregister(LegMaturityDate)

class LegStrikePrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegStrikePrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegStrikePrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegStrikePrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegStrikePrice
    __del__ = lambda self : None;
LegStrikePrice_swigregister = _quickfix.LegStrikePrice_swigregister
LegStrikePrice_swigregister(LegStrikePrice)

class LegOptAttribute(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegOptAttribute, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegOptAttribute, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegOptAttribute(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegOptAttribute
    __del__ = lambda self : None;
LegOptAttribute_swigregister = _quickfix.LegOptAttribute_swigregister
LegOptAttribute_swigregister(LegOptAttribute)

class LegContractMultiplier(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegContractMultiplier, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegContractMultiplier, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegContractMultiplier(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegContractMultiplier
    __del__ = lambda self : None;
LegContractMultiplier_swigregister = _quickfix.LegContractMultiplier_swigregister
LegContractMultiplier_swigregister(LegContractMultiplier)

class LegCouponRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegCouponRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegCouponRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegCouponRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegCouponRate
    __del__ = lambda self : None;
LegCouponRate_swigregister = _quickfix.LegCouponRate_swigregister
LegCouponRate_swigregister(LegCouponRate)

class LegSecurityExchange(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSecurityExchange, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSecurityExchange, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSecurityExchange(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSecurityExchange
    __del__ = lambda self : None;
LegSecurityExchange_swigregister = _quickfix.LegSecurityExchange_swigregister
LegSecurityExchange_swigregister(LegSecurityExchange)

class LegIssuer(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegIssuer, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegIssuer, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegIssuer(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegIssuer
    __del__ = lambda self : None;
LegIssuer_swigregister = _quickfix.LegIssuer_swigregister
LegIssuer_swigregister(LegIssuer)

class EncodedLegIssuerLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedLegIssuerLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedLegIssuerLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedLegIssuerLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedLegIssuerLen
    __del__ = lambda self : None;
EncodedLegIssuerLen_swigregister = _quickfix.EncodedLegIssuerLen_swigregister
EncodedLegIssuerLen_swigregister(EncodedLegIssuerLen)

class EncodedLegIssuer(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedLegIssuer, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedLegIssuer, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedLegIssuer(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedLegIssuer
    __del__ = lambda self : None;
EncodedLegIssuer_swigregister = _quickfix.EncodedLegIssuer_swigregister
EncodedLegIssuer_swigregister(EncodedLegIssuer)

class LegSecurityDesc(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSecurityDesc, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSecurityDesc, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSecurityDesc(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSecurityDesc
    __del__ = lambda self : None;
LegSecurityDesc_swigregister = _quickfix.LegSecurityDesc_swigregister
LegSecurityDesc_swigregister(LegSecurityDesc)

class EncodedLegSecurityDescLen(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedLegSecurityDescLen, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedLegSecurityDescLen, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedLegSecurityDescLen(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedLegSecurityDescLen
    __del__ = lambda self : None;
EncodedLegSecurityDescLen_swigregister = _quickfix.EncodedLegSecurityDescLen_swigregister
EncodedLegSecurityDescLen_swigregister(EncodedLegSecurityDescLen)

class EncodedLegSecurityDesc(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EncodedLegSecurityDesc, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EncodedLegSecurityDesc, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EncodedLegSecurityDesc(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EncodedLegSecurityDesc
    __del__ = lambda self : None;
EncodedLegSecurityDesc_swigregister = _quickfix.EncodedLegSecurityDesc_swigregister
EncodedLegSecurityDesc_swigregister(EncodedLegSecurityDesc)

class LegRatioQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegRatioQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegRatioQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegRatioQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegRatioQty
    __del__ = lambda self : None;
LegRatioQty_swigregister = _quickfix.LegRatioQty_swigregister
LegRatioQty_swigregister(LegRatioQty)

class LegSide(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSide, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSide, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSide(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSide
    __del__ = lambda self : None;
LegSide_swigregister = _quickfix.LegSide_swigregister
LegSide_swigregister(LegSide)

class TradingSessionSubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradingSessionSubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradingSessionSubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradingSessionSubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradingSessionSubID
    __del__ = lambda self : None;
TradingSessionSubID_swigregister = _quickfix.TradingSessionSubID_swigregister
TradingSessionSubID_swigregister(TradingSessionSubID)

class AllocType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocType
    __del__ = lambda self : None;
AllocType_swigregister = _quickfix.AllocType_swigregister
AllocType_swigregister(AllocType)

class NoHops(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoHops, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoHops, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoHops(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoHops
    __del__ = lambda self : None;
NoHops_swigregister = _quickfix.NoHops_swigregister
NoHops_swigregister(NoHops)

class HopCompID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, HopCompID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, HopCompID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_HopCompID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_HopCompID
    __del__ = lambda self : None;
HopCompID_swigregister = _quickfix.HopCompID_swigregister
HopCompID_swigregister(HopCompID)

class HopSendingTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, HopSendingTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, HopSendingTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_HopSendingTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_HopSendingTime
    __del__ = lambda self : None;
HopSendingTime_swigregister = _quickfix.HopSendingTime_swigregister
HopSendingTime_swigregister(HopSendingTime)

class HopRefID(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, HopRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, HopRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_HopRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_HopRefID
    __del__ = lambda self : None;
HopRefID_swigregister = _quickfix.HopRefID_swigregister
HopRefID_swigregister(HopRefID)

class MidPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MidPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MidPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MidPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MidPx
    __del__ = lambda self : None;
MidPx_swigregister = _quickfix.MidPx_swigregister
MidPx_swigregister(MidPx)

class BidYield(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidYield, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidYield, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidYield(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidYield
    __del__ = lambda self : None;
BidYield_swigregister = _quickfix.BidYield_swigregister
BidYield_swigregister(BidYield)

class MidYield(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MidYield, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MidYield, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MidYield(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MidYield
    __del__ = lambda self : None;
MidYield_swigregister = _quickfix.MidYield_swigregister
MidYield_swigregister(MidYield)

class OfferYield(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OfferYield, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OfferYield, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OfferYield(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OfferYield
    __del__ = lambda self : None;
OfferYield_swigregister = _quickfix.OfferYield_swigregister
OfferYield_swigregister(OfferYield)

class ClearingFeeIndicator(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ClearingFeeIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ClearingFeeIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ClearingFeeIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ClearingFeeIndicator
    __del__ = lambda self : None;
ClearingFeeIndicator_swigregister = _quickfix.ClearingFeeIndicator_swigregister
ClearingFeeIndicator_swigregister(ClearingFeeIndicator)

class WorkingIndicator(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, WorkingIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, WorkingIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_WorkingIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_WorkingIndicator
    __del__ = lambda self : None;
WorkingIndicator_swigregister = _quickfix.WorkingIndicator_swigregister
WorkingIndicator_swigregister(WorkingIndicator)

class LegLastPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegLastPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegLastPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegLastPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegLastPx
    __del__ = lambda self : None;
LegLastPx_swigregister = _quickfix.LegLastPx_swigregister
LegLastPx_swigregister(LegLastPx)

class PriorityIndicator(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PriorityIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PriorityIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PriorityIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PriorityIndicator
    __del__ = lambda self : None;
PriorityIndicator_swigregister = _quickfix.PriorityIndicator_swigregister
PriorityIndicator_swigregister(PriorityIndicator)

class PriceImprovement(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PriceImprovement, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PriceImprovement, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PriceImprovement(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PriceImprovement
    __del__ = lambda self : None;
PriceImprovement_swigregister = _quickfix.PriceImprovement_swigregister
PriceImprovement_swigregister(PriceImprovement)

class Price2(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Price2, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Price2, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Price2(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Price2
    __del__ = lambda self : None;
Price2_swigregister = _quickfix.Price2_swigregister
Price2_swigregister(Price2)

class LastForwardPoints2(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastForwardPoints2, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastForwardPoints2, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastForwardPoints2(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastForwardPoints2
    __del__ = lambda self : None;
LastForwardPoints2_swigregister = _quickfix.LastForwardPoints2_swigregister
LastForwardPoints2_swigregister(LastForwardPoints2)

class BidForwardPoints2(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BidForwardPoints2, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BidForwardPoints2, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BidForwardPoints2(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BidForwardPoints2
    __del__ = lambda self : None;
BidForwardPoints2_swigregister = _quickfix.BidForwardPoints2_swigregister
BidForwardPoints2_swigregister(BidForwardPoints2)

class OfferForwardPoints2(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OfferForwardPoints2, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OfferForwardPoints2, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OfferForwardPoints2(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OfferForwardPoints2
    __del__ = lambda self : None;
OfferForwardPoints2_swigregister = _quickfix.OfferForwardPoints2_swigregister
OfferForwardPoints2_swigregister(OfferForwardPoints2)

class RFQReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RFQReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RFQReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RFQReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RFQReqID
    __del__ = lambda self : None;
RFQReqID_swigregister = _quickfix.RFQReqID_swigregister
RFQReqID_swigregister(RFQReqID)

class MktBidPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MktBidPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MktBidPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MktBidPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MktBidPx
    __del__ = lambda self : None;
MktBidPx_swigregister = _quickfix.MktBidPx_swigregister
MktBidPx_swigregister(MktBidPx)

class MktOfferPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MktOfferPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MktOfferPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MktOfferPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MktOfferPx
    __del__ = lambda self : None;
MktOfferPx_swigregister = _quickfix.MktOfferPx_swigregister
MktOfferPx_swigregister(MktOfferPx)

class MinBidSize(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MinBidSize, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MinBidSize, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MinBidSize(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MinBidSize
    __del__ = lambda self : None;
MinBidSize_swigregister = _quickfix.MinBidSize_swigregister
MinBidSize_swigregister(MinBidSize)

class MinOfferSize(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MinOfferSize, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MinOfferSize, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MinOfferSize(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MinOfferSize
    __del__ = lambda self : None;
MinOfferSize_swigregister = _quickfix.MinOfferSize_swigregister
MinOfferSize_swigregister(MinOfferSize)

class QuoteStatusReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteStatusReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteStatusReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteStatusReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteStatusReqID
    __del__ = lambda self : None;
QuoteStatusReqID_swigregister = _quickfix.QuoteStatusReqID_swigregister
QuoteStatusReqID_swigregister(QuoteStatusReqID)

class LegalConfirm(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegalConfirm, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegalConfirm, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegalConfirm(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegalConfirm
    __del__ = lambda self : None;
LegalConfirm_swigregister = _quickfix.LegalConfirm_swigregister
LegalConfirm_swigregister(LegalConfirm)

class UnderlyingLastPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingLastPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingLastPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingLastPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingLastPx
    __del__ = lambda self : None;
UnderlyingLastPx_swigregister = _quickfix.UnderlyingLastPx_swigregister
UnderlyingLastPx_swigregister(UnderlyingLastPx)

class UnderlyingLastQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingLastQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingLastQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingLastQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingLastQty
    __del__ = lambda self : None;
UnderlyingLastQty_swigregister = _quickfix.UnderlyingLastQty_swigregister
UnderlyingLastQty_swigregister(UnderlyingLastQty)

class LegRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegRefID
    __del__ = lambda self : None;
LegRefID_swigregister = _quickfix.LegRefID_swigregister
LegRefID_swigregister(LegRefID)

class ContraLegRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContraLegRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContraLegRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContraLegRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContraLegRefID
    __del__ = lambda self : None;
ContraLegRefID_swigregister = _quickfix.ContraLegRefID_swigregister
ContraLegRefID_swigregister(ContraLegRefID)

class SettlCurrBidFxRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlCurrBidFxRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlCurrBidFxRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlCurrBidFxRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlCurrBidFxRate
    __del__ = lambda self : None;
SettlCurrBidFxRate_swigregister = _quickfix.SettlCurrBidFxRate_swigregister
SettlCurrBidFxRate_swigregister(SettlCurrBidFxRate)

class SettlCurrOfferFxRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlCurrOfferFxRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlCurrOfferFxRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlCurrOfferFxRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlCurrOfferFxRate
    __del__ = lambda self : None;
SettlCurrOfferFxRate_swigregister = _quickfix.SettlCurrOfferFxRate_swigregister
SettlCurrOfferFxRate_swigregister(SettlCurrOfferFxRate)

class QuoteRequestRejectReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteRequestRejectReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteRequestRejectReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteRequestRejectReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteRequestRejectReason
    __del__ = lambda self : None;
QuoteRequestRejectReason_swigregister = _quickfix.QuoteRequestRejectReason_swigregister
QuoteRequestRejectReason_swigregister(QuoteRequestRejectReason)

class SideComplianceID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SideComplianceID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SideComplianceID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SideComplianceID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SideComplianceID
    __del__ = lambda self : None;
SideComplianceID_swigregister = _quickfix.SideComplianceID_swigregister
SideComplianceID_swigregister(SideComplianceID)

class AcctIDSource(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AcctIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AcctIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AcctIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AcctIDSource
    __del__ = lambda self : None;
AcctIDSource_swigregister = _quickfix.AcctIDSource_swigregister
AcctIDSource_swigregister(AcctIDSource)

class AllocAcctIDSource(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocAcctIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocAcctIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocAcctIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocAcctIDSource
    __del__ = lambda self : None;
AllocAcctIDSource_swigregister = _quickfix.AllocAcctIDSource_swigregister
AllocAcctIDSource_swigregister(AllocAcctIDSource)

class BenchmarkPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BenchmarkPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BenchmarkPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BenchmarkPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BenchmarkPrice
    __del__ = lambda self : None;
BenchmarkPrice_swigregister = _quickfix.BenchmarkPrice_swigregister
BenchmarkPrice_swigregister(BenchmarkPrice)

class BenchmarkPriceType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BenchmarkPriceType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BenchmarkPriceType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BenchmarkPriceType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BenchmarkPriceType
    __del__ = lambda self : None;
BenchmarkPriceType_swigregister = _quickfix.BenchmarkPriceType_swigregister
BenchmarkPriceType_swigregister(BenchmarkPriceType)

class ConfirmID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ConfirmID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ConfirmID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ConfirmID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ConfirmID
    __del__ = lambda self : None;
ConfirmID_swigregister = _quickfix.ConfirmID_swigregister
ConfirmID_swigregister(ConfirmID)

class ConfirmStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ConfirmStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ConfirmStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ConfirmStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ConfirmStatus
    __del__ = lambda self : None;
ConfirmStatus_swigregister = _quickfix.ConfirmStatus_swigregister
ConfirmStatus_swigregister(ConfirmStatus)

class ConfirmTransType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ConfirmTransType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ConfirmTransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ConfirmTransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ConfirmTransType
    __del__ = lambda self : None;
ConfirmTransType_swigregister = _quickfix.ConfirmTransType_swigregister
ConfirmTransType_swigregister(ConfirmTransType)

class ContractSettlMonth(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContractSettlMonth, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContractSettlMonth, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContractSettlMonth(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContractSettlMonth
    __del__ = lambda self : None;
ContractSettlMonth_swigregister = _quickfix.ContractSettlMonth_swigregister
ContractSettlMonth_swigregister(ContractSettlMonth)

class DeliveryForm(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DeliveryForm, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DeliveryForm, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DeliveryForm(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DeliveryForm
    __del__ = lambda self : None;
DeliveryForm_swigregister = _quickfix.DeliveryForm_swigregister
DeliveryForm_swigregister(DeliveryForm)

class LastParPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastParPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastParPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastParPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastParPx
    __del__ = lambda self : None;
LastParPx_swigregister = _quickfix.LastParPx_swigregister
LastParPx_swigregister(LastParPx)

class NoLegAllocs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoLegAllocs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoLegAllocs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoLegAllocs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoLegAllocs
    __del__ = lambda self : None;
NoLegAllocs_swigregister = _quickfix.NoLegAllocs_swigregister
NoLegAllocs_swigregister(NoLegAllocs)

class LegAllocAccount(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegAllocAccount, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegAllocAccount, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegAllocAccount(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegAllocAccount
    __del__ = lambda self : None;
LegAllocAccount_swigregister = _quickfix.LegAllocAccount_swigregister
LegAllocAccount_swigregister(LegAllocAccount)

class LegIndividualAllocID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegIndividualAllocID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegIndividualAllocID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegIndividualAllocID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegIndividualAllocID
    __del__ = lambda self : None;
LegIndividualAllocID_swigregister = _quickfix.LegIndividualAllocID_swigregister
LegIndividualAllocID_swigregister(LegIndividualAllocID)

class LegAllocQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegAllocQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegAllocQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegAllocQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegAllocQty
    __del__ = lambda self : None;
LegAllocQty_swigregister = _quickfix.LegAllocQty_swigregister
LegAllocQty_swigregister(LegAllocQty)

class LegAllocAcctIDSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegAllocAcctIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegAllocAcctIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegAllocAcctIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegAllocAcctIDSource
    __del__ = lambda self : None;
LegAllocAcctIDSource_swigregister = _quickfix.LegAllocAcctIDSource_swigregister
LegAllocAcctIDSource_swigregister(LegAllocAcctIDSource)

class LegSettlCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSettlCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSettlCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSettlCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSettlCurrency
    __del__ = lambda self : None;
LegSettlCurrency_swigregister = _quickfix.LegSettlCurrency_swigregister
LegSettlCurrency_swigregister(LegSettlCurrency)

class LegBenchmarkCurveCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegBenchmarkCurveCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegBenchmarkCurveCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegBenchmarkCurveCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegBenchmarkCurveCurrency
    __del__ = lambda self : None;
LegBenchmarkCurveCurrency_swigregister = _quickfix.LegBenchmarkCurveCurrency_swigregister
LegBenchmarkCurveCurrency_swigregister(LegBenchmarkCurveCurrency)

class LegBenchmarkCurveName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegBenchmarkCurveName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegBenchmarkCurveName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegBenchmarkCurveName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegBenchmarkCurveName
    __del__ = lambda self : None;
LegBenchmarkCurveName_swigregister = _quickfix.LegBenchmarkCurveName_swigregister
LegBenchmarkCurveName_swigregister(LegBenchmarkCurveName)

class LegBenchmarkCurvePoint(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegBenchmarkCurvePoint, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegBenchmarkCurvePoint, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegBenchmarkCurvePoint(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegBenchmarkCurvePoint
    __del__ = lambda self : None;
LegBenchmarkCurvePoint_swigregister = _quickfix.LegBenchmarkCurvePoint_swigregister
LegBenchmarkCurvePoint_swigregister(LegBenchmarkCurvePoint)

class LegBenchmarkPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegBenchmarkPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegBenchmarkPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegBenchmarkPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegBenchmarkPrice
    __del__ = lambda self : None;
LegBenchmarkPrice_swigregister = _quickfix.LegBenchmarkPrice_swigregister
LegBenchmarkPrice_swigregister(LegBenchmarkPrice)

class LegBenchmarkPriceType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegBenchmarkPriceType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegBenchmarkPriceType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegBenchmarkPriceType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegBenchmarkPriceType
    __del__ = lambda self : None;
LegBenchmarkPriceType_swigregister = _quickfix.LegBenchmarkPriceType_swigregister
LegBenchmarkPriceType_swigregister(LegBenchmarkPriceType)

class LegBidPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegBidPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegBidPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegBidPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegBidPx
    __del__ = lambda self : None;
LegBidPx_swigregister = _quickfix.LegBidPx_swigregister
LegBidPx_swigregister(LegBidPx)

class LegIOIQty(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegIOIQty, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegIOIQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegIOIQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegIOIQty
    __del__ = lambda self : None;
LegIOIQty_swigregister = _quickfix.LegIOIQty_swigregister
LegIOIQty_swigregister(LegIOIQty)

class NoLegStipulations(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoLegStipulations, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoLegStipulations, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoLegStipulations(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoLegStipulations
    __del__ = lambda self : None;
NoLegStipulations_swigregister = _quickfix.NoLegStipulations_swigregister
NoLegStipulations_swigregister(NoLegStipulations)

class LegOfferPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegOfferPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegOfferPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegOfferPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegOfferPx
    __del__ = lambda self : None;
LegOfferPx_swigregister = _quickfix.LegOfferPx_swigregister
LegOfferPx_swigregister(LegOfferPx)

class LegOrderQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegOrderQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegOrderQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegOrderQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegOrderQty
    __del__ = lambda self : None;
LegOrderQty_swigregister = _quickfix.LegOrderQty_swigregister
LegOrderQty_swigregister(LegOrderQty)

class LegPriceType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegPriceType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegPriceType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegPriceType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegPriceType
    __del__ = lambda self : None;
LegPriceType_swigregister = _quickfix.LegPriceType_swigregister
LegPriceType_swigregister(LegPriceType)

class LegQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegQty
    __del__ = lambda self : None;
LegQty_swigregister = _quickfix.LegQty_swigregister
LegQty_swigregister(LegQty)

class LegStipulationType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegStipulationType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegStipulationType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegStipulationType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegStipulationType
    __del__ = lambda self : None;
LegStipulationType_swigregister = _quickfix.LegStipulationType_swigregister
LegStipulationType_swigregister(LegStipulationType)

class LegStipulationValue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegStipulationValue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegStipulationValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegStipulationValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegStipulationValue
    __del__ = lambda self : None;
LegStipulationValue_swigregister = _quickfix.LegStipulationValue_swigregister
LegStipulationValue_swigregister(LegStipulationValue)

class LegSwapType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSwapType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSwapType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSwapType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSwapType
    __del__ = lambda self : None;
LegSwapType_swigregister = _quickfix.LegSwapType_swigregister
LegSwapType_swigregister(LegSwapType)

class Pool(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Pool, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Pool, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Pool(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Pool
    __del__ = lambda self : None;
Pool_swigregister = _quickfix.Pool_swigregister
Pool_swigregister(Pool)

class QuotePriceType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuotePriceType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuotePriceType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuotePriceType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuotePriceType
    __del__ = lambda self : None;
QuotePriceType_swigregister = _quickfix.QuotePriceType_swigregister
QuotePriceType_swigregister(QuotePriceType)

class QuoteRespID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteRespID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteRespID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteRespID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteRespID
    __del__ = lambda self : None;
QuoteRespID_swigregister = _quickfix.QuoteRespID_swigregister
QuoteRespID_swigregister(QuoteRespID)

class QuoteRespType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteRespType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteRespType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteRespType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteRespType
    __del__ = lambda self : None;
QuoteRespType_swigregister = _quickfix.QuoteRespType_swigregister
QuoteRespType_swigregister(QuoteRespType)

class QuoteQualifier(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteQualifier, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteQualifier, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteQualifier(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteQualifier
    __del__ = lambda self : None;
QuoteQualifier_swigregister = _quickfix.QuoteQualifier_swigregister
QuoteQualifier_swigregister(QuoteQualifier)

class YieldRedemptionDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, YieldRedemptionDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, YieldRedemptionDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_YieldRedemptionDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_YieldRedemptionDate
    __del__ = lambda self : None;
YieldRedemptionDate_swigregister = _quickfix.YieldRedemptionDate_swigregister
YieldRedemptionDate_swigregister(YieldRedemptionDate)

class YieldRedemptionPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, YieldRedemptionPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, YieldRedemptionPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_YieldRedemptionPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_YieldRedemptionPrice
    __del__ = lambda self : None;
YieldRedemptionPrice_swigregister = _quickfix.YieldRedemptionPrice_swigregister
YieldRedemptionPrice_swigregister(YieldRedemptionPrice)

class YieldRedemptionPriceType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, YieldRedemptionPriceType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, YieldRedemptionPriceType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_YieldRedemptionPriceType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_YieldRedemptionPriceType
    __del__ = lambda self : None;
YieldRedemptionPriceType_swigregister = _quickfix.YieldRedemptionPriceType_swigregister
YieldRedemptionPriceType_swigregister(YieldRedemptionPriceType)

class BenchmarkSecurityID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BenchmarkSecurityID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BenchmarkSecurityID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BenchmarkSecurityID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BenchmarkSecurityID
    __del__ = lambda self : None;
BenchmarkSecurityID_swigregister = _quickfix.BenchmarkSecurityID_swigregister
BenchmarkSecurityID_swigregister(BenchmarkSecurityID)

class ReversalIndicator(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ReversalIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ReversalIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ReversalIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ReversalIndicator
    __del__ = lambda self : None;
ReversalIndicator_swigregister = _quickfix.ReversalIndicator_swigregister
ReversalIndicator_swigregister(ReversalIndicator)

class YieldCalcDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, YieldCalcDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, YieldCalcDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_YieldCalcDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_YieldCalcDate
    __del__ = lambda self : None;
YieldCalcDate_swigregister = _quickfix.YieldCalcDate_swigregister
YieldCalcDate_swigregister(YieldCalcDate)

class NoPositions(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoPositions, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoPositions, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoPositions(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoPositions
    __del__ = lambda self : None;
NoPositions_swigregister = _quickfix.NoPositions_swigregister
NoPositions_swigregister(NoPositions)

class PosType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosType
    __del__ = lambda self : None;
PosType_swigregister = _quickfix.PosType_swigregister
PosType_swigregister(PosType)

class LongQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LongQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LongQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LongQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LongQty
    __del__ = lambda self : None;
LongQty_swigregister = _quickfix.LongQty_swigregister
LongQty_swigregister(LongQty)

class ShortQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ShortQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ShortQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ShortQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ShortQty
    __del__ = lambda self : None;
ShortQty_swigregister = _quickfix.ShortQty_swigregister
ShortQty_swigregister(ShortQty)

class PosQtyStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosQtyStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosQtyStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosQtyStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosQtyStatus
    __del__ = lambda self : None;
PosQtyStatus_swigregister = _quickfix.PosQtyStatus_swigregister
PosQtyStatus_swigregister(PosQtyStatus)

class PosAmtType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosAmtType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosAmtType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosAmtType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosAmtType
    __del__ = lambda self : None;
PosAmtType_swigregister = _quickfix.PosAmtType_swigregister
PosAmtType_swigregister(PosAmtType)

class PosAmt(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosAmt, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosAmt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosAmt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosAmt
    __del__ = lambda self : None;
PosAmt_swigregister = _quickfix.PosAmt_swigregister
PosAmt_swigregister(PosAmt)

class PosTransType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosTransType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosTransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosTransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosTransType
    __del__ = lambda self : None;
PosTransType_swigregister = _quickfix.PosTransType_swigregister
PosTransType_swigregister(PosTransType)

class PosReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosReqID
    __del__ = lambda self : None;
PosReqID_swigregister = _quickfix.PosReqID_swigregister
PosReqID_swigregister(PosReqID)

class NoUnderlyings(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoUnderlyings, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoUnderlyings, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoUnderlyings(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoUnderlyings
    __del__ = lambda self : None;
NoUnderlyings_swigregister = _quickfix.NoUnderlyings_swigregister
NoUnderlyings_swigregister(NoUnderlyings)

class PosMaintAction(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosMaintAction, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosMaintAction, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosMaintAction(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosMaintAction
    __del__ = lambda self : None;
PosMaintAction_swigregister = _quickfix.PosMaintAction_swigregister
PosMaintAction_swigregister(PosMaintAction)

class OrigPosReqRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrigPosReqRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrigPosReqRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrigPosReqRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrigPosReqRefID
    __del__ = lambda self : None;
OrigPosReqRefID_swigregister = _quickfix.OrigPosReqRefID_swigregister
OrigPosReqRefID_swigregister(OrigPosReqRefID)

class PosMaintRptRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosMaintRptRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosMaintRptRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosMaintRptRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosMaintRptRefID
    __del__ = lambda self : None;
PosMaintRptRefID_swigregister = _quickfix.PosMaintRptRefID_swigregister
PosMaintRptRefID_swigregister(PosMaintRptRefID)

class ClearingBusinessDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ClearingBusinessDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ClearingBusinessDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ClearingBusinessDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ClearingBusinessDate
    __del__ = lambda self : None;
ClearingBusinessDate_swigregister = _quickfix.ClearingBusinessDate_swigregister
ClearingBusinessDate_swigregister(ClearingBusinessDate)

class SettlSessID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlSessID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlSessID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlSessID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlSessID
    __del__ = lambda self : None;
SettlSessID_swigregister = _quickfix.SettlSessID_swigregister
SettlSessID_swigregister(SettlSessID)

class SettlSessSubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlSessSubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlSessSubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlSessSubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlSessSubID
    __del__ = lambda self : None;
SettlSessSubID_swigregister = _quickfix.SettlSessSubID_swigregister
SettlSessSubID_swigregister(SettlSessSubID)

class AdjustmentType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AdjustmentType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AdjustmentType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AdjustmentType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AdjustmentType
    __del__ = lambda self : None;
AdjustmentType_swigregister = _quickfix.AdjustmentType_swigregister
AdjustmentType_swigregister(AdjustmentType)

class ContraryInstructionIndicator(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ContraryInstructionIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ContraryInstructionIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ContraryInstructionIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ContraryInstructionIndicator
    __del__ = lambda self : None;
ContraryInstructionIndicator_swigregister = _quickfix.ContraryInstructionIndicator_swigregister
ContraryInstructionIndicator_swigregister(ContraryInstructionIndicator)

class PriorSpreadIndicator(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PriorSpreadIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PriorSpreadIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PriorSpreadIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PriorSpreadIndicator
    __del__ = lambda self : None;
PriorSpreadIndicator_swigregister = _quickfix.PriorSpreadIndicator_swigregister
PriorSpreadIndicator_swigregister(PriorSpreadIndicator)

class PosMaintRptID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosMaintRptID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosMaintRptID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosMaintRptID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosMaintRptID
    __del__ = lambda self : None;
PosMaintRptID_swigregister = _quickfix.PosMaintRptID_swigregister
PosMaintRptID_swigregister(PosMaintRptID)

class PosMaintStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosMaintStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosMaintStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosMaintStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosMaintStatus
    __del__ = lambda self : None;
PosMaintStatus_swigregister = _quickfix.PosMaintStatus_swigregister
PosMaintStatus_swigregister(PosMaintStatus)

class PosMaintResult(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosMaintResult, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosMaintResult, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosMaintResult(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosMaintResult
    __del__ = lambda self : None;
PosMaintResult_swigregister = _quickfix.PosMaintResult_swigregister
PosMaintResult_swigregister(PosMaintResult)

class PosReqType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosReqType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosReqType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosReqType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosReqType
    __del__ = lambda self : None;
PosReqType_swigregister = _quickfix.PosReqType_swigregister
PosReqType_swigregister(PosReqType)

class ResponseTransportType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ResponseTransportType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ResponseTransportType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ResponseTransportType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ResponseTransportType
    __del__ = lambda self : None;
ResponseTransportType_swigregister = _quickfix.ResponseTransportType_swigregister
ResponseTransportType_swigregister(ResponseTransportType)

class ResponseDestination(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ResponseDestination, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ResponseDestination, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ResponseDestination(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ResponseDestination
    __del__ = lambda self : None;
ResponseDestination_swigregister = _quickfix.ResponseDestination_swigregister
ResponseDestination_swigregister(ResponseDestination)

class TotalNumPosReports(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotalNumPosReports, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotalNumPosReports, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotalNumPosReports(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotalNumPosReports
    __del__ = lambda self : None;
TotalNumPosReports_swigregister = _quickfix.TotalNumPosReports_swigregister
TotalNumPosReports_swigregister(TotalNumPosReports)

class PosReqResult(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosReqResult, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosReqResult, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosReqResult(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosReqResult
    __del__ = lambda self : None;
PosReqResult_swigregister = _quickfix.PosReqResult_swigregister
PosReqResult_swigregister(PosReqResult)

class PosReqStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PosReqStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PosReqStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PosReqStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PosReqStatus
    __del__ = lambda self : None;
PosReqStatus_swigregister = _quickfix.PosReqStatus_swigregister
PosReqStatus_swigregister(PosReqStatus)

class SettlPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlPrice
    __del__ = lambda self : None;
SettlPrice_swigregister = _quickfix.SettlPrice_swigregister
SettlPrice_swigregister(SettlPrice)

class SettlPriceType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlPriceType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlPriceType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlPriceType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlPriceType
    __del__ = lambda self : None;
SettlPriceType_swigregister = _quickfix.SettlPriceType_swigregister
SettlPriceType_swigregister(SettlPriceType)

class UnderlyingSettlPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSettlPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSettlPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSettlPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSettlPrice
    __del__ = lambda self : None;
UnderlyingSettlPrice_swigregister = _quickfix.UnderlyingSettlPrice_swigregister
UnderlyingSettlPrice_swigregister(UnderlyingSettlPrice)

class UnderlyingSettlPriceType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSettlPriceType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSettlPriceType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSettlPriceType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSettlPriceType
    __del__ = lambda self : None;
UnderlyingSettlPriceType_swigregister = _quickfix.UnderlyingSettlPriceType_swigregister
UnderlyingSettlPriceType_swigregister(UnderlyingSettlPriceType)

class PriorSettlPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PriorSettlPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PriorSettlPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PriorSettlPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PriorSettlPrice
    __del__ = lambda self : None;
PriorSettlPrice_swigregister = _quickfix.PriorSettlPrice_swigregister
PriorSettlPrice_swigregister(PriorSettlPrice)

class NoQuoteQualifiers(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoQuoteQualifiers, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoQuoteQualifiers, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoQuoteQualifiers(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoQuoteQualifiers
    __del__ = lambda self : None;
NoQuoteQualifiers_swigregister = _quickfix.NoQuoteQualifiers_swigregister
NoQuoteQualifiers_swigregister(NoQuoteQualifiers)

class AllocSettlCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocSettlCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocSettlCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocSettlCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocSettlCurrency
    __del__ = lambda self : None;
AllocSettlCurrency_swigregister = _quickfix.AllocSettlCurrency_swigregister
AllocSettlCurrency_swigregister(AllocSettlCurrency)

class AllocSettlCurrAmt(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocSettlCurrAmt, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocSettlCurrAmt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocSettlCurrAmt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocSettlCurrAmt
    __del__ = lambda self : None;
AllocSettlCurrAmt_swigregister = _quickfix.AllocSettlCurrAmt_swigregister
AllocSettlCurrAmt_swigregister(AllocSettlCurrAmt)

class InterestAtMaturity(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, InterestAtMaturity, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, InterestAtMaturity, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_InterestAtMaturity(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_InterestAtMaturity
    __del__ = lambda self : None;
InterestAtMaturity_swigregister = _quickfix.InterestAtMaturity_swigregister
InterestAtMaturity_swigregister(InterestAtMaturity)

class LegDatedDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegDatedDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegDatedDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegDatedDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegDatedDate
    __del__ = lambda self : None;
LegDatedDate_swigregister = _quickfix.LegDatedDate_swigregister
LegDatedDate_swigregister(LegDatedDate)

class LegPool(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegPool, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegPool, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegPool(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegPool
    __del__ = lambda self : None;
LegPool_swigregister = _quickfix.LegPool_swigregister
LegPool_swigregister(LegPool)

class AllocInterestAtMaturity(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocInterestAtMaturity, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocInterestAtMaturity, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocInterestAtMaturity(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocInterestAtMaturity
    __del__ = lambda self : None;
AllocInterestAtMaturity_swigregister = _quickfix.AllocInterestAtMaturity_swigregister
AllocInterestAtMaturity_swigregister(AllocInterestAtMaturity)

class AllocAccruedInterestAmt(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocAccruedInterestAmt, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocAccruedInterestAmt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocAccruedInterestAmt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocAccruedInterestAmt
    __del__ = lambda self : None;
AllocAccruedInterestAmt_swigregister = _quickfix.AllocAccruedInterestAmt_swigregister
AllocAccruedInterestAmt_swigregister(AllocAccruedInterestAmt)

class DeliveryDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DeliveryDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DeliveryDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DeliveryDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DeliveryDate
    __del__ = lambda self : None;
DeliveryDate_swigregister = _quickfix.DeliveryDate_swigregister
DeliveryDate_swigregister(DeliveryDate)

class AssignmentMethod(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AssignmentMethod, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AssignmentMethod, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AssignmentMethod(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AssignmentMethod
    __del__ = lambda self : None;
AssignmentMethod_swigregister = _quickfix.AssignmentMethod_swigregister
AssignmentMethod_swigregister(AssignmentMethod)

class AssignmentUnit(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AssignmentUnit, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AssignmentUnit, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AssignmentUnit(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AssignmentUnit
    __del__ = lambda self : None;
AssignmentUnit_swigregister = _quickfix.AssignmentUnit_swigregister
AssignmentUnit_swigregister(AssignmentUnit)

class OpenInterest(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OpenInterest, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OpenInterest, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OpenInterest(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OpenInterest
    __del__ = lambda self : None;
OpenInterest_swigregister = _quickfix.OpenInterest_swigregister
OpenInterest_swigregister(OpenInterest)

class ExerciseMethod(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExerciseMethod, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExerciseMethod, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExerciseMethod(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExerciseMethod
    __del__ = lambda self : None;
ExerciseMethod_swigregister = _quickfix.ExerciseMethod_swigregister
ExerciseMethod_swigregister(ExerciseMethod)

class TotNumTradeReports(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotNumTradeReports, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotNumTradeReports, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotNumTradeReports(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotNumTradeReports
    __del__ = lambda self : None;
TotNumTradeReports_swigregister = _quickfix.TotNumTradeReports_swigregister
TotNumTradeReports_swigregister(TotNumTradeReports)

class TradeRequestResult(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeRequestResult, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeRequestResult, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeRequestResult(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeRequestResult
    __del__ = lambda self : None;
TradeRequestResult_swigregister = _quickfix.TradeRequestResult_swigregister
TradeRequestResult_swigregister(TradeRequestResult)

class TradeRequestStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeRequestStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeRequestStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeRequestStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeRequestStatus
    __del__ = lambda self : None;
TradeRequestStatus_swigregister = _quickfix.TradeRequestStatus_swigregister
TradeRequestStatus_swigregister(TradeRequestStatus)

class TradeReportRejectReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeReportRejectReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeReportRejectReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeReportRejectReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeReportRejectReason
    __del__ = lambda self : None;
TradeReportRejectReason_swigregister = _quickfix.TradeReportRejectReason_swigregister
TradeReportRejectReason_swigregister(TradeReportRejectReason)

class SideMultiLegReportingType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SideMultiLegReportingType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SideMultiLegReportingType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SideMultiLegReportingType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SideMultiLegReportingType
    __del__ = lambda self : None;
SideMultiLegReportingType_swigregister = _quickfix.SideMultiLegReportingType_swigregister
SideMultiLegReportingType_swigregister(SideMultiLegReportingType)

class NoPosAmt(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoPosAmt, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoPosAmt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoPosAmt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoPosAmt
    __del__ = lambda self : None;
NoPosAmt_swigregister = _quickfix.NoPosAmt_swigregister
NoPosAmt_swigregister(NoPosAmt)

class AutoAcceptIndicator(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AutoAcceptIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AutoAcceptIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AutoAcceptIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AutoAcceptIndicator
    __del__ = lambda self : None;
AutoAcceptIndicator_swigregister = _quickfix.AutoAcceptIndicator_swigregister
AutoAcceptIndicator_swigregister(AutoAcceptIndicator)

class AllocReportID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocReportID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocReportID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocReportID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocReportID
    __del__ = lambda self : None;
AllocReportID_swigregister = _quickfix.AllocReportID_swigregister
AllocReportID_swigregister(AllocReportID)

class NoNested2PartyIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoNested2PartyIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoNested2PartyIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoNested2PartyIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoNested2PartyIDs
    __del__ = lambda self : None;
NoNested2PartyIDs_swigregister = _quickfix.NoNested2PartyIDs_swigregister
NoNested2PartyIDs_swigregister(NoNested2PartyIDs)

class Nested2PartyID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Nested2PartyID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Nested2PartyID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Nested2PartyID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Nested2PartyID
    __del__ = lambda self : None;
Nested2PartyID_swigregister = _quickfix.Nested2PartyID_swigregister
Nested2PartyID_swigregister(Nested2PartyID)

class Nested2PartyIDSource(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Nested2PartyIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Nested2PartyIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Nested2PartyIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Nested2PartyIDSource
    __del__ = lambda self : None;
Nested2PartyIDSource_swigregister = _quickfix.Nested2PartyIDSource_swigregister
Nested2PartyIDSource_swigregister(Nested2PartyIDSource)

class Nested2PartyRole(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Nested2PartyRole, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Nested2PartyRole, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Nested2PartyRole(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Nested2PartyRole
    __del__ = lambda self : None;
Nested2PartyRole_swigregister = _quickfix.Nested2PartyRole_swigregister
Nested2PartyRole_swigregister(Nested2PartyRole)

class Nested2PartySubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Nested2PartySubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Nested2PartySubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Nested2PartySubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Nested2PartySubID
    __del__ = lambda self : None;
Nested2PartySubID_swigregister = _quickfix.Nested2PartySubID_swigregister
Nested2PartySubID_swigregister(Nested2PartySubID)

class BenchmarkSecurityIDSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BenchmarkSecurityIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BenchmarkSecurityIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BenchmarkSecurityIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BenchmarkSecurityIDSource
    __del__ = lambda self : None;
BenchmarkSecurityIDSource_swigregister = _quickfix.BenchmarkSecurityIDSource_swigregister
BenchmarkSecurityIDSource_swigregister(BenchmarkSecurityIDSource)

class SecuritySubType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecuritySubType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecuritySubType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecuritySubType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecuritySubType
    __del__ = lambda self : None;
SecuritySubType_swigregister = _quickfix.SecuritySubType_swigregister
SecuritySubType_swigregister(SecuritySubType)

class UnderlyingSecuritySubType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingSecuritySubType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingSecuritySubType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingSecuritySubType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingSecuritySubType
    __del__ = lambda self : None;
UnderlyingSecuritySubType_swigregister = _quickfix.UnderlyingSecuritySubType_swigregister
UnderlyingSecuritySubType_swigregister(UnderlyingSecuritySubType)

class LegSecuritySubType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSecuritySubType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSecuritySubType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSecuritySubType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSecuritySubType
    __del__ = lambda self : None;
LegSecuritySubType_swigregister = _quickfix.LegSecuritySubType_swigregister
LegSecuritySubType_swigregister(LegSecuritySubType)

class AllowableOneSidednessPct(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllowableOneSidednessPct, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllowableOneSidednessPct, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllowableOneSidednessPct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllowableOneSidednessPct
    __del__ = lambda self : None;
AllowableOneSidednessPct_swigregister = _quickfix.AllowableOneSidednessPct_swigregister
AllowableOneSidednessPct_swigregister(AllowableOneSidednessPct)

class AllowableOneSidednessValue(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllowableOneSidednessValue, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllowableOneSidednessValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllowableOneSidednessValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllowableOneSidednessValue
    __del__ = lambda self : None;
AllowableOneSidednessValue_swigregister = _quickfix.AllowableOneSidednessValue_swigregister
AllowableOneSidednessValue_swigregister(AllowableOneSidednessValue)

class AllowableOneSidednessCurr(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllowableOneSidednessCurr, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllowableOneSidednessCurr, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllowableOneSidednessCurr(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllowableOneSidednessCurr
    __del__ = lambda self : None;
AllowableOneSidednessCurr_swigregister = _quickfix.AllowableOneSidednessCurr_swigregister
AllowableOneSidednessCurr_swigregister(AllowableOneSidednessCurr)

class NoTrdRegTimestamps(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoTrdRegTimestamps, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoTrdRegTimestamps, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoTrdRegTimestamps(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoTrdRegTimestamps
    __del__ = lambda self : None;
NoTrdRegTimestamps_swigregister = _quickfix.NoTrdRegTimestamps_swigregister
NoTrdRegTimestamps_swigregister(NoTrdRegTimestamps)

class TrdRegTimestamp(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TrdRegTimestamp, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TrdRegTimestamp, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TrdRegTimestamp(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TrdRegTimestamp
    __del__ = lambda self : None;
TrdRegTimestamp_swigregister = _quickfix.TrdRegTimestamp_swigregister
TrdRegTimestamp_swigregister(TrdRegTimestamp)

class TrdRegTimestampType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TrdRegTimestampType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TrdRegTimestampType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TrdRegTimestampType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TrdRegTimestampType
    __del__ = lambda self : None;
TrdRegTimestampType_swigregister = _quickfix.TrdRegTimestampType_swigregister
TrdRegTimestampType_swigregister(TrdRegTimestampType)

class TrdRegTimestampOrigin(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TrdRegTimestampOrigin, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TrdRegTimestampOrigin, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TrdRegTimestampOrigin(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TrdRegTimestampOrigin
    __del__ = lambda self : None;
TrdRegTimestampOrigin_swigregister = _quickfix.TrdRegTimestampOrigin_swigregister
TrdRegTimestampOrigin_swigregister(TrdRegTimestampOrigin)

class ConfirmRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ConfirmRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ConfirmRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ConfirmRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ConfirmRefID
    __del__ = lambda self : None;
ConfirmRefID_swigregister = _quickfix.ConfirmRefID_swigregister
ConfirmRefID_swigregister(ConfirmRefID)

class ConfirmType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ConfirmType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ConfirmType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ConfirmType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ConfirmType
    __del__ = lambda self : None;
ConfirmType_swigregister = _quickfix.ConfirmType_swigregister
ConfirmType_swigregister(ConfirmType)

class ConfirmRejReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ConfirmRejReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ConfirmRejReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ConfirmRejReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ConfirmRejReason
    __del__ = lambda self : None;
ConfirmRejReason_swigregister = _quickfix.ConfirmRejReason_swigregister
ConfirmRejReason_swigregister(ConfirmRejReason)

class BookingType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BookingType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BookingType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BookingType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BookingType
    __del__ = lambda self : None;
BookingType_swigregister = _quickfix.BookingType_swigregister
BookingType_swigregister(BookingType)

class IndividualAllocRejCode(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IndividualAllocRejCode, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IndividualAllocRejCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IndividualAllocRejCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IndividualAllocRejCode
    __del__ = lambda self : None;
IndividualAllocRejCode_swigregister = _quickfix.IndividualAllocRejCode_swigregister
IndividualAllocRejCode_swigregister(IndividualAllocRejCode)

class SettlInstMsgID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlInstMsgID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlInstMsgID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlInstMsgID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlInstMsgID
    __del__ = lambda self : None;
SettlInstMsgID_swigregister = _quickfix.SettlInstMsgID_swigregister
SettlInstMsgID_swigregister(SettlInstMsgID)

class NoSettlInst(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoSettlInst, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoSettlInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoSettlInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoSettlInst
    __del__ = lambda self : None;
NoSettlInst_swigregister = _quickfix.NoSettlInst_swigregister
NoSettlInst_swigregister(NoSettlInst)

class LastUpdateTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastUpdateTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastUpdateTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastUpdateTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastUpdateTime
    __del__ = lambda self : None;
LastUpdateTime_swigregister = _quickfix.LastUpdateTime_swigregister
LastUpdateTime_swigregister(LastUpdateTime)

class AllocSettlInstType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocSettlInstType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocSettlInstType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocSettlInstType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocSettlInstType
    __del__ = lambda self : None;
AllocSettlInstType_swigregister = _quickfix.AllocSettlInstType_swigregister
AllocSettlInstType_swigregister(AllocSettlInstType)

class NoSettlPartyIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoSettlPartyIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoSettlPartyIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoSettlPartyIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoSettlPartyIDs
    __del__ = lambda self : None;
NoSettlPartyIDs_swigregister = _quickfix.NoSettlPartyIDs_swigregister
NoSettlPartyIDs_swigregister(NoSettlPartyIDs)

class SettlPartyID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlPartyID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlPartyID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlPartyID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlPartyID
    __del__ = lambda self : None;
SettlPartyID_swigregister = _quickfix.SettlPartyID_swigregister
SettlPartyID_swigregister(SettlPartyID)

class SettlPartyIDSource(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlPartyIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlPartyIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlPartyIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlPartyIDSource
    __del__ = lambda self : None;
SettlPartyIDSource_swigregister = _quickfix.SettlPartyIDSource_swigregister
SettlPartyIDSource_swigregister(SettlPartyIDSource)

class SettlPartyRole(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlPartyRole, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlPartyRole, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlPartyRole(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlPartyRole
    __del__ = lambda self : None;
SettlPartyRole_swigregister = _quickfix.SettlPartyRole_swigregister
SettlPartyRole_swigregister(SettlPartyRole)

class SettlPartySubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlPartySubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlPartySubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlPartySubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlPartySubID
    __del__ = lambda self : None;
SettlPartySubID_swigregister = _quickfix.SettlPartySubID_swigregister
SettlPartySubID_swigregister(SettlPartySubID)

class SettlPartySubIDType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlPartySubIDType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlPartySubIDType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlPartySubIDType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlPartySubIDType
    __del__ = lambda self : None;
SettlPartySubIDType_swigregister = _quickfix.SettlPartySubIDType_swigregister
SettlPartySubIDType_swigregister(SettlPartySubIDType)

class DlvyInstType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DlvyInstType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DlvyInstType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DlvyInstType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DlvyInstType
    __del__ = lambda self : None;
DlvyInstType_swigregister = _quickfix.DlvyInstType_swigregister
DlvyInstType_swigregister(DlvyInstType)

class TerminationType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TerminationType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TerminationType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TerminationType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TerminationType
    __del__ = lambda self : None;
TerminationType_swigregister = _quickfix.TerminationType_swigregister
TerminationType_swigregister(TerminationType)

class NextExpectedMsgSeqNum(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NextExpectedMsgSeqNum, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NextExpectedMsgSeqNum, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NextExpectedMsgSeqNum(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NextExpectedMsgSeqNum
    __del__ = lambda self : None;
NextExpectedMsgSeqNum_swigregister = _quickfix.NextExpectedMsgSeqNum_swigregister
NextExpectedMsgSeqNum_swigregister(NextExpectedMsgSeqNum)

class OrdStatusReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrdStatusReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrdStatusReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrdStatusReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrdStatusReqID
    __del__ = lambda self : None;
OrdStatusReqID_swigregister = _quickfix.OrdStatusReqID_swigregister
OrdStatusReqID_swigregister(OrdStatusReqID)

class SettlInstReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlInstReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlInstReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlInstReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlInstReqID
    __del__ = lambda self : None;
SettlInstReqID_swigregister = _quickfix.SettlInstReqID_swigregister
SettlInstReqID_swigregister(SettlInstReqID)

class SettlInstReqRejCode(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlInstReqRejCode, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlInstReqRejCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlInstReqRejCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlInstReqRejCode
    __del__ = lambda self : None;
SettlInstReqRejCode_swigregister = _quickfix.SettlInstReqRejCode_swigregister
SettlInstReqRejCode_swigregister(SettlInstReqRejCode)

class SecondaryAllocID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecondaryAllocID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecondaryAllocID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecondaryAllocID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecondaryAllocID
    __del__ = lambda self : None;
SecondaryAllocID_swigregister = _quickfix.SecondaryAllocID_swigregister
SecondaryAllocID_swigregister(SecondaryAllocID)

class AllocReportType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocReportType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocReportType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocReportType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocReportType
    __del__ = lambda self : None;
AllocReportType_swigregister = _quickfix.AllocReportType_swigregister
AllocReportType_swigregister(AllocReportType)

class AllocReportRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocReportRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocReportRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocReportRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocReportRefID
    __del__ = lambda self : None;
AllocReportRefID_swigregister = _quickfix.AllocReportRefID_swigregister
AllocReportRefID_swigregister(AllocReportRefID)

class AllocCancReplaceReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocCancReplaceReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocCancReplaceReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocCancReplaceReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocCancReplaceReason
    __del__ = lambda self : None;
AllocCancReplaceReason_swigregister = _quickfix.AllocCancReplaceReason_swigregister
AllocCancReplaceReason_swigregister(AllocCancReplaceReason)

class CopyMsgIndicator(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CopyMsgIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CopyMsgIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CopyMsgIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CopyMsgIndicator
    __del__ = lambda self : None;
CopyMsgIndicator_swigregister = _quickfix.CopyMsgIndicator_swigregister
CopyMsgIndicator_swigregister(CopyMsgIndicator)

class AllocAccountType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocAccountType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocAccountType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocAccountType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocAccountType
    __del__ = lambda self : None;
AllocAccountType_swigregister = _quickfix.AllocAccountType_swigregister
AllocAccountType_swigregister(AllocAccountType)

class OrderAvgPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrderAvgPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrderAvgPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrderAvgPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrderAvgPx
    __del__ = lambda self : None;
OrderAvgPx_swigregister = _quickfix.OrderAvgPx_swigregister
OrderAvgPx_swigregister(OrderAvgPx)

class OrderBookingQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrderBookingQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrderBookingQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrderBookingQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrderBookingQty
    __del__ = lambda self : None;
OrderBookingQty_swigregister = _quickfix.OrderBookingQty_swigregister
OrderBookingQty_swigregister(OrderBookingQty)

class NoSettlPartySubIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoSettlPartySubIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoSettlPartySubIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoSettlPartySubIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoSettlPartySubIDs
    __del__ = lambda self : None;
NoSettlPartySubIDs_swigregister = _quickfix.NoSettlPartySubIDs_swigregister
NoSettlPartySubIDs_swigregister(NoSettlPartySubIDs)

class NoPartySubIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoPartySubIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoPartySubIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoPartySubIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoPartySubIDs
    __del__ = lambda self : None;
NoPartySubIDs_swigregister = _quickfix.NoPartySubIDs_swigregister
NoPartySubIDs_swigregister(NoPartySubIDs)

class PartySubIDType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PartySubIDType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PartySubIDType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PartySubIDType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PartySubIDType
    __del__ = lambda self : None;
PartySubIDType_swigregister = _quickfix.PartySubIDType_swigregister
PartySubIDType_swigregister(PartySubIDType)

class NoNestedPartySubIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoNestedPartySubIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoNestedPartySubIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoNestedPartySubIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoNestedPartySubIDs
    __del__ = lambda self : None;
NoNestedPartySubIDs_swigregister = _quickfix.NoNestedPartySubIDs_swigregister
NoNestedPartySubIDs_swigregister(NoNestedPartySubIDs)

class NestedPartySubIDType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NestedPartySubIDType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NestedPartySubIDType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NestedPartySubIDType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NestedPartySubIDType
    __del__ = lambda self : None;
NestedPartySubIDType_swigregister = _quickfix.NestedPartySubIDType_swigregister
NestedPartySubIDType_swigregister(NestedPartySubIDType)

class NoNested2PartySubIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoNested2PartySubIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoNested2PartySubIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoNested2PartySubIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoNested2PartySubIDs
    __del__ = lambda self : None;
NoNested2PartySubIDs_swigregister = _quickfix.NoNested2PartySubIDs_swigregister
NoNested2PartySubIDs_swigregister(NoNested2PartySubIDs)

class Nested2PartySubIDType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Nested2PartySubIDType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Nested2PartySubIDType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Nested2PartySubIDType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Nested2PartySubIDType
    __del__ = lambda self : None;
Nested2PartySubIDType_swigregister = _quickfix.Nested2PartySubIDType_swigregister
Nested2PartySubIDType_swigregister(Nested2PartySubIDType)

class AllocIntermedReqType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocIntermedReqType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocIntermedReqType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocIntermedReqType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocIntermedReqType
    __del__ = lambda self : None;
AllocIntermedReqType_swigregister = _quickfix.AllocIntermedReqType_swigregister
AllocIntermedReqType_swigregister(AllocIntermedReqType)

class UnderlyingPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingPx
    __del__ = lambda self : None;
UnderlyingPx_swigregister = _quickfix.UnderlyingPx_swigregister
UnderlyingPx_swigregister(UnderlyingPx)

class PriceDelta(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PriceDelta, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PriceDelta, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PriceDelta(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PriceDelta
    __del__ = lambda self : None;
PriceDelta_swigregister = _quickfix.PriceDelta_swigregister
PriceDelta_swigregister(PriceDelta)

class ApplQueueMax(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ApplQueueMax, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ApplQueueMax, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ApplQueueMax(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ApplQueueMax
    __del__ = lambda self : None;
ApplQueueMax_swigregister = _quickfix.ApplQueueMax_swigregister
ApplQueueMax_swigregister(ApplQueueMax)

class ApplQueueDepth(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ApplQueueDepth, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ApplQueueDepth, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ApplQueueDepth(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ApplQueueDepth
    __del__ = lambda self : None;
ApplQueueDepth_swigregister = _quickfix.ApplQueueDepth_swigregister
ApplQueueDepth_swigregister(ApplQueueDepth)

class ApplQueueResolution(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ApplQueueResolution, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ApplQueueResolution, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ApplQueueResolution(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ApplQueueResolution
    __del__ = lambda self : None;
ApplQueueResolution_swigregister = _quickfix.ApplQueueResolution_swigregister
ApplQueueResolution_swigregister(ApplQueueResolution)

class ApplQueueAction(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ApplQueueAction, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ApplQueueAction, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ApplQueueAction(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ApplQueueAction
    __del__ = lambda self : None;
ApplQueueAction_swigregister = _quickfix.ApplQueueAction_swigregister
ApplQueueAction_swigregister(ApplQueueAction)

class NoAltMDSource(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoAltMDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoAltMDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoAltMDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoAltMDSource
    __del__ = lambda self : None;
NoAltMDSource_swigregister = _quickfix.NoAltMDSource_swigregister
NoAltMDSource_swigregister(NoAltMDSource)

class AltMDSourceID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AltMDSourceID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AltMDSourceID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AltMDSourceID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AltMDSourceID
    __del__ = lambda self : None;
AltMDSourceID_swigregister = _quickfix.AltMDSourceID_swigregister
AltMDSourceID_swigregister(AltMDSourceID)

class SecondaryTradeReportID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecondaryTradeReportID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecondaryTradeReportID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecondaryTradeReportID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecondaryTradeReportID
    __del__ = lambda self : None;
SecondaryTradeReportID_swigregister = _quickfix.SecondaryTradeReportID_swigregister
SecondaryTradeReportID_swigregister(SecondaryTradeReportID)

class AvgPxIndicator(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AvgPxIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AvgPxIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AvgPxIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AvgPxIndicator
    __del__ = lambda self : None;
AvgPxIndicator_swigregister = _quickfix.AvgPxIndicator_swigregister
AvgPxIndicator_swigregister(AvgPxIndicator)

class TradeLinkID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeLinkID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeLinkID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeLinkID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeLinkID
    __del__ = lambda self : None;
TradeLinkID_swigregister = _quickfix.TradeLinkID_swigregister
TradeLinkID_swigregister(TradeLinkID)

class OrderInputDevice(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrderInputDevice, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrderInputDevice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrderInputDevice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrderInputDevice
    __del__ = lambda self : None;
OrderInputDevice_swigregister = _quickfix.OrderInputDevice_swigregister
OrderInputDevice_swigregister(OrderInputDevice)

class UnderlyingTradingSessionID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingTradingSessionID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingTradingSessionID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingTradingSessionID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingTradingSessionID
    __del__ = lambda self : None;
UnderlyingTradingSessionID_swigregister = _quickfix.UnderlyingTradingSessionID_swigregister
UnderlyingTradingSessionID_swigregister(UnderlyingTradingSessionID)

class UnderlyingTradingSessionSubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingTradingSessionSubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingTradingSessionSubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingTradingSessionSubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingTradingSessionSubID
    __del__ = lambda self : None;
UnderlyingTradingSessionSubID_swigregister = _quickfix.UnderlyingTradingSessionSubID_swigregister
UnderlyingTradingSessionSubID_swigregister(UnderlyingTradingSessionSubID)

class TradeLegRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeLegRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeLegRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeLegRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeLegRefID
    __del__ = lambda self : None;
TradeLegRefID_swigregister = _quickfix.TradeLegRefID_swigregister
TradeLegRefID_swigregister(TradeLegRefID)

class ExchangeRule(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExchangeRule, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExchangeRule, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExchangeRule(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExchangeRule
    __del__ = lambda self : None;
ExchangeRule_swigregister = _quickfix.ExchangeRule_swigregister
ExchangeRule_swigregister(ExchangeRule)

class TradeAllocIndicator(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeAllocIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeAllocIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeAllocIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeAllocIndicator
    __del__ = lambda self : None;
TradeAllocIndicator_swigregister = _quickfix.TradeAllocIndicator_swigregister
TradeAllocIndicator_swigregister(TradeAllocIndicator)

class ExpirationCycle(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExpirationCycle, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExpirationCycle, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExpirationCycle(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExpirationCycle
    __del__ = lambda self : None;
ExpirationCycle_swigregister = _quickfix.ExpirationCycle_swigregister
ExpirationCycle_swigregister(ExpirationCycle)

class TrdType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TrdType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TrdType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TrdType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TrdType
    __del__ = lambda self : None;
TrdType_swigregister = _quickfix.TrdType_swigregister
TrdType_swigregister(TrdType)

class TrdSubType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TrdSubType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TrdSubType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TrdSubType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TrdSubType
    __del__ = lambda self : None;
TrdSubType_swigregister = _quickfix.TrdSubType_swigregister
TrdSubType_swigregister(TrdSubType)

class TransferReason(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TransferReason, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TransferReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TransferReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TransferReason
    __del__ = lambda self : None;
TransferReason_swigregister = _quickfix.TransferReason_swigregister
TransferReason_swigregister(TransferReason)

class AsgnReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AsgnReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AsgnReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AsgnReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AsgnReqID
    __del__ = lambda self : None;
AsgnReqID_swigregister = _quickfix.AsgnReqID_swigregister
AsgnReqID_swigregister(AsgnReqID)

class TotNumAssignmentReports(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotNumAssignmentReports, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotNumAssignmentReports, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotNumAssignmentReports(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotNumAssignmentReports
    __del__ = lambda self : None;
TotNumAssignmentReports_swigregister = _quickfix.TotNumAssignmentReports_swigregister
TotNumAssignmentReports_swigregister(TotNumAssignmentReports)

class AsgnRptID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AsgnRptID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AsgnRptID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AsgnRptID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AsgnRptID
    __del__ = lambda self : None;
AsgnRptID_swigregister = _quickfix.AsgnRptID_swigregister
AsgnRptID_swigregister(AsgnRptID)

class ThresholdAmount(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ThresholdAmount, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ThresholdAmount, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ThresholdAmount(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ThresholdAmount
    __del__ = lambda self : None;
ThresholdAmount_swigregister = _quickfix.ThresholdAmount_swigregister
ThresholdAmount_swigregister(ThresholdAmount)

class PegMoveType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PegMoveType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PegMoveType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PegMoveType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PegMoveType
    __del__ = lambda self : None;
PegMoveType_swigregister = _quickfix.PegMoveType_swigregister
PegMoveType_swigregister(PegMoveType)

class PegOffsetType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PegOffsetType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PegOffsetType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PegOffsetType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PegOffsetType
    __del__ = lambda self : None;
PegOffsetType_swigregister = _quickfix.PegOffsetType_swigregister
PegOffsetType_swigregister(PegOffsetType)

class PegLimitType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PegLimitType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PegLimitType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PegLimitType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PegLimitType
    __del__ = lambda self : None;
PegLimitType_swigregister = _quickfix.PegLimitType_swigregister
PegLimitType_swigregister(PegLimitType)

class PegRoundDirection(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PegRoundDirection, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PegRoundDirection, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PegRoundDirection(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PegRoundDirection
    __del__ = lambda self : None;
PegRoundDirection_swigregister = _quickfix.PegRoundDirection_swigregister
PegRoundDirection_swigregister(PegRoundDirection)

class PeggedPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PeggedPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PeggedPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PeggedPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PeggedPrice
    __del__ = lambda self : None;
PeggedPrice_swigregister = _quickfix.PeggedPrice_swigregister
PeggedPrice_swigregister(PeggedPrice)

class PegScope(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PegScope, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PegScope, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PegScope(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PegScope
    __del__ = lambda self : None;
PegScope_swigregister = _quickfix.PegScope_swigregister
PegScope_swigregister(PegScope)

class DiscretionMoveType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DiscretionMoveType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DiscretionMoveType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DiscretionMoveType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DiscretionMoveType
    __del__ = lambda self : None;
DiscretionMoveType_swigregister = _quickfix.DiscretionMoveType_swigregister
DiscretionMoveType_swigregister(DiscretionMoveType)

class DiscretionOffsetType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DiscretionOffsetType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DiscretionOffsetType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DiscretionOffsetType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DiscretionOffsetType
    __del__ = lambda self : None;
DiscretionOffsetType_swigregister = _quickfix.DiscretionOffsetType_swigregister
DiscretionOffsetType_swigregister(DiscretionOffsetType)

class DiscretionLimitType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DiscretionLimitType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DiscretionLimitType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DiscretionLimitType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DiscretionLimitType
    __del__ = lambda self : None;
DiscretionLimitType_swigregister = _quickfix.DiscretionLimitType_swigregister
DiscretionLimitType_swigregister(DiscretionLimitType)

class DiscretionRoundDirection(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DiscretionRoundDirection, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DiscretionRoundDirection, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DiscretionRoundDirection(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DiscretionRoundDirection
    __del__ = lambda self : None;
DiscretionRoundDirection_swigregister = _quickfix.DiscretionRoundDirection_swigregister
DiscretionRoundDirection_swigregister(DiscretionRoundDirection)

class DiscretionPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DiscretionPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DiscretionPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DiscretionPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DiscretionPrice
    __del__ = lambda self : None;
DiscretionPrice_swigregister = _quickfix.DiscretionPrice_swigregister
DiscretionPrice_swigregister(DiscretionPrice)

class DiscretionScope(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DiscretionScope, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DiscretionScope, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DiscretionScope(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DiscretionScope
    __del__ = lambda self : None;
DiscretionScope_swigregister = _quickfix.DiscretionScope_swigregister
DiscretionScope_swigregister(DiscretionScope)

class TargetStrategy(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TargetStrategy, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TargetStrategy, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TargetStrategy(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TargetStrategy
    __del__ = lambda self : None;
TargetStrategy_swigregister = _quickfix.TargetStrategy_swigregister
TargetStrategy_swigregister(TargetStrategy)

class TargetStrategyParameters(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TargetStrategyParameters, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TargetStrategyParameters, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TargetStrategyParameters(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TargetStrategyParameters
    __del__ = lambda self : None;
TargetStrategyParameters_swigregister = _quickfix.TargetStrategyParameters_swigregister
TargetStrategyParameters_swigregister(TargetStrategyParameters)

class ParticipationRate(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ParticipationRate, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ParticipationRate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ParticipationRate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ParticipationRate
    __del__ = lambda self : None;
ParticipationRate_swigregister = _quickfix.ParticipationRate_swigregister
ParticipationRate_swigregister(ParticipationRate)

class TargetStrategyPerformance(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TargetStrategyPerformance, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TargetStrategyPerformance, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TargetStrategyPerformance(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TargetStrategyPerformance
    __del__ = lambda self : None;
TargetStrategyPerformance_swigregister = _quickfix.TargetStrategyPerformance_swigregister
TargetStrategyPerformance_swigregister(TargetStrategyPerformance)

class LastLiquidityInd(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastLiquidityInd, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastLiquidityInd, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastLiquidityInd(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastLiquidityInd
    __del__ = lambda self : None;
LastLiquidityInd_swigregister = _quickfix.LastLiquidityInd_swigregister
LastLiquidityInd_swigregister(LastLiquidityInd)

class PublishTrdIndicator(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PublishTrdIndicator, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PublishTrdIndicator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PublishTrdIndicator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PublishTrdIndicator
    __del__ = lambda self : None;
PublishTrdIndicator_swigregister = _quickfix.PublishTrdIndicator_swigregister
PublishTrdIndicator_swigregister(PublishTrdIndicator)

class ShortSaleReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ShortSaleReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ShortSaleReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ShortSaleReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ShortSaleReason
    __del__ = lambda self : None;
ShortSaleReason_swigregister = _quickfix.ShortSaleReason_swigregister
ShortSaleReason_swigregister(ShortSaleReason)

class QtyType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QtyType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QtyType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QtyType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QtyType
    __del__ = lambda self : None;
QtyType_swigregister = _quickfix.QtyType_swigregister
QtyType_swigregister(QtyType)

class SecondaryTrdType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecondaryTrdType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecondaryTrdType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecondaryTrdType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecondaryTrdType
    __del__ = lambda self : None;
SecondaryTrdType_swigregister = _quickfix.SecondaryTrdType_swigregister
SecondaryTrdType_swigregister(SecondaryTrdType)

class TradeReportType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeReportType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeReportType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeReportType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeReportType
    __del__ = lambda self : None;
TradeReportType_swigregister = _quickfix.TradeReportType_swigregister
TradeReportType_swigregister(TradeReportType)

class AllocNoOrdersType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocNoOrdersType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocNoOrdersType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocNoOrdersType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocNoOrdersType
    __del__ = lambda self : None;
AllocNoOrdersType_swigregister = _quickfix.AllocNoOrdersType_swigregister
AllocNoOrdersType_swigregister(AllocNoOrdersType)

class SharedCommission(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SharedCommission, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SharedCommission, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SharedCommission(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SharedCommission
    __del__ = lambda self : None;
SharedCommission_swigregister = _quickfix.SharedCommission_swigregister
SharedCommission_swigregister(SharedCommission)

class ConfirmReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ConfirmReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ConfirmReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ConfirmReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ConfirmReqID
    __del__ = lambda self : None;
ConfirmReqID_swigregister = _quickfix.ConfirmReqID_swigregister
ConfirmReqID_swigregister(ConfirmReqID)

class AvgParPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AvgParPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AvgParPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AvgParPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AvgParPx
    __del__ = lambda self : None;
AvgParPx_swigregister = _quickfix.AvgParPx_swigregister
AvgParPx_swigregister(AvgParPx)

class ReportedPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ReportedPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ReportedPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ReportedPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ReportedPx
    __del__ = lambda self : None;
ReportedPx_swigregister = _quickfix.ReportedPx_swigregister
ReportedPx_swigregister(ReportedPx)

class NoCapacities(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoCapacities, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoCapacities, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoCapacities(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoCapacities
    __del__ = lambda self : None;
NoCapacities_swigregister = _quickfix.NoCapacities_swigregister
NoCapacities_swigregister(NoCapacities)

class OrderCapacityQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OrderCapacityQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OrderCapacityQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OrderCapacityQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OrderCapacityQty
    __del__ = lambda self : None;
OrderCapacityQty_swigregister = _quickfix.OrderCapacityQty_swigregister
OrderCapacityQty_swigregister(OrderCapacityQty)

class NoEvents(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoEvents, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoEvents, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoEvents(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoEvents
    __del__ = lambda self : None;
NoEvents_swigregister = _quickfix.NoEvents_swigregister
NoEvents_swigregister(NoEvents)

class EventType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EventType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EventType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EventType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EventType
    __del__ = lambda self : None;
EventType_swigregister = _quickfix.EventType_swigregister
EventType_swigregister(EventType)

class EventDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EventDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EventDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EventDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EventDate
    __del__ = lambda self : None;
EventDate_swigregister = _quickfix.EventDate_swigregister
EventDate_swigregister(EventDate)

class EventPx(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EventPx, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EventPx, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EventPx(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EventPx
    __del__ = lambda self : None;
EventPx_swigregister = _quickfix.EventPx_swigregister
EventPx_swigregister(EventPx)

class EventText(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EventText, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EventText, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EventText(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EventText
    __del__ = lambda self : None;
EventText_swigregister = _quickfix.EventText_swigregister
EventText_swigregister(EventText)

class PctAtRisk(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PctAtRisk, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PctAtRisk, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PctAtRisk(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PctAtRisk
    __del__ = lambda self : None;
PctAtRisk_swigregister = _quickfix.PctAtRisk_swigregister
PctAtRisk_swigregister(PctAtRisk)

class NoInstrAttrib(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoInstrAttrib, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoInstrAttrib, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoInstrAttrib(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoInstrAttrib
    __del__ = lambda self : None;
NoInstrAttrib_swigregister = _quickfix.NoInstrAttrib_swigregister
NoInstrAttrib_swigregister(NoInstrAttrib)

class InstrAttribType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, InstrAttribType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, InstrAttribType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_InstrAttribType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_InstrAttribType
    __del__ = lambda self : None;
InstrAttribType_swigregister = _quickfix.InstrAttribType_swigregister
InstrAttribType_swigregister(InstrAttribType)

class InstrAttribValue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, InstrAttribValue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, InstrAttribValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_InstrAttribValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_InstrAttribValue
    __del__ = lambda self : None;
InstrAttribValue_swigregister = _quickfix.InstrAttribValue_swigregister
InstrAttribValue_swigregister(InstrAttribValue)

class DatedDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DatedDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DatedDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DatedDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DatedDate
    __del__ = lambda self : None;
DatedDate_swigregister = _quickfix.DatedDate_swigregister
DatedDate_swigregister(DatedDate)

class InterestAccrualDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, InterestAccrualDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, InterestAccrualDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_InterestAccrualDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_InterestAccrualDate
    __del__ = lambda self : None;
InterestAccrualDate_swigregister = _quickfix.InterestAccrualDate_swigregister
InterestAccrualDate_swigregister(InterestAccrualDate)

class CPProgram(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CPProgram, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CPProgram, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CPProgram(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CPProgram
    __del__ = lambda self : None;
CPProgram_swigregister = _quickfix.CPProgram_swigregister
CPProgram_swigregister(CPProgram)

class CPRegType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CPRegType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CPRegType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CPRegType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CPRegType
    __del__ = lambda self : None;
CPRegType_swigregister = _quickfix.CPRegType_swigregister
CPRegType_swigregister(CPRegType)

class UnderlyingCPProgram(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingCPProgram, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingCPProgram, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingCPProgram(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingCPProgram
    __del__ = lambda self : None;
UnderlyingCPProgram_swigregister = _quickfix.UnderlyingCPProgram_swigregister
UnderlyingCPProgram_swigregister(UnderlyingCPProgram)

class UnderlyingCPRegType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingCPRegType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingCPRegType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingCPRegType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingCPRegType
    __del__ = lambda self : None;
UnderlyingCPRegType_swigregister = _quickfix.UnderlyingCPRegType_swigregister
UnderlyingCPRegType_swigregister(UnderlyingCPRegType)

class UnderlyingQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingQty
    __del__ = lambda self : None;
UnderlyingQty_swigregister = _quickfix.UnderlyingQty_swigregister
UnderlyingQty_swigregister(UnderlyingQty)

class TrdMatchID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TrdMatchID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TrdMatchID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TrdMatchID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TrdMatchID
    __del__ = lambda self : None;
TrdMatchID_swigregister = _quickfix.TrdMatchID_swigregister
TrdMatchID_swigregister(TrdMatchID)

class SecondaryTradeReportRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecondaryTradeReportRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecondaryTradeReportRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecondaryTradeReportRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecondaryTradeReportRefID
    __del__ = lambda self : None;
SecondaryTradeReportRefID_swigregister = _quickfix.SecondaryTradeReportRefID_swigregister
SecondaryTradeReportRefID_swigregister(SecondaryTradeReportRefID)

class UnderlyingDirtyPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingDirtyPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingDirtyPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingDirtyPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingDirtyPrice
    __del__ = lambda self : None;
UnderlyingDirtyPrice_swigregister = _quickfix.UnderlyingDirtyPrice_swigregister
UnderlyingDirtyPrice_swigregister(UnderlyingDirtyPrice)

class UnderlyingEndPrice(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingEndPrice, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingEndPrice, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingEndPrice(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingEndPrice
    __del__ = lambda self : None;
UnderlyingEndPrice_swigregister = _quickfix.UnderlyingEndPrice_swigregister
UnderlyingEndPrice_swigregister(UnderlyingEndPrice)

class UnderlyingStartValue(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingStartValue, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingStartValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingStartValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingStartValue
    __del__ = lambda self : None;
UnderlyingStartValue_swigregister = _quickfix.UnderlyingStartValue_swigregister
UnderlyingStartValue_swigregister(UnderlyingStartValue)

class UnderlyingCurrentValue(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingCurrentValue, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingCurrentValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingCurrentValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingCurrentValue
    __del__ = lambda self : None;
UnderlyingCurrentValue_swigregister = _quickfix.UnderlyingCurrentValue_swigregister
UnderlyingCurrentValue_swigregister(UnderlyingCurrentValue)

class UnderlyingEndValue(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingEndValue, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingEndValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingEndValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingEndValue
    __del__ = lambda self : None;
UnderlyingEndValue_swigregister = _quickfix.UnderlyingEndValue_swigregister
UnderlyingEndValue_swigregister(UnderlyingEndValue)

class NoUnderlyingStips(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoUnderlyingStips, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoUnderlyingStips, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoUnderlyingStips(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoUnderlyingStips
    __del__ = lambda self : None;
NoUnderlyingStips_swigregister = _quickfix.NoUnderlyingStips_swigregister
NoUnderlyingStips_swigregister(NoUnderlyingStips)

class UnderlyingStipType(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingStipType, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingStipType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingStipType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingStipType
    __del__ = lambda self : None;
UnderlyingStipType_swigregister = _quickfix.UnderlyingStipType_swigregister
UnderlyingStipType_swigregister(UnderlyingStipType)

class UnderlyingStipValue(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingStipValue, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingStipValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingStipValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingStipValue
    __del__ = lambda self : None;
UnderlyingStipValue_swigregister = _quickfix.UnderlyingStipValue_swigregister
UnderlyingStipValue_swigregister(UnderlyingStipValue)

class MaturityNetMoney(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MaturityNetMoney, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MaturityNetMoney, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MaturityNetMoney(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MaturityNetMoney
    __del__ = lambda self : None;
MaturityNetMoney_swigregister = _quickfix.MaturityNetMoney_swigregister
MaturityNetMoney_swigregister(MaturityNetMoney)

class MiscFeeBasis(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MiscFeeBasis, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MiscFeeBasis, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MiscFeeBasis(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MiscFeeBasis
    __del__ = lambda self : None;
MiscFeeBasis_swigregister = _quickfix.MiscFeeBasis_swigregister
MiscFeeBasis_swigregister(MiscFeeBasis)

class TotNoAllocs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotNoAllocs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotNoAllocs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotNoAllocs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotNoAllocs
    __del__ = lambda self : None;
TotNoAllocs_swigregister = _quickfix.TotNoAllocs_swigregister
TotNoAllocs_swigregister(TotNoAllocs)

class LastFragment(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastFragment, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastFragment, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastFragment(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastFragment
    __del__ = lambda self : None;
LastFragment_swigregister = _quickfix.LastFragment_swigregister
LastFragment_swigregister(LastFragment)

class CollReqID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollReqID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollReqID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollReqID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollReqID
    __del__ = lambda self : None;
CollReqID_swigregister = _quickfix.CollReqID_swigregister
CollReqID_swigregister(CollReqID)

class CollAsgnReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollAsgnReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollAsgnReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollAsgnReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollAsgnReason
    __del__ = lambda self : None;
CollAsgnReason_swigregister = _quickfix.CollAsgnReason_swigregister
CollAsgnReason_swigregister(CollAsgnReason)

class CollInquiryQualifier(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollInquiryQualifier, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollInquiryQualifier, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollInquiryQualifier(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollInquiryQualifier
    __del__ = lambda self : None;
CollInquiryQualifier_swigregister = _quickfix.CollInquiryQualifier_swigregister
CollInquiryQualifier_swigregister(CollInquiryQualifier)

class NoTrades(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoTrades, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoTrades, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoTrades(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoTrades
    __del__ = lambda self : None;
NoTrades_swigregister = _quickfix.NoTrades_swigregister
NoTrades_swigregister(NoTrades)

class MarginRatio(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MarginRatio, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MarginRatio, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MarginRatio(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MarginRatio
    __del__ = lambda self : None;
MarginRatio_swigregister = _quickfix.MarginRatio_swigregister
MarginRatio_swigregister(MarginRatio)

class MarginExcess(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MarginExcess, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MarginExcess, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MarginExcess(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MarginExcess
    __del__ = lambda self : None;
MarginExcess_swigregister = _quickfix.MarginExcess_swigregister
MarginExcess_swigregister(MarginExcess)

class TotalNetValue(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotalNetValue, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotalNetValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotalNetValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotalNetValue
    __del__ = lambda self : None;
TotalNetValue_swigregister = _quickfix.TotalNetValue_swigregister
TotalNetValue_swigregister(TotalNetValue)

class CashOutstanding(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashOutstanding, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashOutstanding, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashOutstanding(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashOutstanding
    __del__ = lambda self : None;
CashOutstanding_swigregister = _quickfix.CashOutstanding_swigregister
CashOutstanding_swigregister(CashOutstanding)

class CollAsgnID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollAsgnID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollAsgnID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollAsgnID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollAsgnID
    __del__ = lambda self : None;
CollAsgnID_swigregister = _quickfix.CollAsgnID_swigregister
CollAsgnID_swigregister(CollAsgnID)

class CollAsgnTransType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollAsgnTransType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollAsgnTransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollAsgnTransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollAsgnTransType
    __del__ = lambda self : None;
CollAsgnTransType_swigregister = _quickfix.CollAsgnTransType_swigregister
CollAsgnTransType_swigregister(CollAsgnTransType)

class CollRespID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollRespID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollRespID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollRespID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollRespID
    __del__ = lambda self : None;
CollRespID_swigregister = _quickfix.CollRespID_swigregister
CollRespID_swigregister(CollRespID)

class CollAsgnRespType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollAsgnRespType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollAsgnRespType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollAsgnRespType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollAsgnRespType
    __del__ = lambda self : None;
CollAsgnRespType_swigregister = _quickfix.CollAsgnRespType_swigregister
CollAsgnRespType_swigregister(CollAsgnRespType)

class CollAsgnRejectReason(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollAsgnRejectReason, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollAsgnRejectReason, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollAsgnRejectReason(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollAsgnRejectReason
    __del__ = lambda self : None;
CollAsgnRejectReason_swigregister = _quickfix.CollAsgnRejectReason_swigregister
CollAsgnRejectReason_swigregister(CollAsgnRejectReason)

class CollAsgnRefID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollAsgnRefID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollAsgnRefID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollAsgnRefID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollAsgnRefID
    __del__ = lambda self : None;
CollAsgnRefID_swigregister = _quickfix.CollAsgnRefID_swigregister
CollAsgnRefID_swigregister(CollAsgnRefID)

class CollRptID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollRptID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollRptID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollRptID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollRptID
    __del__ = lambda self : None;
CollRptID_swigregister = _quickfix.CollRptID_swigregister
CollRptID_swigregister(CollRptID)

class CollInquiryID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollInquiryID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollInquiryID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollInquiryID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollInquiryID
    __del__ = lambda self : None;
CollInquiryID_swigregister = _quickfix.CollInquiryID_swigregister
CollInquiryID_swigregister(CollInquiryID)

class CollStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollStatus
    __del__ = lambda self : None;
CollStatus_swigregister = _quickfix.CollStatus_swigregister
CollStatus_swigregister(CollStatus)

class TotNumReports(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotNumReports, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotNumReports, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotNumReports(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotNumReports
    __del__ = lambda self : None;
TotNumReports_swigregister = _quickfix.TotNumReports_swigregister
TotNumReports_swigregister(TotNumReports)

class LastRptRequested(BoolField):
    __swig_setmethods__ = {}
    for _s in [BoolField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastRptRequested, name, value)
    __swig_getmethods__ = {}
    for _s in [BoolField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastRptRequested, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastRptRequested(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastRptRequested
    __del__ = lambda self : None;
LastRptRequested_swigregister = _quickfix.LastRptRequested_swigregister
LastRptRequested_swigregister(LastRptRequested)

class AgreementDesc(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AgreementDesc, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AgreementDesc, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AgreementDesc(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AgreementDesc
    __del__ = lambda self : None;
AgreementDesc_swigregister = _quickfix.AgreementDesc_swigregister
AgreementDesc_swigregister(AgreementDesc)

class AgreementID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AgreementID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AgreementID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AgreementID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AgreementID
    __del__ = lambda self : None;
AgreementID_swigregister = _quickfix.AgreementID_swigregister
AgreementID_swigregister(AgreementID)

class AgreementDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AgreementDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AgreementDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AgreementDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AgreementDate
    __del__ = lambda self : None;
AgreementDate_swigregister = _quickfix.AgreementDate_swigregister
AgreementDate_swigregister(AgreementDate)

class StartDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StartDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StartDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StartDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StartDate
    __del__ = lambda self : None;
StartDate_swigregister = _quickfix.StartDate_swigregister
StartDate_swigregister(StartDate)

class EndDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EndDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EndDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EndDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EndDate
    __del__ = lambda self : None;
EndDate_swigregister = _quickfix.EndDate_swigregister
EndDate_swigregister(EndDate)

class AgreementCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AgreementCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AgreementCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AgreementCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AgreementCurrency
    __del__ = lambda self : None;
AgreementCurrency_swigregister = _quickfix.AgreementCurrency_swigregister
AgreementCurrency_swigregister(AgreementCurrency)

class DeliveryType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DeliveryType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DeliveryType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DeliveryType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DeliveryType
    __del__ = lambda self : None;
DeliveryType_swigregister = _quickfix.DeliveryType_swigregister
DeliveryType_swigregister(DeliveryType)

class EndAccruedInterestAmt(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EndAccruedInterestAmt, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EndAccruedInterestAmt, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EndAccruedInterestAmt(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EndAccruedInterestAmt
    __del__ = lambda self : None;
EndAccruedInterestAmt_swigregister = _quickfix.EndAccruedInterestAmt_swigregister
EndAccruedInterestAmt_swigregister(EndAccruedInterestAmt)

class StartCash(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StartCash, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StartCash, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StartCash(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StartCash
    __del__ = lambda self : None;
StartCash_swigregister = _quickfix.StartCash_swigregister
StartCash_swigregister(StartCash)

class EndCash(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, EndCash, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, EndCash, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_EndCash(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_EndCash
    __del__ = lambda self : None;
EndCash_swigregister = _quickfix.EndCash_swigregister
EndCash_swigregister(EndCash)

class UserRequestID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UserRequestID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UserRequestID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UserRequestID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UserRequestID
    __del__ = lambda self : None;
UserRequestID_swigregister = _quickfix.UserRequestID_swigregister
UserRequestID_swigregister(UserRequestID)

class UserRequestType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UserRequestType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UserRequestType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UserRequestType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UserRequestType
    __del__ = lambda self : None;
UserRequestType_swigregister = _quickfix.UserRequestType_swigregister
UserRequestType_swigregister(UserRequestType)

class NewPassword(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NewPassword, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NewPassword, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NewPassword(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NewPassword
    __del__ = lambda self : None;
NewPassword_swigregister = _quickfix.NewPassword_swigregister
NewPassword_swigregister(NewPassword)

class UserStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UserStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UserStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UserStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UserStatus
    __del__ = lambda self : None;
UserStatus_swigregister = _quickfix.UserStatus_swigregister
UserStatus_swigregister(UserStatus)

class UserStatusText(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UserStatusText, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UserStatusText, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UserStatusText(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UserStatusText
    __del__ = lambda self : None;
UserStatusText_swigregister = _quickfix.UserStatusText_swigregister
UserStatusText_swigregister(UserStatusText)

class StatusValue(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StatusValue, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StatusValue, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StatusValue(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StatusValue
    __del__ = lambda self : None;
StatusValue_swigregister = _quickfix.StatusValue_swigregister
StatusValue_swigregister(StatusValue)

class StatusText(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StatusText, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StatusText, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StatusText(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StatusText
    __del__ = lambda self : None;
StatusText_swigregister = _quickfix.StatusText_swigregister
StatusText_swigregister(StatusText)

class RefCompID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RefCompID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RefCompID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RefCompID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RefCompID
    __del__ = lambda self : None;
RefCompID_swigregister = _quickfix.RefCompID_swigregister
RefCompID_swigregister(RefCompID)

class RefSubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RefSubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RefSubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RefSubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RefSubID
    __del__ = lambda self : None;
RefSubID_swigregister = _quickfix.RefSubID_swigregister
RefSubID_swigregister(RefSubID)

class NetworkResponseID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NetworkResponseID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NetworkResponseID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NetworkResponseID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NetworkResponseID
    __del__ = lambda self : None;
NetworkResponseID_swigregister = _quickfix.NetworkResponseID_swigregister
NetworkResponseID_swigregister(NetworkResponseID)

class NetworkRequestID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NetworkRequestID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NetworkRequestID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NetworkRequestID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NetworkRequestID
    __del__ = lambda self : None;
NetworkRequestID_swigregister = _quickfix.NetworkRequestID_swigregister
NetworkRequestID_swigregister(NetworkRequestID)

class LastNetworkResponseID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastNetworkResponseID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastNetworkResponseID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastNetworkResponseID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastNetworkResponseID
    __del__ = lambda self : None;
LastNetworkResponseID_swigregister = _quickfix.LastNetworkResponseID_swigregister
LastNetworkResponseID_swigregister(LastNetworkResponseID)

class NetworkRequestType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NetworkRequestType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NetworkRequestType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NetworkRequestType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NetworkRequestType
    __del__ = lambda self : None;
NetworkRequestType_swigregister = _quickfix.NetworkRequestType_swigregister
NetworkRequestType_swigregister(NetworkRequestType)

class NoCompIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoCompIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoCompIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoCompIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoCompIDs
    __del__ = lambda self : None;
NoCompIDs_swigregister = _quickfix.NoCompIDs_swigregister
NoCompIDs_swigregister(NoCompIDs)

class NetworkStatusResponseType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NetworkStatusResponseType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NetworkStatusResponseType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NetworkStatusResponseType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NetworkStatusResponseType
    __del__ = lambda self : None;
NetworkStatusResponseType_swigregister = _quickfix.NetworkStatusResponseType_swigregister
NetworkStatusResponseType_swigregister(NetworkStatusResponseType)

class NoCollInquiryQualifier(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoCollInquiryQualifier, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoCollInquiryQualifier, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoCollInquiryQualifier(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoCollInquiryQualifier
    __del__ = lambda self : None;
NoCollInquiryQualifier_swigregister = _quickfix.NoCollInquiryQualifier_swigregister
NoCollInquiryQualifier_swigregister(NoCollInquiryQualifier)

class TrdRptStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TrdRptStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TrdRptStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TrdRptStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TrdRptStatus
    __del__ = lambda self : None;
TrdRptStatus_swigregister = _quickfix.TrdRptStatus_swigregister
TrdRptStatus_swigregister(TrdRptStatus)

class AffirmStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AffirmStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AffirmStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AffirmStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AffirmStatus
    __del__ = lambda self : None;
AffirmStatus_swigregister = _quickfix.AffirmStatus_swigregister
AffirmStatus_swigregister(AffirmStatus)

class UnderlyingStrikeCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingStrikeCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingStrikeCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingStrikeCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingStrikeCurrency
    __del__ = lambda self : None;
UnderlyingStrikeCurrency_swigregister = _quickfix.UnderlyingStrikeCurrency_swigregister
UnderlyingStrikeCurrency_swigregister(UnderlyingStrikeCurrency)

class LegStrikeCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegStrikeCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegStrikeCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegStrikeCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegStrikeCurrency
    __del__ = lambda self : None;
LegStrikeCurrency_swigregister = _quickfix.LegStrikeCurrency_swigregister
LegStrikeCurrency_swigregister(LegStrikeCurrency)

class TimeBracket(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TimeBracket, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TimeBracket, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TimeBracket(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TimeBracket
    __del__ = lambda self : None;
TimeBracket_swigregister = _quickfix.TimeBracket_swigregister
TimeBracket_swigregister(TimeBracket)

class CollAction(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollAction, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollAction, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollAction(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollAction
    __del__ = lambda self : None;
CollAction_swigregister = _quickfix.CollAction_swigregister
CollAction_swigregister(CollAction)

class CollInquiryStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollInquiryStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollInquiryStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollInquiryStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollInquiryStatus
    __del__ = lambda self : None;
CollInquiryStatus_swigregister = _quickfix.CollInquiryStatus_swigregister
CollInquiryStatus_swigregister(CollInquiryStatus)

class CollInquiryResult(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CollInquiryResult, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CollInquiryResult, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CollInquiryResult(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CollInquiryResult
    __del__ = lambda self : None;
CollInquiryResult_swigregister = _quickfix.CollInquiryResult_swigregister
CollInquiryResult_swigregister(CollInquiryResult)

class StrikeCurrency(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, StrikeCurrency, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, StrikeCurrency, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_StrikeCurrency(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_StrikeCurrency
    __del__ = lambda self : None;
StrikeCurrency_swigregister = _quickfix.StrikeCurrency_swigregister
StrikeCurrency_swigregister(StrikeCurrency)

class NoNested3PartyIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoNested3PartyIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoNested3PartyIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoNested3PartyIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoNested3PartyIDs
    __del__ = lambda self : None;
NoNested3PartyIDs_swigregister = _quickfix.NoNested3PartyIDs_swigregister
NoNested3PartyIDs_swigregister(NoNested3PartyIDs)

class Nested3PartyID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Nested3PartyID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Nested3PartyID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Nested3PartyID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Nested3PartyID
    __del__ = lambda self : None;
Nested3PartyID_swigregister = _quickfix.Nested3PartyID_swigregister
Nested3PartyID_swigregister(Nested3PartyID)

class Nested3PartyIDSource(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Nested3PartyIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Nested3PartyIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Nested3PartyIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Nested3PartyIDSource
    __del__ = lambda self : None;
Nested3PartyIDSource_swigregister = _quickfix.Nested3PartyIDSource_swigregister
Nested3PartyIDSource_swigregister(Nested3PartyIDSource)

class Nested3PartyRole(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Nested3PartyRole, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Nested3PartyRole, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Nested3PartyRole(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Nested3PartyRole
    __del__ = lambda self : None;
Nested3PartyRole_swigregister = _quickfix.Nested3PartyRole_swigregister
Nested3PartyRole_swigregister(Nested3PartyRole)

class NoNested3PartySubIDs(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NoNested3PartySubIDs, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NoNested3PartySubIDs, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NoNested3PartySubIDs(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NoNested3PartySubIDs
    __del__ = lambda self : None;
NoNested3PartySubIDs_swigregister = _quickfix.NoNested3PartySubIDs_swigregister
NoNested3PartySubIDs_swigregister(NoNested3PartySubIDs)

class Nested3PartySubID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Nested3PartySubID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Nested3PartySubID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Nested3PartySubID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Nested3PartySubID
    __del__ = lambda self : None;
Nested3PartySubID_swigregister = _quickfix.Nested3PartySubID_swigregister
Nested3PartySubID_swigregister(Nested3PartySubID)

class Nested3PartySubIDType(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Nested3PartySubIDType, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Nested3PartySubIDType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Nested3PartySubIDType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Nested3PartySubIDType
    __del__ = lambda self : None;
Nested3PartySubIDType_swigregister = _quickfix.Nested3PartySubIDType_swigregister
Nested3PartySubIDType_swigregister(Nested3PartySubIDType)

class LegContractSettlMonth(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegContractSettlMonth, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegContractSettlMonth, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegContractSettlMonth(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegContractSettlMonth
    __del__ = lambda self : None;
LegContractSettlMonth_swigregister = _quickfix.LegContractSettlMonth_swigregister
LegContractSettlMonth_swigregister(LegContractSettlMonth)

class LegInterestAccrualDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegInterestAccrualDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegInterestAccrualDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegInterestAccrualDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegInterestAccrualDate
    __del__ = lambda self : None;
LegInterestAccrualDate_swigregister = _quickfix.LegInterestAccrualDate_swigregister
LegInterestAccrualDate_swigregister(LegInterestAccrualDate)

class ExecTransType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExecTransType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExecTransType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExecTransType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExecTransType
    __del__ = lambda self : None;
ExecTransType_swigregister = _quickfix.ExecTransType_swigregister
ExecTransType_swigregister(ExecTransType)

class IDSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IDSource
    __del__ = lambda self : None;
IDSource_swigregister = _quickfix.IDSource_swigregister
IDSource_swigregister(IDSource)

class IOIOthSvc(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IOIOthSvc, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IOIOthSvc, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IOIOthSvc(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IOIOthSvc
    __del__ = lambda self : None;
IOIOthSvc_swigregister = _quickfix.IOIOthSvc_swigregister
IOIOthSvc_swigregister(IOIOthSvc)

class IOIShares(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, IOIShares, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, IOIShares, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_IOIShares(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_IOIShares
    __del__ = lambda self : None;
IOIShares_swigregister = _quickfix.IOIShares_swigregister
IOIShares_swigregister(IOIShares)

class LastShares(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LastShares, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LastShares, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LastShares(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LastShares
    __del__ = lambda self : None;
LastShares_swigregister = _quickfix.LastShares_swigregister
LastShares_swigregister(LastShares)

class RelatdSym(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RelatdSym, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RelatdSym, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RelatdSym(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RelatdSym
    __del__ = lambda self : None;
RelatdSym_swigregister = _quickfix.RelatdSym_swigregister
RelatdSym_swigregister(RelatdSym)

class Rule80A(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Rule80A, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Rule80A, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Rule80A(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Rule80A
    __del__ = lambda self : None;
Rule80A_swigregister = _quickfix.Rule80A_swigregister
Rule80A_swigregister(Rule80A)

class Shares(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Shares, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Shares, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Shares(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Shares
    __del__ = lambda self : None;
Shares_swigregister = _quickfix.Shares_swigregister
Shares_swigregister(Shares)

class SettlmntTyp(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlmntTyp, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlmntTyp, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlmntTyp(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlmntTyp
    __del__ = lambda self : None;
SettlmntTyp_swigregister = _quickfix.SettlmntTyp_swigregister
SettlmntTyp_swigregister(SettlmntTyp)

class FutSettDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FutSettDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FutSettDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FutSettDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_FutSettDate
    __del__ = lambda self : None;
FutSettDate_swigregister = _quickfix.FutSettDate_swigregister
FutSettDate_swigregister(FutSettDate)

class AvgPrxPrecision(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AvgPrxPrecision, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AvgPrxPrecision, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AvgPrxPrecision(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AvgPrxPrecision
    __del__ = lambda self : None;
AvgPrxPrecision_swigregister = _quickfix.AvgPrxPrecision_swigregister
AvgPrxPrecision_swigregister(AvgPrxPrecision)

class ExecBroker(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ExecBroker, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ExecBroker, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ExecBroker(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ExecBroker
    __del__ = lambda self : None;
ExecBroker_swigregister = _quickfix.ExecBroker_swigregister
ExecBroker_swigregister(ExecBroker)

class OpenClose(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OpenClose, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OpenClose, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OpenClose(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OpenClose
    __del__ = lambda self : None;
OpenClose_swigregister = _quickfix.OpenClose_swigregister
OpenClose_swigregister(OpenClose)

class AllocShares(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, AllocShares, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, AllocShares, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_AllocShares(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_AllocShares
    __del__ = lambda self : None;
AllocShares_swigregister = _quickfix.AllocShares_swigregister
AllocShares_swigregister(AllocShares)

class DlvyInst(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DlvyInst, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DlvyInst, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DlvyInst(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DlvyInst
    __del__ = lambda self : None;
DlvyInst_swigregister = _quickfix.DlvyInst_swigregister
DlvyInst_swigregister(DlvyInst)

class BrokerOfCredit(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, BrokerOfCredit, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, BrokerOfCredit, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_BrokerOfCredit(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_BrokerOfCredit
    __del__ = lambda self : None;
BrokerOfCredit_swigregister = _quickfix.BrokerOfCredit_swigregister
BrokerOfCredit_swigregister(BrokerOfCredit)

class ClientID(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ClientID, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ClientID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ClientID(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ClientID
    __del__ = lambda self : None;
ClientID_swigregister = _quickfix.ClientID_swigregister
ClientID_swigregister(ClientID)

class CxlType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CxlType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CxlType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CxlType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CxlType
    __del__ = lambda self : None;
CxlType_swigregister = _quickfix.CxlType_swigregister
CxlType_swigregister(CxlType)

class SettlLocation(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlLocation, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlLocation, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlLocation(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlLocation
    __del__ = lambda self : None;
SettlLocation_swigregister = _quickfix.SettlLocation_swigregister
SettlLocation_swigregister(SettlLocation)

class SettlDepositoryCode(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlDepositoryCode, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlDepositoryCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlDepositoryCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlDepositoryCode
    __del__ = lambda self : None;
SettlDepositoryCode_swigregister = _quickfix.SettlDepositoryCode_swigregister
SettlDepositoryCode_swigregister(SettlDepositoryCode)

class SettlBrkrCode(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlBrkrCode, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlBrkrCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlBrkrCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlBrkrCode
    __del__ = lambda self : None;
SettlBrkrCode_swigregister = _quickfix.SettlBrkrCode_swigregister
SettlBrkrCode_swigregister(SettlBrkrCode)

class SettlInstCode(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SettlInstCode, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SettlInstCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SettlInstCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SettlInstCode
    __del__ = lambda self : None;
SettlInstCode_swigregister = _quickfix.SettlInstCode_swigregister
SettlInstCode_swigregister(SettlInstCode)

class SecuritySettlAgentName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecuritySettlAgentName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecuritySettlAgentName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecuritySettlAgentName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecuritySettlAgentName
    __del__ = lambda self : None;
SecuritySettlAgentName_swigregister = _quickfix.SecuritySettlAgentName_swigregister
SecuritySettlAgentName_swigregister(SecuritySettlAgentName)

class SecuritySettlAgentCode(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecuritySettlAgentCode, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecuritySettlAgentCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecuritySettlAgentCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecuritySettlAgentCode
    __del__ = lambda self : None;
SecuritySettlAgentCode_swigregister = _quickfix.SecuritySettlAgentCode_swigregister
SecuritySettlAgentCode_swigregister(SecuritySettlAgentCode)

class SecuritySettlAgentAcctNum(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecuritySettlAgentAcctNum, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecuritySettlAgentAcctNum, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecuritySettlAgentAcctNum(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecuritySettlAgentAcctNum
    __del__ = lambda self : None;
SecuritySettlAgentAcctNum_swigregister = _quickfix.SecuritySettlAgentAcctNum_swigregister
SecuritySettlAgentAcctNum_swigregister(SecuritySettlAgentAcctNum)

class SecuritySettlAgentAcctName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecuritySettlAgentAcctName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecuritySettlAgentAcctName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecuritySettlAgentAcctName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecuritySettlAgentAcctName
    __del__ = lambda self : None;
SecuritySettlAgentAcctName_swigregister = _quickfix.SecuritySettlAgentAcctName_swigregister
SecuritySettlAgentAcctName_swigregister(SecuritySettlAgentAcctName)

class SecuritySettlAgentContactName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecuritySettlAgentContactName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecuritySettlAgentContactName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecuritySettlAgentContactName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecuritySettlAgentContactName
    __del__ = lambda self : None;
SecuritySettlAgentContactName_swigregister = _quickfix.SecuritySettlAgentContactName_swigregister
SecuritySettlAgentContactName_swigregister(SecuritySettlAgentContactName)

class SecuritySettlAgentContactPhone(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SecuritySettlAgentContactPhone, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SecuritySettlAgentContactPhone, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SecuritySettlAgentContactPhone(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SecuritySettlAgentContactPhone
    __del__ = lambda self : None;
SecuritySettlAgentContactPhone_swigregister = _quickfix.SecuritySettlAgentContactPhone_swigregister
SecuritySettlAgentContactPhone_swigregister(SecuritySettlAgentContactPhone)

class CashSettlAgentName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashSettlAgentName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashSettlAgentName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashSettlAgentName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashSettlAgentName
    __del__ = lambda self : None;
CashSettlAgentName_swigregister = _quickfix.CashSettlAgentName_swigregister
CashSettlAgentName_swigregister(CashSettlAgentName)

class CashSettlAgentCode(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashSettlAgentCode, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashSettlAgentCode, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashSettlAgentCode(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashSettlAgentCode
    __del__ = lambda self : None;
CashSettlAgentCode_swigregister = _quickfix.CashSettlAgentCode_swigregister
CashSettlAgentCode_swigregister(CashSettlAgentCode)

class CashSettlAgentAcctNum(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashSettlAgentAcctNum, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashSettlAgentAcctNum, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashSettlAgentAcctNum(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashSettlAgentAcctNum
    __del__ = lambda self : None;
CashSettlAgentAcctNum_swigregister = _quickfix.CashSettlAgentAcctNum_swigregister
CashSettlAgentAcctNum_swigregister(CashSettlAgentAcctNum)

class CashSettlAgentAcctName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashSettlAgentAcctName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashSettlAgentAcctName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashSettlAgentAcctName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashSettlAgentAcctName
    __del__ = lambda self : None;
CashSettlAgentAcctName_swigregister = _quickfix.CashSettlAgentAcctName_swigregister
CashSettlAgentAcctName_swigregister(CashSettlAgentAcctName)

class CashSettlAgentContactName(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashSettlAgentContactName, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashSettlAgentContactName, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashSettlAgentContactName(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashSettlAgentContactName
    __del__ = lambda self : None;
CashSettlAgentContactName_swigregister = _quickfix.CashSettlAgentContactName_swigregister
CashSettlAgentContactName_swigregister(CashSettlAgentContactName)

class CashSettlAgentContactPhone(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CashSettlAgentContactPhone, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CashSettlAgentContactPhone, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CashSettlAgentContactPhone(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CashSettlAgentContactPhone
    __del__ = lambda self : None;
CashSettlAgentContactPhone_swigregister = _quickfix.CashSettlAgentContactPhone_swigregister
CashSettlAgentContactPhone_swigregister(CashSettlAgentContactPhone)

class FutSettDate2(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FutSettDate2, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FutSettDate2, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FutSettDate2(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_FutSettDate2
    __del__ = lambda self : None;
FutSettDate2_swigregister = _quickfix.FutSettDate2_swigregister
FutSettDate2_swigregister(FutSettDate2)

class PutOrCall(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PutOrCall, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PutOrCall, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PutOrCall(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PutOrCall
    __del__ = lambda self : None;
PutOrCall_swigregister = _quickfix.PutOrCall_swigregister
PutOrCall_swigregister(PutOrCall)

class CustomerOrFirm(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CustomerOrFirm, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CustomerOrFirm, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CustomerOrFirm(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CustomerOrFirm
    __del__ = lambda self : None;
CustomerOrFirm_swigregister = _quickfix.CustomerOrFirm_swigregister
CustomerOrFirm_swigregister(CustomerOrFirm)

class MaturityDay(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MaturityDay, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MaturityDay, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MaturityDay(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MaturityDay
    __del__ = lambda self : None;
MaturityDay_swigregister = _quickfix.MaturityDay_swigregister
MaturityDay_swigregister(MaturityDay)

class PegDifference(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, PegDifference, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, PegDifference, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_PegDifference(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_PegDifference
    __del__ = lambda self : None;
PegDifference_swigregister = _quickfix.PegDifference_swigregister
PegDifference_swigregister(PegDifference)

class SpreadToBenchmark(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SpreadToBenchmark, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SpreadToBenchmark, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SpreadToBenchmark(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SpreadToBenchmark
    __del__ = lambda self : None;
SpreadToBenchmark_swigregister = _quickfix.SpreadToBenchmark_swigregister
SpreadToBenchmark_swigregister(SpreadToBenchmark)

class Benchmark(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Benchmark, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, Benchmark, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Benchmark(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Benchmark
    __del__ = lambda self : None;
Benchmark_swigregister = _quickfix.Benchmark_swigregister
Benchmark_swigregister(Benchmark)

class OpenCloseSettleFlag(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OpenCloseSettleFlag, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OpenCloseSettleFlag, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OpenCloseSettleFlag(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OpenCloseSettleFlag
    __del__ = lambda self : None;
OpenCloseSettleFlag_swigregister = _quickfix.OpenCloseSettleFlag_swigregister
OpenCloseSettleFlag_swigregister(OpenCloseSettleFlag)

class UnderlyingIDSource(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingIDSource, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingIDSource, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingIDSource(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingIDSource
    __del__ = lambda self : None;
UnderlyingIDSource_swigregister = _quickfix.UnderlyingIDSource_swigregister
UnderlyingIDSource_swigregister(UnderlyingIDSource)

class QuoteAckStatus(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, QuoteAckStatus, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, QuoteAckStatus, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_QuoteAckStatus(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_QuoteAckStatus
    __del__ = lambda self : None;
QuoteAckStatus_swigregister = _quickfix.QuoteAckStatus_swigregister
QuoteAckStatus_swigregister(QuoteAckStatus)

class TotQuoteEntries(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotQuoteEntries, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotQuoteEntries, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotQuoteEntries(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotQuoteEntries
    __del__ = lambda self : None;
TotQuoteEntries_swigregister = _quickfix.TotQuoteEntries_swigregister
TotQuoteEntries_swigregister(TotQuoteEntries)

class UnderlyingMaturityDay(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingMaturityDay, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingMaturityDay, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingMaturityDay(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingMaturityDay
    __del__ = lambda self : None;
UnderlyingMaturityDay_swigregister = _quickfix.UnderlyingMaturityDay_swigregister
UnderlyingMaturityDay_swigregister(UnderlyingMaturityDay)

class UnderlyingPutOrCall(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnderlyingPutOrCall, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, UnderlyingPutOrCall, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_UnderlyingPutOrCall(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_UnderlyingPutOrCall
    __del__ = lambda self : None;
UnderlyingPutOrCall_swigregister = _quickfix.UnderlyingPutOrCall_swigregister
UnderlyingPutOrCall_swigregister(UnderlyingPutOrCall)

class RatioQty(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RatioQty, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RatioQty, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RatioQty(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RatioQty
    __del__ = lambda self : None;
RatioQty_swigregister = _quickfix.RatioQty_swigregister
RatioQty_swigregister(RatioQty)

class OnBehalfOfSendingTime(UtcTimeStampField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, OnBehalfOfSendingTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeStampField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, OnBehalfOfSendingTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_OnBehalfOfSendingTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_OnBehalfOfSendingTime
    __del__ = lambda self : None;
OnBehalfOfSendingTime_swigregister = _quickfix.OnBehalfOfSendingTime_swigregister
OnBehalfOfSendingTime_swigregister(OnBehalfOfSendingTime)

class DiscretionOffset(DoubleField):
    __swig_setmethods__ = {}
    for _s in [DoubleField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, DiscretionOffset, name, value)
    __swig_getmethods__ = {}
    for _s in [DoubleField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, DiscretionOffset, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DiscretionOffset(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DiscretionOffset
    __del__ = lambda self : None;
DiscretionOffset_swigregister = _quickfix.DiscretionOffset_swigregister
DiscretionOffset_swigregister(DiscretionOffset)

class TotalNumSecurities(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotalNumSecurities, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotalNumSecurities, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotalNumSecurities(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotalNumSecurities
    __del__ = lambda self : None;
TotalNumSecurities_swigregister = _quickfix.TotalNumSecurities_swigregister
TotalNumSecurities_swigregister(TotalNumSecurities)

class TradeType(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TradeType, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TradeType, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TradeType(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TradeType
    __del__ = lambda self : None;
TradeType_swigregister = _quickfix.TradeType_swigregister
TradeType_swigregister(TradeType)

class ClearingFirm(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ClearingFirm, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ClearingFirm, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ClearingFirm(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ClearingFirm
    __del__ = lambda self : None;
ClearingFirm_swigregister = _quickfix.ClearingFirm_swigregister
ClearingFirm_swigregister(ClearingFirm)

class ClearingAccount(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ClearingAccount, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ClearingAccount, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ClearingAccount(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_ClearingAccount
    __del__ = lambda self : None;
ClearingAccount_swigregister = _quickfix.ClearingAccount_swigregister
ClearingAccount_swigregister(ClearingAccount)

class TotalVolumeTradedDate(UtcDateField):
    __swig_setmethods__ = {}
    for _s in [UtcDateField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotalVolumeTradedDate, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcDateField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotalVolumeTradedDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotalVolumeTradedDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotalVolumeTradedDate
    __del__ = lambda self : None;
TotalVolumeTradedDate_swigregister = _quickfix.TotalVolumeTradedDate_swigregister
TotalVolumeTradedDate_swigregister(TotalVolumeTradedDate)

class TotalVolumeTradedTime(UtcTimeOnlyField):
    __swig_setmethods__ = {}
    for _s in [UtcTimeOnlyField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotalVolumeTradedTime, name, value)
    __swig_getmethods__ = {}
    for _s in [UtcTimeOnlyField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotalVolumeTradedTime, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotalVolumeTradedTime(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotalVolumeTradedTime
    __del__ = lambda self : None;
TotalVolumeTradedTime_swigregister = _quickfix.TotalVolumeTradedTime_swigregister
TotalVolumeTradedTime_swigregister(TotalVolumeTradedTime)

class CardIssNo(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, CardIssNo, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, CardIssNo, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_CardIssNo(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_CardIssNo
    __del__ = lambda self : None;
CardIssNo_swigregister = _quickfix.CardIssNo_swigregister
CardIssNo_swigregister(CardIssNo)

class RegistDetls(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, RegistDetls, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, RegistDetls, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_RegistDetls(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_RegistDetls
    __del__ = lambda self : None;
RegistDetls_swigregister = _quickfix.RegistDetls_swigregister
RegistDetls_swigregister(RegistDetls)

class TotalNumSecurityTypes(IntField):
    __swig_setmethods__ = {}
    for _s in [IntField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, TotalNumSecurityTypes, name, value)
    __swig_getmethods__ = {}
    for _s in [IntField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, TotalNumSecurityTypes, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_TotalNumSecurityTypes(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_TotalNumSecurityTypes
    __del__ = lambda self : None;
TotalNumSecurityTypes_swigregister = _quickfix.TotalNumSecurityTypes_swigregister
TotalNumSecurityTypes_swigregister(TotalNumSecurityTypes)

class LegSettlmntTyp(CharField):
    __swig_setmethods__ = {}
    for _s in [CharField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegSettlmntTyp, name, value)
    __swig_getmethods__ = {}
    for _s in [CharField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegSettlmntTyp, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegSettlmntTyp(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegSettlmntTyp
    __del__ = lambda self : None;
LegSettlmntTyp_swigregister = _quickfix.LegSettlmntTyp_swigregister
LegSettlmntTyp_swigregister(LegSettlmntTyp)

class LegFutSettDate(StringField):
    __swig_setmethods__ = {}
    for _s in [StringField]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, LegFutSettDate, name, value)
    __swig_getmethods__ = {}
    for _s in [StringField]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, LegFutSettDate, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_LegFutSettDate(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_LegFutSettDate
    __del__ = lambda self : None;
LegFutSettDate_swigregister = _quickfix.LegFutSettDate_swigregister
LegFutSettDate_swigregister(LegFutSettDate)

class SessionID(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SessionID, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SessionID, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SessionID(*args)
        try: self.this.append(this)
        except: self.this = this
    def getBeginString(*args): return _quickfix.SessionID_getBeginString(*args)
    def getSenderCompID(*args): return _quickfix.SessionID_getSenderCompID(*args)
    def getTargetCompID(*args): return _quickfix.SessionID_getTargetCompID(*args)
    def getSessionQualifier(*args): return _quickfix.SessionID_getSessionQualifier(*args)
    def fromString(*args): return _quickfix.SessionID_fromString(*args)
    def toString(*args): return _quickfix.SessionID_toString(*args)
    def __invert__(*args): return _quickfix.SessionID___invert__(*args)
    def __str__(*args): return _quickfix.SessionID___str__(*args)
    __swig_destroy__ = _quickfix.delete_SessionID
    __del__ = lambda self : None;
SessionID_swigregister = _quickfix.SessionID_swigregister
SessionID_swigregister(SessionID)
BeginString_FIX44 = cvar.BeginString_FIX44
BeginString_FIX43 = cvar.BeginString_FIX43
BeginString_FIX42 = cvar.BeginString_FIX42
BeginString_FIX41 = cvar.BeginString_FIX41
BeginString_FIX40 = cvar.BeginString_FIX40
MsgType_Heartbeat = cvar.MsgType_Heartbeat
MsgType_Logon = cvar.MsgType_Logon
MsgType_TestRequest = cvar.MsgType_TestRequest
MsgType_ResendRequest = cvar.MsgType_ResendRequest
MsgType_Reject = cvar.MsgType_Reject
MsgType_SequenceReset = cvar.MsgType_SequenceReset
MsgType_Logout = cvar.MsgType_Logout
MsgType_BusinessMessageReject = cvar.MsgType_BusinessMessageReject
MsgType_UserRequest = cvar.MsgType_UserRequest
MsgType_UserResponse = cvar.MsgType_UserResponse
MsgType_Advertisement = cvar.MsgType_Advertisement
MsgType_IndicationOfInterest = cvar.MsgType_IndicationOfInterest
MsgType_News = cvar.MsgType_News
MsgType_Email = cvar.MsgType_Email
MsgType_QuoteRequest = cvar.MsgType_QuoteRequest
MsgType_QuoteResponse = cvar.MsgType_QuoteResponse
MsgType_QuoteRequestReject = cvar.MsgType_QuoteRequestReject
MsgType_RFQRequest = cvar.MsgType_RFQRequest
MsgType_Quote = cvar.MsgType_Quote
MsgType_QuoteCancel = cvar.MsgType_QuoteCancel
MsgType_QuoteStatusRequest = cvar.MsgType_QuoteStatusRequest
MsgType_QuoteStatusReport = cvar.MsgType_QuoteStatusReport
MsgType_MassQuote = cvar.MsgType_MassQuote
MsgType_MassQuoteAcknowledgement = cvar.MsgType_MassQuoteAcknowledgement
MsgType_MarketDataRequest = cvar.MsgType_MarketDataRequest
MsgType_MarketDataSnapshotFullRefresh = cvar.MsgType_MarketDataSnapshotFullRefresh
MsgType_MarketDataIncrementalRefresh = cvar.MsgType_MarketDataIncrementalRefresh
MsgType_MarketDataRequestReject = cvar.MsgType_MarketDataRequestReject
MsgType_SecurityDefinitionRequest = cvar.MsgType_SecurityDefinitionRequest
MsgType_SecurityDefinition = cvar.MsgType_SecurityDefinition
MsgType_SecurityTypeRequest = cvar.MsgType_SecurityTypeRequest
MsgType_SecurityTypes = cvar.MsgType_SecurityTypes
MsgType_SecurityListRequest = cvar.MsgType_SecurityListRequest
MsgType_SecurityList = cvar.MsgType_SecurityList
MsgType_DerivativeSecurityListRequest = cvar.MsgType_DerivativeSecurityListRequest
MsgType_DerivativeSecurityList = cvar.MsgType_DerivativeSecurityList
MsgType_SecurityStatusRequest = cvar.MsgType_SecurityStatusRequest
MsgType_SecurityStatus = cvar.MsgType_SecurityStatus
MsgType_TradingSessionStatusRequest = cvar.MsgType_TradingSessionStatusRequest
MsgType_TradingSessionStatus = cvar.MsgType_TradingSessionStatus
MsgType_NewOrderSingle = cvar.MsgType_NewOrderSingle
MsgType_ExecutionReport = cvar.MsgType_ExecutionReport
MsgType_DontKnowTrade = cvar.MsgType_DontKnowTrade
MsgType_OrderCancelReplaceRequest = cvar.MsgType_OrderCancelReplaceRequest
MsgType_OrderCancelRequest = cvar.MsgType_OrderCancelRequest
MsgType_OrderCancelReject = cvar.MsgType_OrderCancelReject
MsgType_OrderStatusRequest = cvar.MsgType_OrderStatusRequest
MsgType_OrderMassCancelRequest = cvar.MsgType_OrderMassCancelRequest
MsgType_OrderMassCancelReport = cvar.MsgType_OrderMassCancelReport
MsgType_OrderMassStatusRequest = cvar.MsgType_OrderMassStatusRequest
MsgType_NewOrderCross = cvar.MsgType_NewOrderCross
MsgType_CrossOrderCancelReplaceRequest = cvar.MsgType_CrossOrderCancelReplaceRequest
MsgType_CrossOrderCancelRequest = cvar.MsgType_CrossOrderCancelRequest
MsgType_NewOrderMultileg = cvar.MsgType_NewOrderMultileg
MsgType_MultilegOrderCancelReplaceRequest = cvar.MsgType_MultilegOrderCancelReplaceRequest
MsgType_BidRequest = cvar.MsgType_BidRequest
MsgType_BidResponse = cvar.MsgType_BidResponse
MsgType_NewOrderList = cvar.MsgType_NewOrderList
MsgType_ListStrikePrice = cvar.MsgType_ListStrikePrice
MsgType_ListStatus = cvar.MsgType_ListStatus
MsgType_ListExecute = cvar.MsgType_ListExecute
MsgType_ListCancelRequest = cvar.MsgType_ListCancelRequest
MsgType_ListStatusRequest = cvar.MsgType_ListStatusRequest
MsgType_AllocationInstruction = cvar.MsgType_AllocationInstruction
MsgType_AllocationInstructionAck = cvar.MsgType_AllocationInstructionAck
MsgType_AllocationReport = cvar.MsgType_AllocationReport
MsgType_AllocationReportAck = cvar.MsgType_AllocationReportAck
MsgType_Confirmation = cvar.MsgType_Confirmation
MsgType_ConfirmationAck = cvar.MsgType_ConfirmationAck
MsgType_ConfirmationRequest = cvar.MsgType_ConfirmationRequest
MsgType_SettlementInstructions = cvar.MsgType_SettlementInstructions
MsgType_SettlementInstructionRequest = cvar.MsgType_SettlementInstructionRequest
MsgType_TradeCaptureReportRequest = cvar.MsgType_TradeCaptureReportRequest
MsgType_TradeCaptureReportRequestAck = cvar.MsgType_TradeCaptureReportRequestAck
MsgType_TradeCaptureReport = cvar.MsgType_TradeCaptureReport
MsgType_TradeCaptureReportAck = cvar.MsgType_TradeCaptureReportAck
MsgType_RegistrationInstructions = cvar.MsgType_RegistrationInstructions
MsgType_RegistrationInstructionsResponse = cvar.MsgType_RegistrationInstructionsResponse
MsgType_PositionMaintenanceRequest = cvar.MsgType_PositionMaintenanceRequest
MsgType_PositionMaintenanceReport = cvar.MsgType_PositionMaintenanceReport
MsgType_RequestForPositions = cvar.MsgType_RequestForPositions
MsgType_RequestForPositionsAck = cvar.MsgType_RequestForPositionsAck
MsgType_PositionReport = cvar.MsgType_PositionReport
MsgType_AssignmentReport = cvar.MsgType_AssignmentReport
MsgType_CollateralRequest = cvar.MsgType_CollateralRequest
MsgType_CollateralAssignment = cvar.MsgType_CollateralAssignment
MsgType_CollateralResponse = cvar.MsgType_CollateralResponse
MsgType_CollateralReport = cvar.MsgType_CollateralReport
MsgType_CollateralInquiry = cvar.MsgType_CollateralInquiry
MsgType_CollateralInquiryAck = cvar.MsgType_CollateralInquiryAck
AdvSide_BUY = cvar.AdvSide_BUY
AdvSide_SELL = cvar.AdvSide_SELL
AdvSide_CROSS = cvar.AdvSide_CROSS
AdvSide_TRADE = cvar.AdvSide_TRADE
AdvTransType_NEW = cvar.AdvTransType_NEW
AdvTransType_CANCEL = cvar.AdvTransType_CANCEL
AdvTransType_REPLACE = cvar.AdvTransType_REPLACE
CommType_PER_UNIT = cvar.CommType_PER_UNIT
CommType_PERCENTAGE = cvar.CommType_PERCENTAGE
CommType_ABSOLUTE = cvar.CommType_ABSOLUTE
CommType_PERCENTAGE_WAIVED_CASH_DISCOUNT = cvar.CommType_PERCENTAGE_WAIVED_CASH_DISCOUNT
CommType_PERCENTAGE_WAIVED_ENHANCED_UNITS = cvar.CommType_PERCENTAGE_WAIVED_ENHANCED_UNITS
CommType_POINTS_PER_BOND_OR_OR_CONTRACT = cvar.CommType_POINTS_PER_BOND_OR_OR_CONTRACT
ExecInst_NOT_HELD = cvar.ExecInst_NOT_HELD
ExecInst_WORK = cvar.ExecInst_WORK
ExecInst_GO_ALONG = cvar.ExecInst_GO_ALONG
ExecInst_OVER_THE_DAY = cvar.ExecInst_OVER_THE_DAY
ExecInst_HELD = cvar.ExecInst_HELD
ExecInst_PARTICIPATE_DONT_INITIATE = cvar.ExecInst_PARTICIPATE_DONT_INITIATE
ExecInst_STRICT_SCALE = cvar.ExecInst_STRICT_SCALE
ExecInst_TRY_TO_SCALE = cvar.ExecInst_TRY_TO_SCALE
ExecInst_STAY_ON_BIDSIDE = cvar.ExecInst_STAY_ON_BIDSIDE
ExecInst_STAY_ON_OFFERSIDE = cvar.ExecInst_STAY_ON_OFFERSIDE
ExecInst_NO_CROSS = cvar.ExecInst_NO_CROSS
ExecInst_OK_TO_CROSS = cvar.ExecInst_OK_TO_CROSS
ExecInst_CALL_FIRST = cvar.ExecInst_CALL_FIRST
ExecInst_PERCENT_OF_VOLUME = cvar.ExecInst_PERCENT_OF_VOLUME
ExecInst_DO_NOT_INCREASE = cvar.ExecInst_DO_NOT_INCREASE
ExecInst_DO_NOT_REDUCE = cvar.ExecInst_DO_NOT_REDUCE
ExecInst_ALL_OR_NONE = cvar.ExecInst_ALL_OR_NONE
ExecInst_REINSTATE_ON_SYSTEM_FAILURE = cvar.ExecInst_REINSTATE_ON_SYSTEM_FAILURE
ExecInst_INSTITUTIONS_ONLY = cvar.ExecInst_INSTITUTIONS_ONLY
ExecInst_REINSTATE_ON_TRADING_HALT = cvar.ExecInst_REINSTATE_ON_TRADING_HALT
ExecInst_CANCEL_ON_TRADING_HALT = cvar.ExecInst_CANCEL_ON_TRADING_HALT
ExecInst_LAST_PEG = cvar.ExecInst_LAST_PEG
ExecInst_MID_PRICE = cvar.ExecInst_MID_PRICE
ExecInst_NON_NEGOTIABLE = cvar.ExecInst_NON_NEGOTIABLE
ExecInst_OPENING_PEG = cvar.ExecInst_OPENING_PEG
ExecInst_MARKET_PEG = cvar.ExecInst_MARKET_PEG
ExecInst_CANCEL_ON_SYSTEM_FAILURE = cvar.ExecInst_CANCEL_ON_SYSTEM_FAILURE
ExecInst_PRIMARY_PEG = cvar.ExecInst_PRIMARY_PEG
ExecInst_SUSPEND = cvar.ExecInst_SUSPEND
ExecInst_FIXED_PEG_TO_LOCAL_BEST_BID_OR_OFFER_AT_TIME_OF_ORDER = cvar.ExecInst_FIXED_PEG_TO_LOCAL_BEST_BID_OR_OFFER_AT_TIME_OF_ORDER
ExecInst_CUSTOMER_DISPLAY_INSTRUCTION = cvar.ExecInst_CUSTOMER_DISPLAY_INSTRUCTION
ExecInst_NETTING = cvar.ExecInst_NETTING
ExecInst_PEG_TO_VWAP = cvar.ExecInst_PEG_TO_VWAP
ExecInst_TRADE_ALONG = cvar.ExecInst_TRADE_ALONG
ExecInst_TRY_TO_STOP = cvar.ExecInst_TRY_TO_STOP
ExecInst_CANCEL_IF_NOT_BEST = cvar.ExecInst_CANCEL_IF_NOT_BEST
ExecInst_TRAILING_STOP_PEG = cvar.ExecInst_TRAILING_STOP_PEG
ExecInst_STRICT_LIMIT = cvar.ExecInst_STRICT_LIMIT
ExecInst_IGNORE_PRICE_VALIDITY_CHECKS = cvar.ExecInst_IGNORE_PRICE_VALIDITY_CHECKS
ExecInst_PEG_TO_LIMIT_PRICE = cvar.ExecInst_PEG_TO_LIMIT_PRICE
ExecInst_WORK_TO_TARGET_STRATEGY = cvar.ExecInst_WORK_TO_TARGET_STRATEGY
HandlInst_AUTOMATED_EXECUTION_ORDER_PRIVATE = cvar.HandlInst_AUTOMATED_EXECUTION_ORDER_PRIVATE
HandlInst_AUTOMATED_EXECUTION_ORDER_PUBLIC = cvar.HandlInst_AUTOMATED_EXECUTION_ORDER_PUBLIC
HandlInst_MANUAL_ORDER = cvar.HandlInst_MANUAL_ORDER
SecurityIDSource_CUSIP = cvar.SecurityIDSource_CUSIP
SecurityIDSource_SEDOL = cvar.SecurityIDSource_SEDOL
SecurityIDSource_QUIK = cvar.SecurityIDSource_QUIK
SecurityIDSource_ISIN_NUMBER = cvar.SecurityIDSource_ISIN_NUMBER
SecurityIDSource_RIC_CODE = cvar.SecurityIDSource_RIC_CODE
SecurityIDSource_ISO_CURRENCY_CODE = cvar.SecurityIDSource_ISO_CURRENCY_CODE
SecurityIDSource_ISO_COUNTRY_CODE = cvar.SecurityIDSource_ISO_COUNTRY_CODE
SecurityIDSource_EXCHANGE_SYMBOL = cvar.SecurityIDSource_EXCHANGE_SYMBOL
SecurityIDSource_CONSOLIDATED_TAPE_ASSOCIATION = cvar.SecurityIDSource_CONSOLIDATED_TAPE_ASSOCIATION
SecurityIDSource_BLOOMBERG_SYMBOL = cvar.SecurityIDSource_BLOOMBERG_SYMBOL
SecurityIDSource_WERTPAPIER = cvar.SecurityIDSource_WERTPAPIER
SecurityIDSource_DUTCH = cvar.SecurityIDSource_DUTCH
SecurityIDSource_VALOREN = cvar.SecurityIDSource_VALOREN
SecurityIDSource_SICOVAM = cvar.SecurityIDSource_SICOVAM
SecurityIDSource_BELGIAN = cvar.SecurityIDSource_BELGIAN
SecurityIDSource_COMMON = cvar.SecurityIDSource_COMMON
SecurityIDSource_CLEARING_HOUSE_CLEARING_ORGANIZATION = cvar.SecurityIDSource_CLEARING_HOUSE_CLEARING_ORGANIZATION
SecurityIDSource_ISDA_FPML_PRODUCT_SPECIFICATION = cvar.SecurityIDSource_ISDA_FPML_PRODUCT_SPECIFICATION
SecurityIDSource_OPTIONS_PRICE_REPORTING_AUTHORITY = cvar.SecurityIDSource_OPTIONS_PRICE_REPORTING_AUTHORITY
IOIQltyInd_LOW = cvar.IOIQltyInd_LOW
IOIQltyInd_MEDIUM = cvar.IOIQltyInd_MEDIUM
IOIQltyInd_HIGH = cvar.IOIQltyInd_HIGH
IOITransType_NEW = cvar.IOITransType_NEW
IOITransType_CANCEL = cvar.IOITransType_CANCEL
IOITransType_REPLACE = cvar.IOITransType_REPLACE
LastCapacity_AGENT = cvar.LastCapacity_AGENT
LastCapacity_CROSS_AS_AGENT = cvar.LastCapacity_CROSS_AS_AGENT
LastCapacity_CROSS_AS_PRINCIPAL = cvar.LastCapacity_CROSS_AS_PRINCIPAL
LastCapacity_PRINCIPAL = cvar.LastCapacity_PRINCIPAL
MsgType_HEARTBEAT = cvar.MsgType_HEARTBEAT
MsgType_TEST_REQUEST = cvar.MsgType_TEST_REQUEST
MsgType_RESEND_REQUEST = cvar.MsgType_RESEND_REQUEST
MsgType_REJECT = cvar.MsgType_REJECT
MsgType_SEQUENCE_RESET = cvar.MsgType_SEQUENCE_RESET
MsgType_LOGOUT = cvar.MsgType_LOGOUT
MsgType_INDICATION_OF_INTEREST = cvar.MsgType_INDICATION_OF_INTEREST
MsgType_ADVERTISEMENT = cvar.MsgType_ADVERTISEMENT
MsgType_EXECUTION_REPORT = cvar.MsgType_EXECUTION_REPORT
MsgType_ORDER_CANCEL_REJECT = cvar.MsgType_ORDER_CANCEL_REJECT
MsgType_LOGON = cvar.MsgType_LOGON
MsgType_NEWS = cvar.MsgType_NEWS
MsgType_EMAIL = cvar.MsgType_EMAIL
MsgType_ORDER_SINGLE = cvar.MsgType_ORDER_SINGLE
MsgType_ORDER_LIST = cvar.MsgType_ORDER_LIST
MsgType_ORDER_CANCEL_REQUEST = cvar.MsgType_ORDER_CANCEL_REQUEST
MsgType_ORDER_CANCEL_REPLACE_REQUEST = cvar.MsgType_ORDER_CANCEL_REPLACE_REQUEST
MsgType_ORDER_STATUS_REQUEST = cvar.MsgType_ORDER_STATUS_REQUEST
MsgType_ALLOCATION_INSTRUCTION = cvar.MsgType_ALLOCATION_INSTRUCTION
MsgType_LIST_CANCEL_REQUEST = cvar.MsgType_LIST_CANCEL_REQUEST
MsgType_LIST_EXECUTE = cvar.MsgType_LIST_EXECUTE
MsgType_LIST_STATUS_REQUEST = cvar.MsgType_LIST_STATUS_REQUEST
MsgType_LIST_STATUS = cvar.MsgType_LIST_STATUS
MsgType_ALLOCATION_INSTRUCTION_ACK = cvar.MsgType_ALLOCATION_INSTRUCTION_ACK
MsgType_DONT_KNOW_TRADE = cvar.MsgType_DONT_KNOW_TRADE
MsgType_QUOTE_REQUEST = cvar.MsgType_QUOTE_REQUEST
MsgType_QUOTE = cvar.MsgType_QUOTE
MsgType_SETTLEMENT_INSTRUCTIONS = cvar.MsgType_SETTLEMENT_INSTRUCTIONS
MsgType_MARKET_DATA_REQUEST = cvar.MsgType_MARKET_DATA_REQUEST
MsgType_MARKET_DATA_SNAPSHOT_FULL_REFRESH = cvar.MsgType_MARKET_DATA_SNAPSHOT_FULL_REFRESH
MsgType_MARKET_DATA_INCREMENTAL_REFRESH = cvar.MsgType_MARKET_DATA_INCREMENTAL_REFRESH
MsgType_MARKET_DATA_REQUEST_REJECT = cvar.MsgType_MARKET_DATA_REQUEST_REJECT
MsgType_QUOTE_CANCEL = cvar.MsgType_QUOTE_CANCEL
MsgType_QUOTE_STATUS_REQUEST = cvar.MsgType_QUOTE_STATUS_REQUEST
MsgType_MASS_QUOTE_ACKNOWLEDGEMENT = cvar.MsgType_MASS_QUOTE_ACKNOWLEDGEMENT
MsgType_SECURITY_DEFINITION_REQUEST = cvar.MsgType_SECURITY_DEFINITION_REQUEST
MsgType_SECURITY_DEFINITION = cvar.MsgType_SECURITY_DEFINITION
MsgType_SECURITY_STATUS_REQUEST = cvar.MsgType_SECURITY_STATUS_REQUEST
MsgType_SECURITY_STATUS = cvar.MsgType_SECURITY_STATUS
MsgType_TRADING_SESSION_STATUS_REQUEST = cvar.MsgType_TRADING_SESSION_STATUS_REQUEST
MsgType_TRADING_SESSION_STATUS = cvar.MsgType_TRADING_SESSION_STATUS
MsgType_MASS_QUOTE = cvar.MsgType_MASS_QUOTE
MsgType_BUSINESS_MESSAGE_REJECT = cvar.MsgType_BUSINESS_MESSAGE_REJECT
MsgType_BID_REQUEST = cvar.MsgType_BID_REQUEST
MsgType_BID_RESPONSE = cvar.MsgType_BID_RESPONSE
MsgType_LIST_STRIKE_PRICE = cvar.MsgType_LIST_STRIKE_PRICE
MsgType_XML_MESSAGE = cvar.MsgType_XML_MESSAGE
MsgType_REGISTRATION_INSTRUCTIONS = cvar.MsgType_REGISTRATION_INSTRUCTIONS
MsgType_REGISTRATION_INSTRUCTIONS_RESPONSE = cvar.MsgType_REGISTRATION_INSTRUCTIONS_RESPONSE
MsgType_ORDER_MASS_CANCEL_REQUEST = cvar.MsgType_ORDER_MASS_CANCEL_REQUEST
MsgType_ORDER_MASS_CANCEL_REPORT = cvar.MsgType_ORDER_MASS_CANCEL_REPORT
MsgType_NEW_ORDER_CROSS = cvar.MsgType_NEW_ORDER_CROSS
MsgType_CROSS_ORDER_CANCEL_REPLACE_REQUEST = cvar.MsgType_CROSS_ORDER_CANCEL_REPLACE_REQUEST
MsgType_CROSS_ORDER_CANCEL_REQUEST = cvar.MsgType_CROSS_ORDER_CANCEL_REQUEST
MsgType_SECURITY_TYPE_REQUEST = cvar.MsgType_SECURITY_TYPE_REQUEST
MsgType_SECURITY_TYPES = cvar.MsgType_SECURITY_TYPES
MsgType_SECURITY_LIST_REQUEST = cvar.MsgType_SECURITY_LIST_REQUEST
MsgType_SECURITY_LIST = cvar.MsgType_SECURITY_LIST
MsgType_DERIVATIVE_SECURITY_LIST_REQUEST = cvar.MsgType_DERIVATIVE_SECURITY_LIST_REQUEST
MsgType_DERIVATIVE_SECURITY_LIST = cvar.MsgType_DERIVATIVE_SECURITY_LIST
MsgType_NEW_ORDER_MULTILEG = cvar.MsgType_NEW_ORDER_MULTILEG
MsgType_MULTILEG_ORDER_CANCEL_REPLACE = cvar.MsgType_MULTILEG_ORDER_CANCEL_REPLACE
MsgType_TRADE_CAPTURE_REPORT_REQUEST = cvar.MsgType_TRADE_CAPTURE_REPORT_REQUEST
MsgType_TRADE_CAPTURE_REPORT = cvar.MsgType_TRADE_CAPTURE_REPORT
MsgType_ORDER_MASS_STATUS_REQUEST = cvar.MsgType_ORDER_MASS_STATUS_REQUEST
MsgType_QUOTE_REQUEST_REJECT = cvar.MsgType_QUOTE_REQUEST_REJECT
MsgType_RFQ_REQUEST = cvar.MsgType_RFQ_REQUEST
MsgType_QUOTE_STATUS_REPORT = cvar.MsgType_QUOTE_STATUS_REPORT
MsgType_QUOTE_RESPONSE = cvar.MsgType_QUOTE_RESPONSE
MsgType_CONFIRMATION = cvar.MsgType_CONFIRMATION
MsgType_POSITION_MAINTENANCE_REQUEST = cvar.MsgType_POSITION_MAINTENANCE_REQUEST
MsgType_POSITION_MAINTENANCE_REPORT = cvar.MsgType_POSITION_MAINTENANCE_REPORT
MsgType_REQUEST_FOR_POSITIONS = cvar.MsgType_REQUEST_FOR_POSITIONS
MsgType_REQUEST_FOR_POSITIONS_ACK = cvar.MsgType_REQUEST_FOR_POSITIONS_ACK
MsgType_POSITION_REPORT = cvar.MsgType_POSITION_REPORT
MsgType_TRADE_CAPTURE_REPORT_REQUEST_ACK = cvar.MsgType_TRADE_CAPTURE_REPORT_REQUEST_ACK
MsgType_TRADE_CAPTURE_REPORT_ACK = cvar.MsgType_TRADE_CAPTURE_REPORT_ACK
MsgType_ALLOCATION_REPORT = cvar.MsgType_ALLOCATION_REPORT
MsgType_ALLOCATION_REPORT_ACK = cvar.MsgType_ALLOCATION_REPORT_ACK
MsgType_CONFIRMATION_ACK = cvar.MsgType_CONFIRMATION_ACK
MsgType_SETTLEMENT_INSTRUCTION_REQUEST = cvar.MsgType_SETTLEMENT_INSTRUCTION_REQUEST
MsgType_ASSIGNMENT_REPORT = cvar.MsgType_ASSIGNMENT_REPORT
MsgType_COLLATERAL_REQUEST = cvar.MsgType_COLLATERAL_REQUEST
MsgType_COLLATERAL_ASSIGNMENT = cvar.MsgType_COLLATERAL_ASSIGNMENT
MsgType_COLLATERAL_RESPONSE = cvar.MsgType_COLLATERAL_RESPONSE
MsgType_COLLATERAL_REPORT = cvar.MsgType_COLLATERAL_REPORT
MsgType_COLLATERAL_INQUIRY = cvar.MsgType_COLLATERAL_INQUIRY
MsgType_NETWORK_STATUS_REQUEST = cvar.MsgType_NETWORK_STATUS_REQUEST
MsgType_NETWORK_STATUS_RESPONSE = cvar.MsgType_NETWORK_STATUS_RESPONSE
MsgType_USER_REQUEST = cvar.MsgType_USER_REQUEST
MsgType_USER_RESPONSE = cvar.MsgType_USER_RESPONSE
MsgType_COLLATERAL_INQUIRY_ACK = cvar.MsgType_COLLATERAL_INQUIRY_ACK
MsgType_CONFIRMATION_REQUEST = cvar.MsgType_CONFIRMATION_REQUEST
OrdStatus_NEW = cvar.OrdStatus_NEW
OrdStatus_PARTIALLY_FILLED = cvar.OrdStatus_PARTIALLY_FILLED
OrdStatus_FILLED = cvar.OrdStatus_FILLED
OrdStatus_DONE_FOR_DAY = cvar.OrdStatus_DONE_FOR_DAY
OrdStatus_CANCELED = cvar.OrdStatus_CANCELED
OrdStatus_REPLACED = cvar.OrdStatus_REPLACED
OrdStatus_PENDING_CANCEL = cvar.OrdStatus_PENDING_CANCEL
OrdStatus_STOPPED = cvar.OrdStatus_STOPPED
OrdStatus_REJECTED = cvar.OrdStatus_REJECTED
OrdStatus_SUSPENDED = cvar.OrdStatus_SUSPENDED
OrdStatus_PENDING_NEW = cvar.OrdStatus_PENDING_NEW
OrdStatus_CALCULATED = cvar.OrdStatus_CALCULATED
OrdStatus_EXPIRED = cvar.OrdStatus_EXPIRED
OrdStatus_ACCEPTED_FOR_BIDDING = cvar.OrdStatus_ACCEPTED_FOR_BIDDING
OrdStatus_PENDING_REPLACE = cvar.OrdStatus_PENDING_REPLACE
OrdType_MARKET = cvar.OrdType_MARKET
OrdType_LIMIT = cvar.OrdType_LIMIT
OrdType_STOP = cvar.OrdType_STOP
OrdType_STOP_LIMIT = cvar.OrdType_STOP_LIMIT
OrdType_MARKET_ON_CLOSE = cvar.OrdType_MARKET_ON_CLOSE
OrdType_WITH_OR_WITHOUT = cvar.OrdType_WITH_OR_WITHOUT
OrdType_LIMIT_OR_BETTER = cvar.OrdType_LIMIT_OR_BETTER
OrdType_LIMIT_WITH_OR_WITHOUT = cvar.OrdType_LIMIT_WITH_OR_WITHOUT
OrdType_ON_BASIS = cvar.OrdType_ON_BASIS
OrdType_ON_CLOSE = cvar.OrdType_ON_CLOSE
OrdType_LIMIT_ON_CLOSE = cvar.OrdType_LIMIT_ON_CLOSE
OrdType_FOREX_MARKET = cvar.OrdType_FOREX_MARKET
OrdType_PREVIOUSLY_QUOTED = cvar.OrdType_PREVIOUSLY_QUOTED
OrdType_PREVIOUSLY_INDICATED = cvar.OrdType_PREVIOUSLY_INDICATED
OrdType_FOREX_LIMIT = cvar.OrdType_FOREX_LIMIT
OrdType_FOREX_SWAP = cvar.OrdType_FOREX_SWAP
OrdType_FOREX_PREVIOUSLY_QUOTED = cvar.OrdType_FOREX_PREVIOUSLY_QUOTED
OrdType_FUNARI = cvar.OrdType_FUNARI
OrdType_MARKET_IF_TOUCHED = cvar.OrdType_MARKET_IF_TOUCHED
OrdType_MARKET_WITH_LEFTOVER_AS_LIMIT = cvar.OrdType_MARKET_WITH_LEFTOVER_AS_LIMIT
OrdType_PREVIOUS_FUND_VALUATION_POINT = cvar.OrdType_PREVIOUS_FUND_VALUATION_POINT
OrdType_NEXT_FUND_VALUATION_POINT = cvar.OrdType_NEXT_FUND_VALUATION_POINT
OrdType_PEGGED = cvar.OrdType_PEGGED
Side_BUY = cvar.Side_BUY
Side_SELL = cvar.Side_SELL
Side_BUY_MINUS = cvar.Side_BUY_MINUS
Side_SELL_PLUS = cvar.Side_SELL_PLUS
Side_SELL_SHORT = cvar.Side_SELL_SHORT
Side_SELL_SHORT_EXEMPT = cvar.Side_SELL_SHORT_EXEMPT
Side_UNDISCLOSED = cvar.Side_UNDISCLOSED
Side_CROSS = cvar.Side_CROSS
Side_CROSS_SHORT = cvar.Side_CROSS_SHORT
Side_CROSS_SHORT_EXEMPT = cvar.Side_CROSS_SHORT_EXEMPT
Side_AS_DEFINED = cvar.Side_AS_DEFINED
Side_OPPOSITE = cvar.Side_OPPOSITE
Side_SUBSCRIBE = cvar.Side_SUBSCRIBE
Side_REDEEM = cvar.Side_REDEEM
Side_LEND = cvar.Side_LEND
Side_BORROW = cvar.Side_BORROW
TimeInForce_DAY = cvar.TimeInForce_DAY
TimeInForce_GOOD_TILL_CANCEL = cvar.TimeInForce_GOOD_TILL_CANCEL
TimeInForce_AT_THE_OPENING = cvar.TimeInForce_AT_THE_OPENING
TimeInForce_IMMEDIATE_OR_CANCEL = cvar.TimeInForce_IMMEDIATE_OR_CANCEL
TimeInForce_FILL_OR_KILL = cvar.TimeInForce_FILL_OR_KILL
TimeInForce_GOOD_TILL_CROSSING = cvar.TimeInForce_GOOD_TILL_CROSSING
TimeInForce_GOOD_TILL_DATE = cvar.TimeInForce_GOOD_TILL_DATE
TimeInForce_AT_THE_CLOSE = cvar.TimeInForce_AT_THE_CLOSE
Urgency_NORMAL = cvar.Urgency_NORMAL
Urgency_FLASH = cvar.Urgency_FLASH
Urgency_BACKGROUND = cvar.Urgency_BACKGROUND
SettlType_REGULAR = cvar.SettlType_REGULAR
SettlType_CASH = cvar.SettlType_CASH
SettlType_NEXT_DAY = cvar.SettlType_NEXT_DAY
SettlType_T_PLUS_2 = cvar.SettlType_T_PLUS_2
SettlType_T_PLUS_3 = cvar.SettlType_T_PLUS_3
SettlType_T_PLUS_4 = cvar.SettlType_T_PLUS_4
SettlType_FUTURE = cvar.SettlType_FUTURE
SettlType_WHEN_AND_IF_ISSUED = cvar.SettlType_WHEN_AND_IF_ISSUED
SettlType_SELLERS_OPTION = cvar.SettlType_SELLERS_OPTION
SettlType_T_PLUS_5 = cvar.SettlType_T_PLUS_5
SymbolSfx_WHEN_ISSUED = cvar.SymbolSfx_WHEN_ISSUED
SymbolSfx_A_EUCP_WITH_LUMP_SUM_INTEREST = cvar.SymbolSfx_A_EUCP_WITH_LUMP_SUM_INTEREST
AllocTransType_NEW = cvar.AllocTransType_NEW
AllocTransType_REPLACE = cvar.AllocTransType_REPLACE
AllocTransType_CANCEL = cvar.AllocTransType_CANCEL
PositionEffect_OPEN = cvar.PositionEffect_OPEN
PositionEffect_CLOSE = cvar.PositionEffect_CLOSE
PositionEffect_ROLLED = cvar.PositionEffect_ROLLED
PositionEffect_FIFO = cvar.PositionEffect_FIFO
ProcessCode_REGULAR = cvar.ProcessCode_REGULAR
ProcessCode_SOFT_DOLLAR = cvar.ProcessCode_SOFT_DOLLAR
ProcessCode_STEP_IN = cvar.ProcessCode_STEP_IN
ProcessCode_STEP_OUT = cvar.ProcessCode_STEP_OUT
ProcessCode_SOFT_DOLLAR_STEP_IN = cvar.ProcessCode_SOFT_DOLLAR_STEP_IN
ProcessCode_SOFT_DOLLAR_STEP_OUT = cvar.ProcessCode_SOFT_DOLLAR_STEP_OUT
ProcessCode_PLAN_SPONSOR = cvar.ProcessCode_PLAN_SPONSOR
AllocStatus_ACCEPTED = cvar.AllocStatus_ACCEPTED
AllocStatus_BLOCK_LEVEL_REJECT = cvar.AllocStatus_BLOCK_LEVEL_REJECT
AllocStatus_ACCOUNT_LEVEL_REJECT = cvar.AllocStatus_ACCOUNT_LEVEL_REJECT
AllocStatus_RECEIVED = cvar.AllocStatus_RECEIVED
AllocStatus_INCOMPLETE = cvar.AllocStatus_INCOMPLETE
AllocStatus_REJECTED_BY_INTERMEDIARY = cvar.AllocStatus_REJECTED_BY_INTERMEDIARY
AllocRejCode_UNKNOWN_ACCOUNT = cvar.AllocRejCode_UNKNOWN_ACCOUNT
AllocRejCode_INCORRECT_QUANTITY = cvar.AllocRejCode_INCORRECT_QUANTITY
AllocRejCode_INCORRECT_AVERAGE_PRICE = cvar.AllocRejCode_INCORRECT_AVERAGE_PRICE
AllocRejCode_UNKNOWN_EXECUTING_BROKER_MNEMONIC = cvar.AllocRejCode_UNKNOWN_EXECUTING_BROKER_MNEMONIC
AllocRejCode_COMMISSION_DIFFERENCE = cvar.AllocRejCode_COMMISSION_DIFFERENCE
AllocRejCode_UNKNOWN_ORDERID = cvar.AllocRejCode_UNKNOWN_ORDERID
AllocRejCode_UNKNOWN_LISTID = cvar.AllocRejCode_UNKNOWN_LISTID
AllocRejCode_OTHER = cvar.AllocRejCode_OTHER
AllocRejCode_INCORRECT_ALLOCATED_QUANTITY = cvar.AllocRejCode_INCORRECT_ALLOCATED_QUANTITY
AllocRejCode_CALCULATION_DIFFERENCE = cvar.AllocRejCode_CALCULATION_DIFFERENCE
EmailType_NEW = cvar.EmailType_NEW
EmailType_REPLY = cvar.EmailType_REPLY
EmailType_ADMIN_REPLY = cvar.EmailType_ADMIN_REPLY
EncryptMethod_NONE_OTHER = cvar.EncryptMethod_NONE_OTHER
EncryptMethod_PKCS = cvar.EncryptMethod_PKCS
EncryptMethod_DES = cvar.EncryptMethod_DES
EncryptMethod_PKCS_DES = cvar.EncryptMethod_PKCS_DES
EncryptMethod_PGP_DES = cvar.EncryptMethod_PGP_DES
EncryptMethod_PGP_DES_MD5 = cvar.EncryptMethod_PGP_DES_MD5
EncryptMethod_PEM_DES_MD5 = cvar.EncryptMethod_PEM_DES_MD5
CxlRejReason_TOO_LATE_TO_CANCEL = cvar.CxlRejReason_TOO_LATE_TO_CANCEL
CxlRejReason_UNKNOWN_ORDER = cvar.CxlRejReason_UNKNOWN_ORDER
CxlRejReason_BROKER_EXCHANGE_OPTION = cvar.CxlRejReason_BROKER_EXCHANGE_OPTION
CxlRejReason_ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS = cvar.CxlRejReason_ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS
CxlRejReason_UNABLE_TO_PROCESS_ORDER_MASS_CANCEL_REQUEST = cvar.CxlRejReason_UNABLE_TO_PROCESS_ORDER_MASS_CANCEL_REQUEST
CxlRejReason_ORIGORDMODTIME_DID_NOT_MATCH_LAST_TRANSACTTIME_OF_ORDER = cvar.CxlRejReason_ORIGORDMODTIME_DID_NOT_MATCH_LAST_TRANSACTTIME_OF_ORDER
CxlRejReason_DUPLICATE_CLORDID_RECEIVED = cvar.CxlRejReason_DUPLICATE_CLORDID_RECEIVED
CxlRejReason_OTHER = cvar.CxlRejReason_OTHER
OrdRejReason_BROKER_EXCHANGE_OPTION = cvar.OrdRejReason_BROKER_EXCHANGE_OPTION
OrdRejReason_UNKNOWN_SYMBOL = cvar.OrdRejReason_UNKNOWN_SYMBOL
OrdRejReason_EXCHANGE_CLOSED = cvar.OrdRejReason_EXCHANGE_CLOSED
OrdRejReason_ORDER_EXCEEDS_LIMIT = cvar.OrdRejReason_ORDER_EXCEEDS_LIMIT
OrdRejReason_TOO_LATE_TO_ENTER = cvar.OrdRejReason_TOO_LATE_TO_ENTER
OrdRejReason_UNKNOWN_ORDER = cvar.OrdRejReason_UNKNOWN_ORDER
OrdRejReason_DUPLICATE_ORDER = cvar.OrdRejReason_DUPLICATE_ORDER
OrdRejReason_DUPLICATE_OF_A_VERBALLY_COMMUNICATED_ORDER = cvar.OrdRejReason_DUPLICATE_OF_A_VERBALLY_COMMUNICATED_ORDER
OrdRejReason_STALE_ORDER = cvar.OrdRejReason_STALE_ORDER
OrdRejReason_TRADE_ALONG_REQUIRED = cvar.OrdRejReason_TRADE_ALONG_REQUIRED
OrdRejReason_INVALID_INVESTOR_ID = cvar.OrdRejReason_INVALID_INVESTOR_ID
OrdRejReason_UNSUPPORTED_ORDER_CHARACTERISTIC = cvar.OrdRejReason_UNSUPPORTED_ORDER_CHARACTERISTIC
OrdRejReason_SURVEILLENCE_OPTION = cvar.OrdRejReason_SURVEILLENCE_OPTION
OrdRejReason_INCORRECT_QUANTITY = cvar.OrdRejReason_INCORRECT_QUANTITY
OrdRejReason_INCORRECT_ALLOCATED_QUANTITY = cvar.OrdRejReason_INCORRECT_ALLOCATED_QUANTITY
OrdRejReason_UNKNOWN_ACCOUNT = cvar.OrdRejReason_UNKNOWN_ACCOUNT
OrdRejReason_OTHER = cvar.OrdRejReason_OTHER
IOIQualifier_ALL_OR_NONE = cvar.IOIQualifier_ALL_OR_NONE
IOIQualifier_MARKET_ON_CLOSE = cvar.IOIQualifier_MARKET_ON_CLOSE
IOIQualifier_AT_THE_CLOSE = cvar.IOIQualifier_AT_THE_CLOSE
IOIQualifier_VWAP = cvar.IOIQualifier_VWAP
IOIQualifier_IN_TOUCH_WITH = cvar.IOIQualifier_IN_TOUCH_WITH
IOIQualifier_LIMIT = cvar.IOIQualifier_LIMIT
IOIQualifier_MORE_BEHIND = cvar.IOIQualifier_MORE_BEHIND
IOIQualifier_AT_THE_OPEN = cvar.IOIQualifier_AT_THE_OPEN
IOIQualifier_TAKING_A_POSITION = cvar.IOIQualifier_TAKING_A_POSITION
IOIQualifier_AT_THE_MARKET = cvar.IOIQualifier_AT_THE_MARKET
IOIQualifier_READY_TO_TRADE = cvar.IOIQualifier_READY_TO_TRADE
IOIQualifier_PORTFOLIO_SHOWN = cvar.IOIQualifier_PORTFOLIO_SHOWN
IOIQualifier_THROUGH_THE_DAY = cvar.IOIQualifier_THROUGH_THE_DAY
IOIQualifier_VERSUS = cvar.IOIQualifier_VERSUS
IOIQualifier_INDICATION_WORKING_AWAY = cvar.IOIQualifier_INDICATION_WORKING_AWAY
IOIQualifier_CROSSING_OPPORTUNITY = cvar.IOIQualifier_CROSSING_OPPORTUNITY
IOIQualifier_AT_THE_MIDPOINT = cvar.IOIQualifier_AT_THE_MIDPOINT
IOIQualifier_PRE_OPEN = cvar.IOIQualifier_PRE_OPEN
DKReason_UNKNOWN_SYMBOL = cvar.DKReason_UNKNOWN_SYMBOL
DKReason_WRONG_SIDE = cvar.DKReason_WRONG_SIDE
DKReason_QUANTITY_EXCEEDS_ORDER = cvar.DKReason_QUANTITY_EXCEEDS_ORDER
DKReason_NO_MATCHING_ORDER = cvar.DKReason_NO_MATCHING_ORDER
DKReason_PRICE_EXCEEDS_LIMIT = cvar.DKReason_PRICE_EXCEEDS_LIMIT
DKReason_CALCULATION_DIFFERENCE = cvar.DKReason_CALCULATION_DIFFERENCE
DKReason_OTHER = cvar.DKReason_OTHER
MiscFeeType_REGULATORY = cvar.MiscFeeType_REGULATORY
MiscFeeType_TAX = cvar.MiscFeeType_TAX
MiscFeeType_LOCAL_COMMISSION = cvar.MiscFeeType_LOCAL_COMMISSION
MiscFeeType_EXCHANGE_FEES = cvar.MiscFeeType_EXCHANGE_FEES
MiscFeeType_STAMP = cvar.MiscFeeType_STAMP
MiscFeeType_LEVY = cvar.MiscFeeType_LEVY
MiscFeeType_OTHER = cvar.MiscFeeType_OTHER
MiscFeeType_MARKUP = cvar.MiscFeeType_MARKUP
MiscFeeType_CONSUMPTION_TAX = cvar.MiscFeeType_CONSUMPTION_TAX
ExecType_NEW = cvar.ExecType_NEW
ExecType_PARTIAL_FILL = cvar.ExecType_PARTIAL_FILL
ExecType_FILL = cvar.ExecType_FILL
ExecType_DONE_FOR_DAY = cvar.ExecType_DONE_FOR_DAY
ExecType_CANCELED = cvar.ExecType_CANCELED
ExecType_REPLACE = cvar.ExecType_REPLACE
ExecType_PENDING_CANCEL = cvar.ExecType_PENDING_CANCEL
ExecType_STOPPED = cvar.ExecType_STOPPED
ExecType_REJECTED = cvar.ExecType_REJECTED
ExecType_SUSPENDED = cvar.ExecType_SUSPENDED
ExecType_PENDING_NEW = cvar.ExecType_PENDING_NEW
ExecType_CALCULATED = cvar.ExecType_CALCULATED
ExecType_EXPIRED = cvar.ExecType_EXPIRED
ExecType_RESTATED = cvar.ExecType_RESTATED
ExecType_PENDING_REPLACE = cvar.ExecType_PENDING_REPLACE
ExecType_TRADE = cvar.ExecType_TRADE
ExecType_TRADE_CORRECT = cvar.ExecType_TRADE_CORRECT
ExecType_TRADE_CANCEL = cvar.ExecType_TRADE_CANCEL
ExecType_ORDER_STATUS = cvar.ExecType_ORDER_STATUS
SettlCurrFxRateCalc_MULTIPLY = cvar.SettlCurrFxRateCalc_MULTIPLY
SettlCurrFxRateCalc_DIVIDE = cvar.SettlCurrFxRateCalc_DIVIDE
SettlInstMode_DEFAULT = cvar.SettlInstMode_DEFAULT
SettlInstMode_STANDING_INSTRUCTIONS_PROVIDED = cvar.SettlInstMode_STANDING_INSTRUCTIONS_PROVIDED
SettlInstMode_SPECIFIC_ORDER_FOR_A_SINGLE_ACCOUNT = cvar.SettlInstMode_SPECIFIC_ORDER_FOR_A_SINGLE_ACCOUNT
SettlInstMode_REQUEST_REJECT = cvar.SettlInstMode_REQUEST_REJECT
SettlInstTransType_NEW = cvar.SettlInstTransType_NEW
SettlInstTransType_CANCEL = cvar.SettlInstTransType_CANCEL
SettlInstTransType_REPLACE = cvar.SettlInstTransType_REPLACE
SettlInstTransType_RESTATE = cvar.SettlInstTransType_RESTATE
SettlInstSource_BROKERS_INSTRUCTIONS = cvar.SettlInstSource_BROKERS_INSTRUCTIONS
SettlInstSource_INSTITUTIONS_INSTRUCTIONS = cvar.SettlInstSource_INSTITUTIONS_INSTRUCTIONS
SettlInstSource_INVESTOR = cvar.SettlInstSource_INVESTOR
SecurityType_EURO_SUPRANATIONAL_COUPONS = cvar.SecurityType_EURO_SUPRANATIONAL_COUPONS
SecurityType_FEDERAL_AGENCY_COUPON = cvar.SecurityType_FEDERAL_AGENCY_COUPON
SecurityType_FEDERAL_AGENCY_DISCOUNT_NOTE = cvar.SecurityType_FEDERAL_AGENCY_DISCOUNT_NOTE
SecurityType_PRIVATE_EXPORT_FUNDING = cvar.SecurityType_PRIVATE_EXPORT_FUNDING
SecurityType_USD_SUPRANATIONAL_COUPONS = cvar.SecurityType_USD_SUPRANATIONAL_COUPONS
SecurityType_FUTURE = cvar.SecurityType_FUTURE
SecurityType_OPTION = cvar.SecurityType_OPTION
SecurityType_CORPORATE_BOND = cvar.SecurityType_CORPORATE_BOND
SecurityType_CORPORATE_PRIVATE_PLACEMENT = cvar.SecurityType_CORPORATE_PRIVATE_PLACEMENT
SecurityType_CONVERTIBLE_BOND = cvar.SecurityType_CONVERTIBLE_BOND
SecurityType_DUAL_CURRENCY = cvar.SecurityType_DUAL_CURRENCY
SecurityType_EURO_CORPORATE_BOND = cvar.SecurityType_EURO_CORPORATE_BOND
SecurityType_INDEXED_LINKED = cvar.SecurityType_INDEXED_LINKED
SecurityType_STRUCTURED_NOTES = cvar.SecurityType_STRUCTURED_NOTES
SecurityType_YANKEE_CORPORATE_BOND = cvar.SecurityType_YANKEE_CORPORATE_BOND
SecurityType_FOREIGN_EXCHANGE_CONTRACT = cvar.SecurityType_FOREIGN_EXCHANGE_CONTRACT
SecurityType_COMMON_STOCK = cvar.SecurityType_COMMON_STOCK
SecurityType_PREFERRED_STOCK = cvar.SecurityType_PREFERRED_STOCK
SecurityType_BRADY_BOND = cvar.SecurityType_BRADY_BOND
SecurityType_EURO_SOVEREIGNS = cvar.SecurityType_EURO_SOVEREIGNS
SecurityType_US_TREASURY_BOND = cvar.SecurityType_US_TREASURY_BOND
SecurityType_INTEREST_STRIP_FROM_ANY_BOND_OR_NOTE = cvar.SecurityType_INTEREST_STRIP_FROM_ANY_BOND_OR_NOTE
SecurityType_TREASURY_INFLATION_PROTECTED_SECURITIES = cvar.SecurityType_TREASURY_INFLATION_PROTECTED_SECURITIES
SecurityType_PRINCIPAL_STRIP_OF_A_CALLABLE_BOND_OR_NOTE = cvar.SecurityType_PRINCIPAL_STRIP_OF_A_CALLABLE_BOND_OR_NOTE
SecurityType_PRINCIPAL_STRIP_FROM_A_NON_CALLABLE_BOND_OR_NOTE = cvar.SecurityType_PRINCIPAL_STRIP_FROM_A_NON_CALLABLE_BOND_OR_NOTE
SecurityType_US_TREASURY_NOTE = cvar.SecurityType_US_TREASURY_NOTE
SecurityType_US_TREASURY_BILL = cvar.SecurityType_US_TREASURY_BILL
SecurityType_REPURCHASE = cvar.SecurityType_REPURCHASE
SecurityType_FORWARD = cvar.SecurityType_FORWARD
SecurityType_BUY_SELLBACK = cvar.SecurityType_BUY_SELLBACK
SecurityType_SECURITIES_LOAN = cvar.SecurityType_SECURITIES_LOAN
SecurityType_SECURITIES_PLEDGE = cvar.SecurityType_SECURITIES_PLEDGE
SecurityType_TERM_LOAN = cvar.SecurityType_TERM_LOAN
SecurityType_REVOLVER_LOAN = cvar.SecurityType_REVOLVER_LOAN
SecurityType_REVOLVER_TERM_LOAN = cvar.SecurityType_REVOLVER_TERM_LOAN
SecurityType_BRIDGE_LOAN = cvar.SecurityType_BRIDGE_LOAN
SecurityType_LETTER_OF_CREDIT = cvar.SecurityType_LETTER_OF_CREDIT
SecurityType_SWING_LINE_FACILITY = cvar.SecurityType_SWING_LINE_FACILITY
SecurityType_DEBTOR_IN_POSSESSION = cvar.SecurityType_DEBTOR_IN_POSSESSION
SecurityType_DEFAULTED = cvar.SecurityType_DEFAULTED
SecurityType_WITHDRAWN = cvar.SecurityType_WITHDRAWN
SecurityType_REPLACED = cvar.SecurityType_REPLACED
SecurityType_MATURED = cvar.SecurityType_MATURED
SecurityType_AMENDED_AND_RESTATED = cvar.SecurityType_AMENDED_AND_RESTATED
SecurityType_RETIRED = cvar.SecurityType_RETIRED
SecurityType_BANKERS_ACCEPTANCE = cvar.SecurityType_BANKERS_ACCEPTANCE
SecurityType_BANK_NOTES = cvar.SecurityType_BANK_NOTES
SecurityType_BILL_OF_EXCHANGES = cvar.SecurityType_BILL_OF_EXCHANGES
SecurityType_CERTIFICATE_OF_DEPOSIT = cvar.SecurityType_CERTIFICATE_OF_DEPOSIT
SecurityType_CALL_LOANS = cvar.SecurityType_CALL_LOANS
SecurityType_COMMERCIAL_PAPER = cvar.SecurityType_COMMERCIAL_PAPER
SecurityType_DEPOSIT_NOTES = cvar.SecurityType_DEPOSIT_NOTES
SecurityType_EURO_CERTIFICATE_OF_DEPOSIT = cvar.SecurityType_EURO_CERTIFICATE_OF_DEPOSIT
SecurityType_EURO_COMMERCIAL_PAPER = cvar.SecurityType_EURO_COMMERCIAL_PAPER
SecurityType_LIQUIDITY_NOTE = cvar.SecurityType_LIQUIDITY_NOTE
SecurityType_MEDIUM_TERM_NOTES = cvar.SecurityType_MEDIUM_TERM_NOTES
SecurityType_OVERNIGHT = cvar.SecurityType_OVERNIGHT
SecurityType_PROMISSORY_NOTE = cvar.SecurityType_PROMISSORY_NOTE
SecurityType_PLAZOS_FIJOS = cvar.SecurityType_PLAZOS_FIJOS
SecurityType_SHORT_TERM_LOAN_NOTE = cvar.SecurityType_SHORT_TERM_LOAN_NOTE
SecurityType_TIME_DEPOSIT = cvar.SecurityType_TIME_DEPOSIT
SecurityType_EXTENDED_COMM_NOTE = cvar.SecurityType_EXTENDED_COMM_NOTE
SecurityType_YANKEE_CERTIFICATE_OF_DEPOSIT = cvar.SecurityType_YANKEE_CERTIFICATE_OF_DEPOSIT
SecurityType_ASSET_BACKED_SECURITIES = cvar.SecurityType_ASSET_BACKED_SECURITIES
SecurityType_CORP_MORTGAGE_BACKED_SECURITIES = cvar.SecurityType_CORP_MORTGAGE_BACKED_SECURITIES
SecurityType_COLLATERALIZED_MORTGAGE_OBLIGATION = cvar.SecurityType_COLLATERALIZED_MORTGAGE_OBLIGATION
SecurityType_IOETTE_MORTGAGE = cvar.SecurityType_IOETTE_MORTGAGE
SecurityType_MORTGAGE_BACKED_SECURITIES = cvar.SecurityType_MORTGAGE_BACKED_SECURITIES
SecurityType_MORTGAGE_INTEREST_ONLY = cvar.SecurityType_MORTGAGE_INTEREST_ONLY
SecurityType_MORTGAGE_PRINCIPAL_ONLY = cvar.SecurityType_MORTGAGE_PRINCIPAL_ONLY
SecurityType_MORTGAGE_PRIVATE_PLACEMENT = cvar.SecurityType_MORTGAGE_PRIVATE_PLACEMENT
SecurityType_MISCELLANEOUS_PASS_THROUGH = cvar.SecurityType_MISCELLANEOUS_PASS_THROUGH
SecurityType_PFANDBRIEFE = cvar.SecurityType_PFANDBRIEFE
SecurityType_TO_BE_ANNOUNCED = cvar.SecurityType_TO_BE_ANNOUNCED
SecurityType_OTHER_ANTICIPATION_NOTES = cvar.SecurityType_OTHER_ANTICIPATION_NOTES
SecurityType_CERTIFICATE_OF_OBLIGATION = cvar.SecurityType_CERTIFICATE_OF_OBLIGATION
SecurityType_CERTIFICATE_OF_PARTICIPATION = cvar.SecurityType_CERTIFICATE_OF_PARTICIPATION
SecurityType_GENERAL_OBLIGATION_BONDS = cvar.SecurityType_GENERAL_OBLIGATION_BONDS
SecurityType_MANDATORY_TENDER = cvar.SecurityType_MANDATORY_TENDER
SecurityType_REVENUE_ANTICIPATION_NOTE = cvar.SecurityType_REVENUE_ANTICIPATION_NOTE
SecurityType_REVENUE_BONDS = cvar.SecurityType_REVENUE_BONDS
SecurityType_SPECIAL_ASSESSMENT = cvar.SecurityType_SPECIAL_ASSESSMENT
SecurityType_SPECIAL_OBLIGATION = cvar.SecurityType_SPECIAL_OBLIGATION
SecurityType_SPECIAL_TAX = cvar.SecurityType_SPECIAL_TAX
SecurityType_TAX_ANTICIPATION_NOTE = cvar.SecurityType_TAX_ANTICIPATION_NOTE
SecurityType_TAX_ALLOCATION = cvar.SecurityType_TAX_ALLOCATION
SecurityType_TAX_EXEMPT_COMMERCIAL_PAPER = cvar.SecurityType_TAX_EXEMPT_COMMERCIAL_PAPER
SecurityType_TAX_AND_REVENUE_ANTICIPATION_NOTE = cvar.SecurityType_TAX_AND_REVENUE_ANTICIPATION_NOTE
SecurityType_VARIABLE_RATE_DEMAND_NOTE = cvar.SecurityType_VARIABLE_RATE_DEMAND_NOTE
SecurityType_WARRANT = cvar.SecurityType_WARRANT
SecurityType_MUTUAL_FUND = cvar.SecurityType_MUTUAL_FUND
SecurityType_MULTI_LEG_INSTRUMENT = cvar.SecurityType_MULTI_LEG_INSTRUMENT
SecurityType_NO_SECURITY_TYPE = cvar.SecurityType_NO_SECURITY_TYPE
SecurityType_WILDCARD = cvar.SecurityType_WILDCARD
StandInstDbType_OTHER = cvar.StandInstDbType_OTHER
StandInstDbType_DTC_SID = cvar.StandInstDbType_DTC_SID
StandInstDbType_THOMSON_ALERT = cvar.StandInstDbType_THOMSON_ALERT
StandInstDbType_A_GLOBAL_CUSTODIAN = cvar.StandInstDbType_A_GLOBAL_CUSTODIAN
StandInstDbType_ACCOUNTNET = cvar.StandInstDbType_ACCOUNTNET
SettlDeliveryType_VERSUS_PAYMENT = cvar.SettlDeliveryType_VERSUS_PAYMENT
SettlDeliveryType_FREE = cvar.SettlDeliveryType_FREE
SettlDeliveryType_TRI_PARTY = cvar.SettlDeliveryType_TRI_PARTY
SettlDeliveryType_HOLD_IN_CUSTODY = cvar.SettlDeliveryType_HOLD_IN_CUSTODY
AllocLinkType_F_X_NETTING = cvar.AllocLinkType_F_X_NETTING
AllocLinkType_F_X_SWAP = cvar.AllocLinkType_F_X_SWAP
CoveredOrUncovered_COVERED = cvar.CoveredOrUncovered_COVERED
CoveredOrUncovered_UNCOVERED = cvar.CoveredOrUncovered_UNCOVERED
AllocHandlInst_MATCH = cvar.AllocHandlInst_MATCH
AllocHandlInst_FORWARD = cvar.AllocHandlInst_FORWARD
AllocHandlInst_FORWARD_AND_MATCH = cvar.AllocHandlInst_FORWARD_AND_MATCH
RoutingType_TARGET_FIRM = cvar.RoutingType_TARGET_FIRM
RoutingType_TARGET_LIST = cvar.RoutingType_TARGET_LIST
RoutingType_BLOCK_FIRM = cvar.RoutingType_BLOCK_FIRM
RoutingType_BLOCK_LIST = cvar.RoutingType_BLOCK_LIST
BenchmarkCurveName_MUNIAAA = cvar.BenchmarkCurveName_MUNIAAA
BenchmarkCurveName_FUTURESWAP = cvar.BenchmarkCurveName_FUTURESWAP
BenchmarkCurveName_LIBID = cvar.BenchmarkCurveName_LIBID
BenchmarkCurveName_LIBOR = cvar.BenchmarkCurveName_LIBOR
BenchmarkCurveName_OTHER = cvar.BenchmarkCurveName_OTHER
BenchmarkCurveName_SWAP = cvar.BenchmarkCurveName_SWAP
BenchmarkCurveName_TREASURY = cvar.BenchmarkCurveName_TREASURY
BenchmarkCurveName_EURIBOR = cvar.BenchmarkCurveName_EURIBOR
BenchmarkCurveName_PFANDBRIEFE = cvar.BenchmarkCurveName_PFANDBRIEFE
BenchmarkCurveName_EONIA = cvar.BenchmarkCurveName_EONIA
BenchmarkCurveName_SONIA = cvar.BenchmarkCurveName_SONIA
BenchmarkCurveName_EUREPO = cvar.BenchmarkCurveName_EUREPO
StipulationType_AMT = cvar.StipulationType_AMT
StipulationType_AUTO_REINVESTMENT_AT_OR_BETTER = cvar.StipulationType_AUTO_REINVESTMENT_AT_OR_BETTER
StipulationType_BANK_QUALIFIED = cvar.StipulationType_BANK_QUALIFIED
StipulationType_BARGAIN_CONDITIONS = cvar.StipulationType_BARGAIN_CONDITIONS
StipulationType_COUPON_RANGE = cvar.StipulationType_COUPON_RANGE
StipulationType_ISO_CURRENCY_CODE = cvar.StipulationType_ISO_CURRENCY_CODE
StipulationType_CUSTOM_START_END_DATE = cvar.StipulationType_CUSTOM_START_END_DATE
StipulationType_GEOGRAPHICS_AND_PERCENT_RANGE = cvar.StipulationType_GEOGRAPHICS_AND_PERCENT_RANGE
StipulationType_VALUATION_DISCOUNT = cvar.StipulationType_VALUATION_DISCOUNT
StipulationType_INSURED = cvar.StipulationType_INSURED
StipulationType_YEAR_OR_YEAR_MONTH_OF_ISSUE = cvar.StipulationType_YEAR_OR_YEAR_MONTH_OF_ISSUE
StipulationType_ISSUERS_TICKER = cvar.StipulationType_ISSUERS_TICKER
StipulationType_ISSUE_SIZE_RANGE = cvar.StipulationType_ISSUE_SIZE_RANGE
StipulationType_LOOKBACK_DAYS = cvar.StipulationType_LOOKBACK_DAYS
StipulationType_EXPLICIT_LOT_IDENTIFIER = cvar.StipulationType_EXPLICIT_LOT_IDENTIFIER
StipulationType_LOT_VARIANCE = cvar.StipulationType_LOT_VARIANCE
StipulationType_MATURITY_YEAR_AND_MONTH = cvar.StipulationType_MATURITY_YEAR_AND_MONTH
StipulationType_MATURITY_RANGE = cvar.StipulationType_MATURITY_RANGE
StipulationType_MAXIMUM_SUBSTITUTIONS = cvar.StipulationType_MAXIMUM_SUBSTITUTIONS
StipulationType_MINIMUM_QUANTITY = cvar.StipulationType_MINIMUM_QUANTITY
StipulationType_MINIMUM_INCREMENT = cvar.StipulationType_MINIMUM_INCREMENT
StipulationType_MINIMUM_DENOMINATION = cvar.StipulationType_MINIMUM_DENOMINATION
StipulationType_PAYMENT_FREQUENCY_CALENDAR = cvar.StipulationType_PAYMENT_FREQUENCY_CALENDAR
StipulationType_NUMBER_OF_PIECES = cvar.StipulationType_NUMBER_OF_PIECES
StipulationType_POOLS_MAXIMUM = cvar.StipulationType_POOLS_MAXIMUM
StipulationType_POOLS_PER_MILLION = cvar.StipulationType_POOLS_PER_MILLION
StipulationType_POOLS_PER_LOT = cvar.StipulationType_POOLS_PER_LOT
StipulationType_POOLS_PER_TRADE = cvar.StipulationType_POOLS_PER_TRADE
StipulationType_PRICE_RANGE = cvar.StipulationType_PRICE_RANGE
StipulationType_PRICING_FREQUENCY = cvar.StipulationType_PRICING_FREQUENCY
StipulationType_PRODUCTION_YEAR = cvar.StipulationType_PRODUCTION_YEAR
StipulationType_CALL_PROTECTION = cvar.StipulationType_CALL_PROTECTION
StipulationType_PURPOSE = cvar.StipulationType_PURPOSE
StipulationType_BENCHMARK_PRICE_SOURCE = cvar.StipulationType_BENCHMARK_PRICE_SOURCE
StipulationType_RATING_SOURCE_AND_RANGE = cvar.StipulationType_RATING_SOURCE_AND_RANGE
StipulationType_RESTRICTED = cvar.StipulationType_RESTRICTED
StipulationType_MARKET_SECTOR = cvar.StipulationType_MARKET_SECTOR
StipulationType_SECURITYTYPE_INCLUDED_OR_EXCLUDED = cvar.StipulationType_SECURITYTYPE_INCLUDED_OR_EXCLUDED
StipulationType_STRUCTURE = cvar.StipulationType_STRUCTURE
StipulationType_SUBSTITUTIONS_FREQUENCY = cvar.StipulationType_SUBSTITUTIONS_FREQUENCY
StipulationType_SUBSTITUTIONS_LEFT = cvar.StipulationType_SUBSTITUTIONS_LEFT
StipulationType_FREEFORM_TEXT = cvar.StipulationType_FREEFORM_TEXT
StipulationType_TRADE_VARIANCE = cvar.StipulationType_TRADE_VARIANCE
StipulationType_WEIGHTED_AVERAGE_COUPON = cvar.StipulationType_WEIGHTED_AVERAGE_COUPON
StipulationType_WEIGHTED_AVERAGE_LIFE_COUPON = cvar.StipulationType_WEIGHTED_AVERAGE_LIFE_COUPON
StipulationType_WEIGHTED_AVERAGE_LOAN_AGE = cvar.StipulationType_WEIGHTED_AVERAGE_LOAN_AGE
StipulationType_WEIGHTED_AVERAGE_MATURITY = cvar.StipulationType_WEIGHTED_AVERAGE_MATURITY
StipulationType_WHOLE_POOL = cvar.StipulationType_WHOLE_POOL
StipulationType_YIELD_RANGE = cvar.StipulationType_YIELD_RANGE
StipulationType_SINGLE_MONTHLY_MORTALITY = cvar.StipulationType_SINGLE_MONTHLY_MORTALITY
StipulationType_CONSTANT_PREPAYMENT_RATE = cvar.StipulationType_CONSTANT_PREPAYMENT_RATE
StipulationType_CONSTANT_PREPAYMENT_YIELD = cvar.StipulationType_CONSTANT_PREPAYMENT_YIELD
StipulationType_CONSTANT_PREPAYMENT_PENALTY = cvar.StipulationType_CONSTANT_PREPAYMENT_PENALTY
StipulationType_ABSOLUTE_PREPAYMENT_SPEED = cvar.StipulationType_ABSOLUTE_PREPAYMENT_SPEED
StipulationType_MONTHLY_PREPAYMENT_RATE = cvar.StipulationType_MONTHLY_PREPAYMENT_RATE
StipulationType_PERCENT_OF_BMA_PREPAYMENT_CURVE = cvar.StipulationType_PERCENT_OF_BMA_PREPAYMENT_CURVE
StipulationType_PERCENT_OF_PROSPECTUS_PREPAYMENT_CURVE = cvar.StipulationType_PERCENT_OF_PROSPECTUS_PREPAYMENT_CURVE
StipulationType_PERCENT_OF_MANUFACTURED_HOUSING_PREPAYMENT_CURVE = cvar.StipulationType_PERCENT_OF_MANUFACTURED_HOUSING_PREPAYMENT_CURVE
StipulationType_FINAL_CPR_OF_HOME_EQUITY_PREPAYMENT_CURVE = cvar.StipulationType_FINAL_CPR_OF_HOME_EQUITY_PREPAYMENT_CURVE
StipulationValue_SPECIAL_CUM_DIVIDEND = cvar.StipulationValue_SPECIAL_CUM_DIVIDEND
StipulationValue_SPECIAL_EX_DIVIDEND = cvar.StipulationValue_SPECIAL_EX_DIVIDEND
StipulationValue_SPECIAL_CUM_COUPON = cvar.StipulationValue_SPECIAL_CUM_COUPON
StipulationValue_SPECIAL_EX_COUPON = cvar.StipulationValue_SPECIAL_EX_COUPON
StipulationValue_SPECIAL_CUM_BONUS = cvar.StipulationValue_SPECIAL_CUM_BONUS
StipulationValue_SPECIAL_EX_BONUS = cvar.StipulationValue_SPECIAL_EX_BONUS
StipulationValue_SPECIAL_CUM_RIGHTS = cvar.StipulationValue_SPECIAL_CUM_RIGHTS
StipulationValue_SPECIAL_EX_RIGHTS = cvar.StipulationValue_SPECIAL_EX_RIGHTS
StipulationValue_SPECIAL_CUM_CAPITAL_REPAYMENTS = cvar.StipulationValue_SPECIAL_CUM_CAPITAL_REPAYMENTS
StipulationValue_SPECIAL_EX_CAPITAL_REPAYMENTS = cvar.StipulationValue_SPECIAL_EX_CAPITAL_REPAYMENTS
StipulationValue_CASH_SETTLEMENT = cvar.StipulationValue_CASH_SETTLEMENT
StipulationValue_SPECIAL_PRICE = cvar.StipulationValue_SPECIAL_PRICE
StipulationValue_REPORT_FOR_EUROPEAN_EQUITY_MARKET_SECURITIES = cvar.StipulationValue_REPORT_FOR_EUROPEAN_EQUITY_MARKET_SECURITIES
StipulationValue_GUARANTEED_DELIVERY = cvar.StipulationValue_GUARANTEED_DELIVERY
YieldType_AFTER_TAX_YIELD = cvar.YieldType_AFTER_TAX_YIELD
YieldType_ANNUAL_YIELD = cvar.YieldType_ANNUAL_YIELD
YieldType_YIELD_AT_ISSUE = cvar.YieldType_YIELD_AT_ISSUE
YieldType_YIELD_TO_AVERAGE_MATURITY = cvar.YieldType_YIELD_TO_AVERAGE_MATURITY
YieldType_BOOK_YIELD = cvar.YieldType_BOOK_YIELD
YieldType_YIELD_TO_NEXT_CALL = cvar.YieldType_YIELD_TO_NEXT_CALL
YieldType_YIELD_CHANGE_SINCE_CLOSE = cvar.YieldType_YIELD_CHANGE_SINCE_CLOSE
YieldType_CLOSING_YIELD = cvar.YieldType_CLOSING_YIELD
YieldType_COMPOUND_YIELD = cvar.YieldType_COMPOUND_YIELD
YieldType_CURRENT_YIELD = cvar.YieldType_CURRENT_YIELD
YieldType_TRUE_GROSS_YIELD = cvar.YieldType_TRUE_GROSS_YIELD
YieldType_GOVERNMENT_EQUIVALENT_YIELD = cvar.YieldType_GOVERNMENT_EQUIVALENT_YIELD
YieldType_YIELD_WITH_INFLATION_ASSUMPTION = cvar.YieldType_YIELD_WITH_INFLATION_ASSUMPTION
YieldType_INVERSE_FLOATER_BOND_YIELD = cvar.YieldType_INVERSE_FLOATER_BOND_YIELD
YieldType_MOST_RECENT_CLOSING_YIELD = cvar.YieldType_MOST_RECENT_CLOSING_YIELD
YieldType_CLOSING_YIELD_MOST_RECENT_MONTH = cvar.YieldType_CLOSING_YIELD_MOST_RECENT_MONTH
YieldType_CLOSING_YIELD_MOST_RECENT_QUARTER = cvar.YieldType_CLOSING_YIELD_MOST_RECENT_QUARTER
YieldType_CLOSING_YIELD_MOST_RECENT_YEAR = cvar.YieldType_CLOSING_YIELD_MOST_RECENT_YEAR
YieldType_YIELD_TO_LONGEST_AVERAGE_LIFE = cvar.YieldType_YIELD_TO_LONGEST_AVERAGE_LIFE
YieldType_MARK_TO_MARKET_YIELD = cvar.YieldType_MARK_TO_MARKET_YIELD
YieldType_YIELD_TO_MATURITY = cvar.YieldType_YIELD_TO_MATURITY
YieldType_YIELD_TO_NEXT_REFUND = cvar.YieldType_YIELD_TO_NEXT_REFUND
YieldType_OPEN_AVERAGE_YIELD = cvar.YieldType_OPEN_AVERAGE_YIELD
YieldType_YIELD_TO_NEXT_PUT = cvar.YieldType_YIELD_TO_NEXT_PUT
YieldType_PREVIOUS_CLOSE_YIELD = cvar.YieldType_PREVIOUS_CLOSE_YIELD
YieldType_PROCEEDS_YIELD = cvar.YieldType_PROCEEDS_YIELD
YieldType_SEMI_ANNUAL_YIELD = cvar.YieldType_SEMI_ANNUAL_YIELD
YieldType_YIELD_TO_SHORTEST_AVERAGE_LIFE = cvar.YieldType_YIELD_TO_SHORTEST_AVERAGE_LIFE
YieldType_SIMPLE_YIELD = cvar.YieldType_SIMPLE_YIELD
YieldType_TAX_EQUIVALENT_YIELD = cvar.YieldType_TAX_EQUIVALENT_YIELD
YieldType_YIELD_TO_TENDER_DATE = cvar.YieldType_YIELD_TO_TENDER_DATE
YieldType_TRUE_YIELD = cvar.YieldType_TRUE_YIELD
YieldType_YIELD_VALUE_OF_1_32 = cvar.YieldType_YIELD_VALUE_OF_1_32
YieldType_YIELD_TO_WORST = cvar.YieldType_YIELD_TO_WORST
SubscriptionRequestType_SNAPSHOT = cvar.SubscriptionRequestType_SNAPSHOT
SubscriptionRequestType_SNAPSHOT_PLUS_UPDATES = cvar.SubscriptionRequestType_SNAPSHOT_PLUS_UPDATES
SubscriptionRequestType_DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST = cvar.SubscriptionRequestType_DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST
MDUpdateType_FULL_REFRESH = cvar.MDUpdateType_FULL_REFRESH
MDUpdateType_INCREMENTAL_REFRESH = cvar.MDUpdateType_INCREMENTAL_REFRESH
MDEntryType_BID = cvar.MDEntryType_BID
MDEntryType_OFFER = cvar.MDEntryType_OFFER
MDEntryType_TRADE = cvar.MDEntryType_TRADE
MDEntryType_INDEX_VALUE = cvar.MDEntryType_INDEX_VALUE
MDEntryType_OPENING_PRICE = cvar.MDEntryType_OPENING_PRICE
MDEntryType_CLOSING_PRICE = cvar.MDEntryType_CLOSING_PRICE
MDEntryType_SETTLEMENT_PRICE = cvar.MDEntryType_SETTLEMENT_PRICE
MDEntryType_TRADING_SESSION_HIGH_PRICE = cvar.MDEntryType_TRADING_SESSION_HIGH_PRICE
MDEntryType_TRADING_SESSION_LOW_PRICE = cvar.MDEntryType_TRADING_SESSION_LOW_PRICE
MDEntryType_TRADING_SESSION_VWAP_PRICE = cvar.MDEntryType_TRADING_SESSION_VWAP_PRICE
MDEntryType_IMBALANCE = cvar.MDEntryType_IMBALANCE
MDEntryType_TRADE_VOLUME = cvar.MDEntryType_TRADE_VOLUME
MDEntryType_OPEN_INTEREST = cvar.MDEntryType_OPEN_INTEREST
TickDirection_PLUS_TICK = cvar.TickDirection_PLUS_TICK
TickDirection_ZERO_PLUS_TICK = cvar.TickDirection_ZERO_PLUS_TICK
TickDirection_MINUS_TICK = cvar.TickDirection_MINUS_TICK
TickDirection_ZERO_MINUS_TICK = cvar.TickDirection_ZERO_MINUS_TICK
QuoteCondition_OPEN_ACTIVE = cvar.QuoteCondition_OPEN_ACTIVE
QuoteCondition_CLOSED_INACTIVE = cvar.QuoteCondition_CLOSED_INACTIVE
QuoteCondition_EXCHANGE_BEST = cvar.QuoteCondition_EXCHANGE_BEST
QuoteCondition_CONSOLIDATED_BEST = cvar.QuoteCondition_CONSOLIDATED_BEST
QuoteCondition_LOCKED = cvar.QuoteCondition_LOCKED
QuoteCondition_CROSSED = cvar.QuoteCondition_CROSSED
QuoteCondition_DEPTH = cvar.QuoteCondition_DEPTH
QuoteCondition_FAST_TRADING = cvar.QuoteCondition_FAST_TRADING
QuoteCondition_NON_FIRM = cvar.QuoteCondition_NON_FIRM
TradeCondition_CASH_MARKET = cvar.TradeCondition_CASH_MARKET
TradeCondition_AVERAGE_PRICE_TRADE = cvar.TradeCondition_AVERAGE_PRICE_TRADE
TradeCondition_CASH_TRADE = cvar.TradeCondition_CASH_TRADE
TradeCondition_NEXT_DAY_MARKET = cvar.TradeCondition_NEXT_DAY_MARKET
TradeCondition_OPENING_REOPENING_TRADE_DETAIL = cvar.TradeCondition_OPENING_REOPENING_TRADE_DETAIL
TradeCondition_INTRADAY_TRADE_DETAIL = cvar.TradeCondition_INTRADAY_TRADE_DETAIL
TradeCondition_RULE127 = cvar.TradeCondition_RULE127
TradeCondition_RULE155 = cvar.TradeCondition_RULE155
TradeCondition_SOLD_LAST = cvar.TradeCondition_SOLD_LAST
TradeCondition_NEXT_DAY_TRADE = cvar.TradeCondition_NEXT_DAY_TRADE
TradeCondition_OPENED = cvar.TradeCondition_OPENED
TradeCondition_SELLER = cvar.TradeCondition_SELLER
TradeCondition_SOLD = cvar.TradeCondition_SOLD
TradeCondition_STOPPED_STOCK = cvar.TradeCondition_STOPPED_STOCK
TradeCondition_IMBALANCE_MORE_BUYERS = cvar.TradeCondition_IMBALANCE_MORE_BUYERS
TradeCondition_IMBALANCE_MORE_SELLERS = cvar.TradeCondition_IMBALANCE_MORE_SELLERS
TradeCondition_OPENING_PRICE = cvar.TradeCondition_OPENING_PRICE
MDUpdateAction_NEW = cvar.MDUpdateAction_NEW
MDUpdateAction_CHANGE = cvar.MDUpdateAction_CHANGE
MDUpdateAction_DELETE = cvar.MDUpdateAction_DELETE
MDReqRejReason_UNKNOWN_SYMBOL = cvar.MDReqRejReason_UNKNOWN_SYMBOL
MDReqRejReason_DUPLICATE_MDREQID = cvar.MDReqRejReason_DUPLICATE_MDREQID
MDReqRejReason_INSUFFICIENT_BANDWIDTH = cvar.MDReqRejReason_INSUFFICIENT_BANDWIDTH
MDReqRejReason_INSUFFICIENT_PERMISSIONS = cvar.MDReqRejReason_INSUFFICIENT_PERMISSIONS
MDReqRejReason_UNSUPPORTED_SUBSCRIPTIONREQUESTTYPE = cvar.MDReqRejReason_UNSUPPORTED_SUBSCRIPTIONREQUESTTYPE
MDReqRejReason_UNSUPPORTED_MARKETDEPTH = cvar.MDReqRejReason_UNSUPPORTED_MARKETDEPTH
MDReqRejReason_UNSUPPORTED_MDUPDATETYPE = cvar.MDReqRejReason_UNSUPPORTED_MDUPDATETYPE
MDReqRejReason_UNSUPPORTED_AGGREGATEDBOOK = cvar.MDReqRejReason_UNSUPPORTED_AGGREGATEDBOOK
MDReqRejReason_UNSUPPORTED_MDENTRYTYPE = cvar.MDReqRejReason_UNSUPPORTED_MDENTRYTYPE
MDReqRejReason_UNSUPPORTED_TRADINGSESSIONID = cvar.MDReqRejReason_UNSUPPORTED_TRADINGSESSIONID
MDReqRejReason_UNSUPPORTED_SCOPE = cvar.MDReqRejReason_UNSUPPORTED_SCOPE
MDReqRejReason_UNSUPPORTED_OPENCLOSESETTLEFLAG = cvar.MDReqRejReason_UNSUPPORTED_OPENCLOSESETTLEFLAG
MDReqRejReason_UNSUPPORTED_MDIMPLICITDELETE = cvar.MDReqRejReason_UNSUPPORTED_MDIMPLICITDELETE
DeleteReason_CANCELATION_TRADE_BUST = cvar.DeleteReason_CANCELATION_TRADE_BUST
DeleteReason_ERROR = cvar.DeleteReason_ERROR
OpenCloseSettlFlag_DAILY_OPEN_CLOSE_SETTLEMENT_ENTRY = cvar.OpenCloseSettlFlag_DAILY_OPEN_CLOSE_SETTLEMENT_ENTRY
OpenCloseSettlFlag_SESSION_OPEN_CLOSE_SETTLEMENT_ENTRY = cvar.OpenCloseSettlFlag_SESSION_OPEN_CLOSE_SETTLEMENT_ENTRY
OpenCloseSettlFlag_DELIVERY_SETTLEMENT_ENTRY = cvar.OpenCloseSettlFlag_DELIVERY_SETTLEMENT_ENTRY
OpenCloseSettlFlag_EXPECTED_ENTRY = cvar.OpenCloseSettlFlag_EXPECTED_ENTRY
OpenCloseSettlFlag_ENTRY_FROM_PREVIOUS_BUSINESS_DAY = cvar.OpenCloseSettlFlag_ENTRY_FROM_PREVIOUS_BUSINESS_DAY
OpenCloseSettlFlag_THEORETICAL_PRICE_VALUE = cvar.OpenCloseSettlFlag_THEORETICAL_PRICE_VALUE
FinancialStatus_BANKRUPT = cvar.FinancialStatus_BANKRUPT
FinancialStatus_PENDING_DELISTING = cvar.FinancialStatus_PENDING_DELISTING
CorporateAction_EX_DIVIDEND = cvar.CorporateAction_EX_DIVIDEND
CorporateAction_EX_DISTRIBUTION = cvar.CorporateAction_EX_DISTRIBUTION
CorporateAction_EX_RIGHTS = cvar.CorporateAction_EX_RIGHTS
CorporateAction_NEW = cvar.CorporateAction_NEW
CorporateAction_EX_INTEREST = cvar.CorporateAction_EX_INTEREST
QuoteStatus_ACCEPTED = cvar.QuoteStatus_ACCEPTED
QuoteStatus_CANCELED_FOR_SYMBOL = cvar.QuoteStatus_CANCELED_FOR_SYMBOL
QuoteStatus_CANCELED_FOR_SECURITY_TYPE = cvar.QuoteStatus_CANCELED_FOR_SECURITY_TYPE
QuoteStatus_CANCELED_FOR_UNDERLYING = cvar.QuoteStatus_CANCELED_FOR_UNDERLYING
QuoteStatus_CANCELED_ALL = cvar.QuoteStatus_CANCELED_ALL
QuoteStatus_REJECTED = cvar.QuoteStatus_REJECTED
QuoteStatus_REMOVED_FROM_MARKET = cvar.QuoteStatus_REMOVED_FROM_MARKET
QuoteStatus_EXPIRED = cvar.QuoteStatus_EXPIRED
QuoteStatus_QUERY = cvar.QuoteStatus_QUERY
QuoteStatus_QUOTE_NOT_FOUND = cvar.QuoteStatus_QUOTE_NOT_FOUND
QuoteStatus_PENDING = cvar.QuoteStatus_PENDING
QuoteStatus_PASS = cvar.QuoteStatus_PASS
QuoteStatus_LOCKED_MARKET_WARNING = cvar.QuoteStatus_LOCKED_MARKET_WARNING
QuoteStatus_CROSS_MARKET_WARNING = cvar.QuoteStatus_CROSS_MARKET_WARNING
QuoteStatus_CANCELED_DUE_TO_LOCK_MARKET = cvar.QuoteStatus_CANCELED_DUE_TO_LOCK_MARKET
QuoteStatus_CANCELED_DUE_TO_CROSS_MARKET = cvar.QuoteStatus_CANCELED_DUE_TO_CROSS_MARKET
QuoteCancelType_CANCEL_FOR_SYMBOL = cvar.QuoteCancelType_CANCEL_FOR_SYMBOL
QuoteCancelType_CANCEL_FOR_SECURITY_TYPE = cvar.QuoteCancelType_CANCEL_FOR_SECURITY_TYPE
QuoteCancelType_CANCEL_FOR_UNDERLYING_SYMBOL = cvar.QuoteCancelType_CANCEL_FOR_UNDERLYING_SYMBOL
QuoteCancelType_CANCEL_ALL_QUOTES = cvar.QuoteCancelType_CANCEL_ALL_QUOTES
QuoteRejectReason_UNKNOWN_SYMBOL = cvar.QuoteRejectReason_UNKNOWN_SYMBOL
QuoteRejectReason_EXCHANGE_CLOSED = cvar.QuoteRejectReason_EXCHANGE_CLOSED
QuoteRejectReason_QUOTE_REQUEST_EXCEEDS_LIMIT = cvar.QuoteRejectReason_QUOTE_REQUEST_EXCEEDS_LIMIT
QuoteRejectReason_TOO_LATE_TO_ENTER = cvar.QuoteRejectReason_TOO_LATE_TO_ENTER
QuoteRejectReason_UNKNOWN_QUOTE = cvar.QuoteRejectReason_UNKNOWN_QUOTE
QuoteRejectReason_DUPLICATE_QUOTE = cvar.QuoteRejectReason_DUPLICATE_QUOTE
QuoteRejectReason_INVALID_BID_ASK_SPREAD = cvar.QuoteRejectReason_INVALID_BID_ASK_SPREAD
QuoteRejectReason_INVALID_PRICE = cvar.QuoteRejectReason_INVALID_PRICE
QuoteRejectReason_NOT_AUTHORIZED_TO_QUOTE_SECURITY = cvar.QuoteRejectReason_NOT_AUTHORIZED_TO_QUOTE_SECURITY
QuoteResponseLevel_NO_ACKNOWLEDGEMENT = cvar.QuoteResponseLevel_NO_ACKNOWLEDGEMENT
QuoteResponseLevel_ACKNOWLEDGE_ONLY_NEGATIVE_OR_ERRONEOUS_QUOTES = cvar.QuoteResponseLevel_ACKNOWLEDGE_ONLY_NEGATIVE_OR_ERRONEOUS_QUOTES
QuoteResponseLevel_ACKNOWLEDGE_EACH_QUOTE_MESSAGES = cvar.QuoteResponseLevel_ACKNOWLEDGE_EACH_QUOTE_MESSAGES
QuoteRequestType_MANUAL = cvar.QuoteRequestType_MANUAL
QuoteRequestType_AUTOMATIC = cvar.QuoteRequestType_AUTOMATIC
SecurityRequestType_REQUEST_SECURITY_IDENTITY_AND_SPECIFICATIONS = cvar.SecurityRequestType_REQUEST_SECURITY_IDENTITY_AND_SPECIFICATIONS
SecurityRequestType_REQUEST_SECURITY_IDENTITY_FOR_THE_SPECIFICATIONS_PROVIDED = cvar.SecurityRequestType_REQUEST_SECURITY_IDENTITY_FOR_THE_SPECIFICATIONS_PROVIDED
SecurityRequestType_REQUEST_LIST_SECURITY_TYPES = cvar.SecurityRequestType_REQUEST_LIST_SECURITY_TYPES
SecurityRequestType_REQUEST_LIST_SECURITIES = cvar.SecurityRequestType_REQUEST_LIST_SECURITIES
SecurityResponseType_ACCEPT_SECURITY_PROPOSAL_AS_IS = cvar.SecurityResponseType_ACCEPT_SECURITY_PROPOSAL_AS_IS
SecurityResponseType_ACCEPT_SECURITY_PROPOSAL_WITH_REVISIONS_AS_INDICATED_IN_THE_MESSAGE = cvar.SecurityResponseType_ACCEPT_SECURITY_PROPOSAL_WITH_REVISIONS_AS_INDICATED_IN_THE_MESSAGE
SecurityResponseType_LIST_OF_SECURITY_TYPES_RETURNED_PER_REQUEST = cvar.SecurityResponseType_LIST_OF_SECURITY_TYPES_RETURNED_PER_REQUEST
SecurityResponseType_LIST_OF_SECURITIES_RETURNED_PER_REQUEST = cvar.SecurityResponseType_LIST_OF_SECURITIES_RETURNED_PER_REQUEST
SecurityResponseType_REJECT_SECURITY_PROPOSAL = cvar.SecurityResponseType_REJECT_SECURITY_PROPOSAL
SecurityResponseType_CAN_NOT_MATCH_SELECTION_CRITERIA = cvar.SecurityResponseType_CAN_NOT_MATCH_SELECTION_CRITERIA
SecurityTradingStatus_OPENING_DELAY = cvar.SecurityTradingStatus_OPENING_DELAY
SecurityTradingStatus_TRADING_HALT = cvar.SecurityTradingStatus_TRADING_HALT
SecurityTradingStatus_RESUME = cvar.SecurityTradingStatus_RESUME
SecurityTradingStatus_NO_OPEN_NO_RESUME = cvar.SecurityTradingStatus_NO_OPEN_NO_RESUME
SecurityTradingStatus_PRICE_INDICATION = cvar.SecurityTradingStatus_PRICE_INDICATION
SecurityTradingStatus_TRADING_RANGE_INDICATION = cvar.SecurityTradingStatus_TRADING_RANGE_INDICATION
SecurityTradingStatus_MARKET_IMBALANCE_BUY = cvar.SecurityTradingStatus_MARKET_IMBALANCE_BUY
SecurityTradingStatus_MARKET_IMBALANCE_SELL = cvar.SecurityTradingStatus_MARKET_IMBALANCE_SELL
SecurityTradingStatus_MARKET_ON_CLOSE_IMBALANCE_BUY = cvar.SecurityTradingStatus_MARKET_ON_CLOSE_IMBALANCE_BUY
SecurityTradingStatus_MARKET_ON_CLOSE_IMBALANCE_SELL = cvar.SecurityTradingStatus_MARKET_ON_CLOSE_IMBALANCE_SELL
SecurityTradingStatus_NOT_ASSIGNED = cvar.SecurityTradingStatus_NOT_ASSIGNED
SecurityTradingStatus_NO_MARKET_IMBALANCE = cvar.SecurityTradingStatus_NO_MARKET_IMBALANCE
SecurityTradingStatus_NO_MARKET_ON_CLOSE_IMBALANCE = cvar.SecurityTradingStatus_NO_MARKET_ON_CLOSE_IMBALANCE
SecurityTradingStatus_ITS_PRE_OPENING = cvar.SecurityTradingStatus_ITS_PRE_OPENING
SecurityTradingStatus_NEW_PRICE_INDICATION = cvar.SecurityTradingStatus_NEW_PRICE_INDICATION
SecurityTradingStatus_TRADE_DISSEMINATION_TIME = cvar.SecurityTradingStatus_TRADE_DISSEMINATION_TIME
SecurityTradingStatus_READY_TO_TRADE_START_OF_SESSION = cvar.SecurityTradingStatus_READY_TO_TRADE_START_OF_SESSION
SecurityTradingStatus_NOT_AVAILABLE_FOR_TRADING_END_OF_SESSION = cvar.SecurityTradingStatus_NOT_AVAILABLE_FOR_TRADING_END_OF_SESSION
SecurityTradingStatus_NOT_TRADED_ON_THIS_MARKET = cvar.SecurityTradingStatus_NOT_TRADED_ON_THIS_MARKET
SecurityTradingStatus_UNKNOWN_OR_INVALID = cvar.SecurityTradingStatus_UNKNOWN_OR_INVALID
SecurityTradingStatus_PRE_OPEN = cvar.SecurityTradingStatus_PRE_OPEN
SecurityTradingStatus_OPENING_ROTATION = cvar.SecurityTradingStatus_OPENING_ROTATION
SecurityTradingStatus_FAST_MARKET = cvar.SecurityTradingStatus_FAST_MARKET
HaltReason_ORDER_IMBALANCE = cvar.HaltReason_ORDER_IMBALANCE
HaltReason_EQUIPMENT_CHANGEOVER = cvar.HaltReason_EQUIPMENT_CHANGEOVER
HaltReason_NEWS_PENDING = cvar.HaltReason_NEWS_PENDING
HaltReason_NEWS_DISSEMINATION = cvar.HaltReason_NEWS_DISSEMINATION
HaltReason_ORDER_INFLUX = cvar.HaltReason_ORDER_INFLUX
HaltReason_ADDITIONAL_INFORMATION = cvar.HaltReason_ADDITIONAL_INFORMATION
Adjustment_CANCEL = cvar.Adjustment_CANCEL
Adjustment_ERROR = cvar.Adjustment_ERROR
Adjustment_CORRECTION = cvar.Adjustment_CORRECTION
TradSesMethod_ELECTRONIC = cvar.TradSesMethod_ELECTRONIC
TradSesMethod_OPEN_OUTCRY = cvar.TradSesMethod_OPEN_OUTCRY
TradSesMethod_TWO_PARTY = cvar.TradSesMethod_TWO_PARTY
TradSesMode_TESTING = cvar.TradSesMode_TESTING
TradSesMode_SIMULATED = cvar.TradSesMode_SIMULATED
TradSesMode_PRODUCTION = cvar.TradSesMode_PRODUCTION
TradSesStatus_UNKNOWN = cvar.TradSesStatus_UNKNOWN
TradSesStatus_HALTED = cvar.TradSesStatus_HALTED
TradSesStatus_OPEN = cvar.TradSesStatus_OPEN
TradSesStatus_CLOSED = cvar.TradSesStatus_CLOSED
TradSesStatus_PRE_OPEN = cvar.TradSesStatus_PRE_OPEN
TradSesStatus_PRE_CLOSE = cvar.TradSesStatus_PRE_CLOSE
TradSesStatus_REQUEST_REJECTED = cvar.TradSesStatus_REQUEST_REJECTED
MessageEncoding_ISO_2022_JP = cvar.MessageEncoding_ISO_2022_JP
MessageEncoding_EUC_JP = cvar.MessageEncoding_EUC_JP
MessageEncoding_SHIFT_JIS = cvar.MessageEncoding_SHIFT_JIS
MessageEncoding_UTF_8 = cvar.MessageEncoding_UTF_8
QuoteEntryRejectReason_UNKNOWN_SYMBOL = cvar.QuoteEntryRejectReason_UNKNOWN_SYMBOL
QuoteEntryRejectReason_EXCHANGE_CLOSED = cvar.QuoteEntryRejectReason_EXCHANGE_CLOSED
QuoteEntryRejectReason_QUOTE_EXCEEDS_LIMIT = cvar.QuoteEntryRejectReason_QUOTE_EXCEEDS_LIMIT
QuoteEntryRejectReason_TOO_LATE_TO_ENTER = cvar.QuoteEntryRejectReason_TOO_LATE_TO_ENTER
QuoteEntryRejectReason_UNKNOWN_QUOTE = cvar.QuoteEntryRejectReason_UNKNOWN_QUOTE
QuoteEntryRejectReason_DUPLICATE_QUOTE = cvar.QuoteEntryRejectReason_DUPLICATE_QUOTE
QuoteEntryRejectReason_INVALID_BID_ASK_SPREAD = cvar.QuoteEntryRejectReason_INVALID_BID_ASK_SPREAD
QuoteEntryRejectReason_INVALID_PRICE = cvar.QuoteEntryRejectReason_INVALID_PRICE
QuoteEntryRejectReason_NOT_AUTHORIZED_TO_QUOTE_SECURITY = cvar.QuoteEntryRejectReason_NOT_AUTHORIZED_TO_QUOTE_SECURITY
SessionRejectReason_INVALID_TAG_NUMBER = cvar.SessionRejectReason_INVALID_TAG_NUMBER
SessionRejectReason_REQUIRED_TAG_MISSING = cvar.SessionRejectReason_REQUIRED_TAG_MISSING
SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE = cvar.SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE
SessionRejectReason_UNDEFINED_TAG = cvar.SessionRejectReason_UNDEFINED_TAG
SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE = cvar.SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE
SessionRejectReason_VALUE_IS_INCORRECT = cvar.SessionRejectReason_VALUE_IS_INCORRECT
SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE = cvar.SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE
SessionRejectReason_DECRYPTION_PROBLEM = cvar.SessionRejectReason_DECRYPTION_PROBLEM
SessionRejectReason_SIGNATURE_PROBLEM = cvar.SessionRejectReason_SIGNATURE_PROBLEM
SessionRejectReason_COMPID_PROBLEM = cvar.SessionRejectReason_COMPID_PROBLEM
SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM = cvar.SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM
SessionRejectReason_INVALID_MSGTYPE = cvar.SessionRejectReason_INVALID_MSGTYPE
SessionRejectReason_XML_VALIDATION_ERROR = cvar.SessionRejectReason_XML_VALIDATION_ERROR
SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE = cvar.SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE
SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER = cvar.SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER
SessionRejectReason_REPEATING_GROUP_FIELDS_OUT_OF_ORDER = cvar.SessionRejectReason_REPEATING_GROUP_FIELDS_OUT_OF_ORDER
SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP = cvar.SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP
SessionRejectReason_NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER = cvar.SessionRejectReason_NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER
SessionRejectReason_OTHER = cvar.SessionRejectReason_OTHER
BidRequestTransType_NEW = cvar.BidRequestTransType_NEW
BidRequestTransType_CANCEL = cvar.BidRequestTransType_CANCEL
ExecRestatementReason_GT_CORPORATE_ACTION = cvar.ExecRestatementReason_GT_CORPORATE_ACTION
ExecRestatementReason_GT_RENEWAL_RESTATEMENT = cvar.ExecRestatementReason_GT_RENEWAL_RESTATEMENT
ExecRestatementReason_VERBAL_CHANGE = cvar.ExecRestatementReason_VERBAL_CHANGE
ExecRestatementReason_REPRICING_OF_ORDER = cvar.ExecRestatementReason_REPRICING_OF_ORDER
ExecRestatementReason_BROKER_OPTION = cvar.ExecRestatementReason_BROKER_OPTION
ExecRestatementReason_PARTIAL_DECLINE_OF_ORDERQTY = cvar.ExecRestatementReason_PARTIAL_DECLINE_OF_ORDERQTY
ExecRestatementReason_CANCEL_ON_TRADING_HALT = cvar.ExecRestatementReason_CANCEL_ON_TRADING_HALT
ExecRestatementReason_CANCEL_ON_SYSTEM_FAILURE = cvar.ExecRestatementReason_CANCEL_ON_SYSTEM_FAILURE
ExecRestatementReason_MARKET_OPTION = cvar.ExecRestatementReason_MARKET_OPTION
ExecRestatementReason_CANCELED_NOT_BEST = cvar.ExecRestatementReason_CANCELED_NOT_BEST
BusinessRejectReason_OTHER = cvar.BusinessRejectReason_OTHER
BusinessRejectReason_UNKOWN_ID = cvar.BusinessRejectReason_UNKOWN_ID
BusinessRejectReason_UNKNOWN_SECURITY = cvar.BusinessRejectReason_UNKNOWN_SECURITY
BusinessRejectReason_UNSUPPORTED_MESSAGE_TYPE = cvar.BusinessRejectReason_UNSUPPORTED_MESSAGE_TYPE
BusinessRejectReason_APPLICATION_NOT_AVAILABLE = cvar.BusinessRejectReason_APPLICATION_NOT_AVAILABLE
BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING = cvar.BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING
BusinessRejectReason_NOT_AUTHORIZED = cvar.BusinessRejectReason_NOT_AUTHORIZED
BusinessRejectReason_DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME = cvar.BusinessRejectReason_DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME
MsgDirection_SEND = cvar.MsgDirection_SEND
MsgDirection_RECEIVE = cvar.MsgDirection_RECEIVE
DiscretionInst_RELATED_TO_DISPLAYED_PRICE = cvar.DiscretionInst_RELATED_TO_DISPLAYED_PRICE
DiscretionInst_RELATED_TO_MARKET_PRICE = cvar.DiscretionInst_RELATED_TO_MARKET_PRICE
DiscretionInst_RELATED_TO_PRIMARY_PRICE = cvar.DiscretionInst_RELATED_TO_PRIMARY_PRICE
DiscretionInst_RELATED_TO_LOCAL_PRIMARY_PRICE = cvar.DiscretionInst_RELATED_TO_LOCAL_PRIMARY_PRICE
DiscretionInst_RELATED_TO_MIDPOINT_PRICE = cvar.DiscretionInst_RELATED_TO_MIDPOINT_PRICE
DiscretionInst_RELATED_TO_LAST_TRADE_PRICE = cvar.DiscretionInst_RELATED_TO_LAST_TRADE_PRICE
DiscretionInst_RELATED_TO_VWAP = cvar.DiscretionInst_RELATED_TO_VWAP
BidType_NON_DISCLOSED = cvar.BidType_NON_DISCLOSED
BidType_DISCLOSED_STYLE = cvar.BidType_DISCLOSED_STYLE
BidType_NO_BIDDING_PROCESS = cvar.BidType_NO_BIDDING_PROCESS
BidDescriptorType_SECTOR = cvar.BidDescriptorType_SECTOR
BidDescriptorType_COUNTRY = cvar.BidDescriptorType_COUNTRY
BidDescriptorType_INDEX = cvar.BidDescriptorType_INDEX
SideValueInd_SIDEVALUE1 = cvar.SideValueInd_SIDEVALUE1
SideValueInd_SIDEVALUE2 = cvar.SideValueInd_SIDEVALUE2
LiquidityIndType_FIVEDAY_MOVING_AVERAGE = cvar.LiquidityIndType_FIVEDAY_MOVING_AVERAGE
LiquidityIndType_TWENTYDAY_MOVING_AVERAGE = cvar.LiquidityIndType_TWENTYDAY_MOVING_AVERAGE
LiquidityIndType_NORMAL_MARKET_SIZE = cvar.LiquidityIndType_NORMAL_MARKET_SIZE
LiquidityIndType_OTHER = cvar.LiquidityIndType_OTHER
ProgRptReqs_BUYSIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUSREQUEST = cvar.ProgRptReqs_BUYSIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUSREQUEST
ProgRptReqs_SELLSIDE_PERIODICALLY_SENDS_STATUS_USING_LISTSTATUS = cvar.ProgRptReqs_SELLSIDE_PERIODICALLY_SENDS_STATUS_USING_LISTSTATUS
ProgRptReqs_REAL_TIME_EXECUTION_REPORTS = cvar.ProgRptReqs_REAL_TIME_EXECUTION_REPORTS
IncTaxInd_NET = cvar.IncTaxInd_NET
IncTaxInd_GROSS = cvar.IncTaxInd_GROSS
BidTradeType_RISK_TRADE = cvar.BidTradeType_RISK_TRADE
BidTradeType_VWAP_GUARANTEE = cvar.BidTradeType_VWAP_GUARANTEE
BidTradeType_AGENCY = cvar.BidTradeType_AGENCY
BidTradeType_GUARANTEED_CLOSE = cvar.BidTradeType_GUARANTEED_CLOSE
BasisPxType_CLOSING_PRICE_AT_MORNING_SESSION = cvar.BasisPxType_CLOSING_PRICE_AT_MORNING_SESSION
BasisPxType_CLOSING_PRICE = cvar.BasisPxType_CLOSING_PRICE
BasisPxType_CURRENT_PRICE = cvar.BasisPxType_CURRENT_PRICE
BasisPxType_SQ = cvar.BasisPxType_SQ
BasisPxType_VWAP_THROUGH_A_DAY = cvar.BasisPxType_VWAP_THROUGH_A_DAY
BasisPxType_VWAP_THROUGH_A_MORNING_SESSION = cvar.BasisPxType_VWAP_THROUGH_A_MORNING_SESSION
BasisPxType_VWAP_THROUGH_AN_AFTERNOON_SESSION = cvar.BasisPxType_VWAP_THROUGH_AN_AFTERNOON_SESSION
BasisPxType_VWAP_THROUGH_A_DAY_EXCEPT_YORI = cvar.BasisPxType_VWAP_THROUGH_A_DAY_EXCEPT_YORI
BasisPxType_VWAP_THROUGH_A_MORNING_SESSION_EXCEPT_YORI = cvar.BasisPxType_VWAP_THROUGH_A_MORNING_SESSION_EXCEPT_YORI
BasisPxType_VWAP_THROUGH_AN_AFTERNOON_SESSION_EXCEPT_YORI = cvar.BasisPxType_VWAP_THROUGH_AN_AFTERNOON_SESSION_EXCEPT_YORI
BasisPxType_STRIKE = cvar.BasisPxType_STRIKE
BasisPxType_OPEN = cvar.BasisPxType_OPEN
BasisPxType_OTHERS = cvar.BasisPxType_OTHERS
PriceType_PERCENTAGE = cvar.PriceType_PERCENTAGE
PriceType_PER_UNIT = cvar.PriceType_PER_UNIT
PriceType_FIXED_AMOUNT = cvar.PriceType_FIXED_AMOUNT
PriceType_DISCOUNT = cvar.PriceType_DISCOUNT
PriceType_PREMIUM = cvar.PriceType_PREMIUM
PriceType_SPREAD = cvar.PriceType_SPREAD
PriceType_TED_PRICE = cvar.PriceType_TED_PRICE
PriceType_TED_YIELD = cvar.PriceType_TED_YIELD
PriceType_YIELD = cvar.PriceType_YIELD
GTBookingInst_BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION = cvar.GTBookingInst_BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION
GTBookingInst_ACCUMULATE_EXECUTIONS_UNTIL_ORDER_IS_FILLED_OR_EXPIRES = cvar.GTBookingInst_ACCUMULATE_EXECUTIONS_UNTIL_ORDER_IS_FILLED_OR_EXPIRES
GTBookingInst_ACCUMULATE_UNTIL_VERBALLY_NOTIFIED_OTHERWISE = cvar.GTBookingInst_ACCUMULATE_UNTIL_VERBALLY_NOTIFIED_OTHERWISE
ListStatusType_ACK = cvar.ListStatusType_ACK
ListStatusType_RESPONSE = cvar.ListStatusType_RESPONSE
ListStatusType_TIMED = cvar.ListStatusType_TIMED
ListStatusType_EXECSTARTED = cvar.ListStatusType_EXECSTARTED
ListStatusType_ALLDONE = cvar.ListStatusType_ALLDONE
ListStatusType_ALERT = cvar.ListStatusType_ALERT
NetGrossInd_NET = cvar.NetGrossInd_NET
NetGrossInd_GROSS = cvar.NetGrossInd_GROSS
ListOrderStatus_INBIDDINGPROCESS = cvar.ListOrderStatus_INBIDDINGPROCESS
ListOrderStatus_RECEIVEDFOREXECUTION = cvar.ListOrderStatus_RECEIVEDFOREXECUTION
ListOrderStatus_EXECUTING = cvar.ListOrderStatus_EXECUTING
ListOrderStatus_CANCELING = cvar.ListOrderStatus_CANCELING
ListOrderStatus_ALERT = cvar.ListOrderStatus_ALERT
ListOrderStatus_ALL_DONE = cvar.ListOrderStatus_ALL_DONE
ListOrderStatus_REJECT = cvar.ListOrderStatus_REJECT
ListExecInstType_IMMEDIATE = cvar.ListExecInstType_IMMEDIATE
ListExecInstType_WAIT_FOR_EXECUTE_INSTRUCTION = cvar.ListExecInstType_WAIT_FOR_EXECUTE_INSTRUCTION
ListExecInstType_EXCHANGE_SWITCH_CIV_ORDER_SELL_DRIVEN = cvar.ListExecInstType_EXCHANGE_SWITCH_CIV_ORDER_SELL_DRIVEN
ListExecInstType_EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_TOP_UP = cvar.ListExecInstType_EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_TOP_UP
ListExecInstType_EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_WITHDRAW = cvar.ListExecInstType_EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_WITHDRAW
CxlRejResponseTo_ORDER_CANCEL_REQUEST = cvar.CxlRejResponseTo_ORDER_CANCEL_REQUEST
CxlRejResponseTo_ORDER_CANCEL_REPLACE_REQUEST = cvar.CxlRejResponseTo_ORDER_CANCEL_REPLACE_REQUEST
MultiLegReportingType_SINGLE_SECURITY = cvar.MultiLegReportingType_SINGLE_SECURITY
MultiLegReportingType_INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY = cvar.MultiLegReportingType_INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY
MultiLegReportingType_MULTI_LEG_SECURITY = cvar.MultiLegReportingType_MULTI_LEG_SECURITY
PartyIDSource_BIC = cvar.PartyIDSource_BIC
PartyIDSource_GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER = cvar.PartyIDSource_GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER
PartyIDSource_PROPRIETARY_CUSTOM_CODE = cvar.PartyIDSource_PROPRIETARY_CUSTOM_CODE
PartyIDSource_ISO_COUNTRY_CODE = cvar.PartyIDSource_ISO_COUNTRY_CODE
PartyIDSource_SETTLEMENT_ENTITY_LOCATION = cvar.PartyIDSource_SETTLEMENT_ENTITY_LOCATION
PartyIDSource_MIC = cvar.PartyIDSource_MIC
PartyIDSource_CSD_PARTICIPANT_MEMBER_CODE = cvar.PartyIDSource_CSD_PARTICIPANT_MEMBER_CODE
PartyIDSource_KOREAN_INVESTOR_ID = cvar.PartyIDSource_KOREAN_INVESTOR_ID
PartyIDSource_TAIWANESE_QUALIFIED_FOREIGN_INVESTOR_ID_QFII_FID = cvar.PartyIDSource_TAIWANESE_QUALIFIED_FOREIGN_INVESTOR_ID_QFII_FID
PartyIDSource_TAIWANESE_TRADING_ACCOUNT = cvar.PartyIDSource_TAIWANESE_TRADING_ACCOUNT
PartyIDSource_MALAYSIAN_CENTRAL_DEPOSITORY_NUMBER = cvar.PartyIDSource_MALAYSIAN_CENTRAL_DEPOSITORY_NUMBER
PartyIDSource_CHINESE_B_SHARE = cvar.PartyIDSource_CHINESE_B_SHARE
PartyIDSource_UK_NATIONAL_INSURANCE_OR_PENSION_NUMBER = cvar.PartyIDSource_UK_NATIONAL_INSURANCE_OR_PENSION_NUMBER
PartyIDSource_US_SOCIAL_SECURITY_NUMBER = cvar.PartyIDSource_US_SOCIAL_SECURITY_NUMBER
PartyIDSource_US_EMPLOYER_IDENTIFICATION_NUMBER = cvar.PartyIDSource_US_EMPLOYER_IDENTIFICATION_NUMBER
PartyIDSource_AUSTRALIAN_BUSINESS_NUMBER = cvar.PartyIDSource_AUSTRALIAN_BUSINESS_NUMBER
PartyIDSource_AUSTRALIAN_TAX_FILE_NUMBER = cvar.PartyIDSource_AUSTRALIAN_TAX_FILE_NUMBER
PartyIDSource_DIRECTED_BROKER = cvar.PartyIDSource_DIRECTED_BROKER
PartyRole_EXECUTING_FIRM = cvar.PartyRole_EXECUTING_FIRM
PartyRole_BROKER_OF_CREDIT = cvar.PartyRole_BROKER_OF_CREDIT
PartyRole_CLIENT_ID = cvar.PartyRole_CLIENT_ID
PartyRole_CLEARING_FIRM = cvar.PartyRole_CLEARING_FIRM
PartyRole_INVESTOR_ID = cvar.PartyRole_INVESTOR_ID
PartyRole_INTRODUCING_FIRM = cvar.PartyRole_INTRODUCING_FIRM
PartyRole_ENTERING_FIRM = cvar.PartyRole_ENTERING_FIRM
PartyRole_LOCATE_LENDING_FIRM = cvar.PartyRole_LOCATE_LENDING_FIRM
PartyRole_FUND_MANAGER_CLIENT_ID = cvar.PartyRole_FUND_MANAGER_CLIENT_ID
Product_AGENCY = cvar.Product_AGENCY
Product_COMMODITY = cvar.Product_COMMODITY
Product_CORPORATE = cvar.Product_CORPORATE
Product_CURRENCY = cvar.Product_CURRENCY
Product_EQUITY = cvar.Product_EQUITY
Product_GOVERNMENT = cvar.Product_GOVERNMENT
Product_INDEX = cvar.Product_INDEX
Product_LOAN = cvar.Product_LOAN
Product_MONEYMARKET = cvar.Product_MONEYMARKET
Product_MORTGAGE = cvar.Product_MORTGAGE
Product_MUNICIPAL = cvar.Product_MUNICIPAL
Product_OTHER = cvar.Product_OTHER
Product_FINANCING = cvar.Product_FINANCING
QuantityType_SHARES = cvar.QuantityType_SHARES
QuantityType_BONDS = cvar.QuantityType_BONDS
QuantityType_CURRENTFACE = cvar.QuantityType_CURRENTFACE
QuantityType_ORIGINALFACE = cvar.QuantityType_ORIGINALFACE
QuantityType_CURRENCY = cvar.QuantityType_CURRENCY
QuantityType_CONTRACTS = cvar.QuantityType_CONTRACTS
QuantityType_OTHER = cvar.QuantityType_OTHER
QuantityType_PAR = cvar.QuantityType_PAR
RoundingDirection_ROUND_TO_NEAREST = cvar.RoundingDirection_ROUND_TO_NEAREST
RoundingDirection_ROUND_DOWN = cvar.RoundingDirection_ROUND_DOWN
RoundingDirection_ROUND_UP = cvar.RoundingDirection_ROUND_UP
DistribPaymentMethod_CREST = cvar.DistribPaymentMethod_CREST
DistribPaymentMethod_NSCC = cvar.DistribPaymentMethod_NSCC
DistribPaymentMethod_EUROCLEAR = cvar.DistribPaymentMethod_EUROCLEAR
DistribPaymentMethod_CLEARSTREAM = cvar.DistribPaymentMethod_CLEARSTREAM
DistribPaymentMethod_CHEQUE = cvar.DistribPaymentMethod_CHEQUE
DistribPaymentMethod_TELEGRAPHIC_TRANSFER = cvar.DistribPaymentMethod_TELEGRAPHIC_TRANSFER
DistribPaymentMethod_FEDWIRE = cvar.DistribPaymentMethod_FEDWIRE
DistribPaymentMethod_DIRECT_CREDIT = cvar.DistribPaymentMethod_DIRECT_CREDIT
DistribPaymentMethod_ACH_CREDIT = cvar.DistribPaymentMethod_ACH_CREDIT
CancellationRights_NO_EXECUTION_ONLY = cvar.CancellationRights_NO_EXECUTION_ONLY
CancellationRights_NO_WAIVER_AGREEMENT = cvar.CancellationRights_NO_WAIVER_AGREEMENT
CancellationRights_NO_INSTITUTIONAL = cvar.CancellationRights_NO_INSTITUTIONAL
MoneyLaunderingStatus_PASSED = cvar.MoneyLaunderingStatus_PASSED
MoneyLaunderingStatus_NOT_CHECKED = cvar.MoneyLaunderingStatus_NOT_CHECKED
MoneyLaunderingStatus_EXEMPT_BELOW_THE_LIMIT = cvar.MoneyLaunderingStatus_EXEMPT_BELOW_THE_LIMIT
MoneyLaunderingStatus_EXEMPT_CLIENT_MONEY_TYPE_EXEMPTION = cvar.MoneyLaunderingStatus_EXEMPT_CLIENT_MONEY_TYPE_EXEMPTION
MoneyLaunderingStatus_EXEMPT_AUTHORISED_CREDIT_OR_FINANCIAL_INSTITUTION = cvar.MoneyLaunderingStatus_EXEMPT_AUTHORISED_CREDIT_OR_FINANCIAL_INSTITUTION
ExecPriceType_BID_PRICE = cvar.ExecPriceType_BID_PRICE
ExecPriceType_CREATION_PRICE = cvar.ExecPriceType_CREATION_PRICE
ExecPriceType_CREATION_PRICE_PLUS_ADJUSTMENT_PERCENT = cvar.ExecPriceType_CREATION_PRICE_PLUS_ADJUSTMENT_PERCENT
ExecPriceType_CREATION_PRICE_PLUS_ADJUSTMENT_AMOUNT = cvar.ExecPriceType_CREATION_PRICE_PLUS_ADJUSTMENT_AMOUNT
ExecPriceType_OFFER_PRICE = cvar.ExecPriceType_OFFER_PRICE
ExecPriceType_OFFER_PRICE_MINUS_ADJUSTMENT_PERCENT = cvar.ExecPriceType_OFFER_PRICE_MINUS_ADJUSTMENT_PERCENT
ExecPriceType_OFFER_PRICE_MINUS_ADJUSTMENT_AMOUNT = cvar.ExecPriceType_OFFER_PRICE_MINUS_ADJUSTMENT_AMOUNT
ExecPriceType_SINGLE_PRICE = cvar.ExecPriceType_SINGLE_PRICE
TradeReportTransType_NEW = cvar.TradeReportTransType_NEW
TradeReportTransType_CANCEL = cvar.TradeReportTransType_CANCEL
TradeReportTransType_REPLACE = cvar.TradeReportTransType_REPLACE
TradeReportTransType_RELEASE = cvar.TradeReportTransType_RELEASE
TradeReportTransType_REVERSE = cvar.TradeReportTransType_REVERSE
PaymentMethod_CREST = cvar.PaymentMethod_CREST
PaymentMethod_NSCC = cvar.PaymentMethod_NSCC
PaymentMethod_EUROCLEAR = cvar.PaymentMethod_EUROCLEAR
PaymentMethod_CLEARSTREAM = cvar.PaymentMethod_CLEARSTREAM
PaymentMethod_CHEQUE = cvar.PaymentMethod_CHEQUE
PaymentMethod_TELEGRAPHIC_TRANSFER = cvar.PaymentMethod_TELEGRAPHIC_TRANSFER
PaymentMethod_FEDWIRE = cvar.PaymentMethod_FEDWIRE
PaymentMethod_DEBIT_CARD = cvar.PaymentMethod_DEBIT_CARD
PaymentMethod_DIRECT_DEBIT = cvar.PaymentMethod_DIRECT_DEBIT
TaxAdvantageType_NONE = cvar.TaxAdvantageType_NONE
TaxAdvantageType_MAXI_ISA = cvar.TaxAdvantageType_MAXI_ISA
TaxAdvantageType_TESSA = cvar.TaxAdvantageType_TESSA
TaxAdvantageType_MINI_CASH_ISA = cvar.TaxAdvantageType_MINI_CASH_ISA
TaxAdvantageType_MINI_STOCKS_AND_SHARES_ISA = cvar.TaxAdvantageType_MINI_STOCKS_AND_SHARES_ISA
TaxAdvantageType_MINI_INSURANCE_ISA = cvar.TaxAdvantageType_MINI_INSURANCE_ISA
TaxAdvantageType_CURRENT_YEAR_PAYMENT = cvar.TaxAdvantageType_CURRENT_YEAR_PAYMENT
TaxAdvantageType_PRIOR_YEAR_PAYMENT = cvar.TaxAdvantageType_PRIOR_YEAR_PAYMENT
TaxAdvantageType_ASSET_TRANSFER = cvar.TaxAdvantageType_ASSET_TRANSFER
TaxAdvantageType_EMPLOYEE_PRIOR_YEAR = cvar.TaxAdvantageType_EMPLOYEE_PRIOR_YEAR
TaxAdvantageType_OTHER = cvar.TaxAdvantageType_OTHER
FundRenewWaiv_YES = cvar.FundRenewWaiv_YES
FundRenewWaiv_NO = cvar.FundRenewWaiv_NO
RegistStatus_ACCEPTED = cvar.RegistStatus_ACCEPTED
RegistStatus_REJECTED = cvar.RegistStatus_REJECTED
RegistStatus_HELD = cvar.RegistStatus_HELD
RegistStatus_REMINDER = cvar.RegistStatus_REMINDER
RegistRejReasonCode_INVALID_UNACCEPTABLE_ACCOUNT_TYPE = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_ACCOUNT_TYPE
RegistRejReasonCode_INVALID_UNACCEPTABLE_TAX_EXEMPT_TYPE = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_TAX_EXEMPT_TYPE
RegistRejReasonCode_INVALID_UNACCEPTABLE_OWNERSHIP_TYPE = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_OWNERSHIP_TYPE
RegistRejReasonCode_INVALID_UNACCEPTABLE_NO_REG_DETLS = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_NO_REG_DETLS
RegistRejReasonCode_INVALID_UNACCEPTABLE_REG_SEQ_NO = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_REG_SEQ_NO
RegistRejReasonCode_INVALID_UNACCEPTABLE_REG_DTLS = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_REG_DTLS
RegistRejReasonCode_INVALID_UNACCEPTABLE_MAILING_DTLS = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_MAILING_DTLS
RegistRejReasonCode_INVALID_UNACCEPTABLE_MAILING_INST = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_MAILING_INST
RegistRejReasonCode_INVALID_UNACCEPTABLE_INVESTOR_ID = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_INVESTOR_ID
RegistRejReasonCode_INVALID_UNACCEPTABLE_INVESTOR_ID_SOURCE = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_INVESTOR_ID_SOURCE
RegistRejReasonCode_INVALID_UNACCEPTABLE_DATE_OF_BIRTH = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_DATE_OF_BIRTH
RegistRejReasonCode_INVALID_UNACCEPTABLE_INVESTOR_COUNTRY_OF_RESIDENCE = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_INVESTOR_COUNTRY_OF_RESIDENCE
RegistRejReasonCode_INVALID_UNACCEPTABLE_NODISTRIBINSTNS = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_NODISTRIBINSTNS
RegistRejReasonCode_INVALID_UNACCEPTABLE_DISTRIB_PERCENTAGE = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_DISTRIB_PERCENTAGE
RegistRejReasonCode_INVALID_UNACCEPTABLE_DISTRIB_PAYMENT_METHOD = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_DISTRIB_PAYMENT_METHOD
RegistRejReasonCode_INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NAME = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NAME
RegistRejReasonCode_INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_CODE = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_CODE
RegistRejReasonCode_INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NUM = cvar.RegistRejReasonCode_INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NUM
RegistRejReasonCode_OTHER = cvar.RegistRejReasonCode_OTHER
RegistTransType_NEW = cvar.RegistTransType_NEW
RegistTransType_REPLACE = cvar.RegistTransType_REPLACE
RegistTransType_CANCEL = cvar.RegistTransType_CANCEL
OwnershipType_JOINT_INVESTORS = cvar.OwnershipType_JOINT_INVESTORS
OwnershipType_TENANTS_IN_COMMON = cvar.OwnershipType_TENANTS_IN_COMMON
OwnershipType_JOINT_TRUSTEES = cvar.OwnershipType_JOINT_TRUSTEES
ContAmtType_COMMISSION_AMOUNT = cvar.ContAmtType_COMMISSION_AMOUNT
ContAmtType_COMMISSION_PERCENT = cvar.ContAmtType_COMMISSION_PERCENT
ContAmtType_INITIAL_CHARGE_AMOUNT = cvar.ContAmtType_INITIAL_CHARGE_AMOUNT
ContAmtType_INITIAL_CHARGE_PERCENT = cvar.ContAmtType_INITIAL_CHARGE_PERCENT
ContAmtType_DISCOUNT_AMOUNT = cvar.ContAmtType_DISCOUNT_AMOUNT
ContAmtType_DISCOUNT_PERCENT = cvar.ContAmtType_DISCOUNT_PERCENT
ContAmtType_DILUTION_LEVY_AMOUNT = cvar.ContAmtType_DILUTION_LEVY_AMOUNT
ContAmtType_DILUTION_LEVY_PERCENT = cvar.ContAmtType_DILUTION_LEVY_PERCENT
ContAmtType_EXIT_CHARGE_AMOUNT = cvar.ContAmtType_EXIT_CHARGE_AMOUNT
OwnerType_INDIVIDUAL_INVESTOR = cvar.OwnerType_INDIVIDUAL_INVESTOR
OwnerType_PUBLIC_COMPANY = cvar.OwnerType_PUBLIC_COMPANY
OwnerType_PRIVATE_COMPANY = cvar.OwnerType_PRIVATE_COMPANY
OwnerType_INDIVIDUAL_TRUSTEE = cvar.OwnerType_INDIVIDUAL_TRUSTEE
OwnerType_COMPANY_TRUSTEE = cvar.OwnerType_COMPANY_TRUSTEE
OwnerType_PENSION_PLAN = cvar.OwnerType_PENSION_PLAN
OwnerType_CUSTODIAN_UNDER_GIFTS_TO_MINORS_ACT = cvar.OwnerType_CUSTODIAN_UNDER_GIFTS_TO_MINORS_ACT
OwnerType_TRUSTS = cvar.OwnerType_TRUSTS
OwnerType_FIDUCIARIES = cvar.OwnerType_FIDUCIARIES
OrderCapacity_AGENCY = cvar.OrderCapacity_AGENCY
OrderCapacity_PROPRIETARY = cvar.OrderCapacity_PROPRIETARY
OrderCapacity_INDIVIDUAL = cvar.OrderCapacity_INDIVIDUAL
OrderCapacity_PRINCIPAL = cvar.OrderCapacity_PRINCIPAL
OrderCapacity_RISKLESS_PRINCIPAL = cvar.OrderCapacity_RISKLESS_PRINCIPAL
OrderCapacity_AGENT_FOR_OTHER_MEMBER = cvar.OrderCapacity_AGENT_FOR_OTHER_MEMBER
OrderRestrictions_PROGRAM_TRADE = cvar.OrderRestrictions_PROGRAM_TRADE
OrderRestrictions_INDEX_ARBITRAGE = cvar.OrderRestrictions_INDEX_ARBITRAGE
OrderRestrictions_NON_INDEX_ARBITRAGE = cvar.OrderRestrictions_NON_INDEX_ARBITRAGE
OrderRestrictions_COMPETING_MARKET_MAKER = cvar.OrderRestrictions_COMPETING_MARKET_MAKER
OrderRestrictions_ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_SECURITY = cvar.OrderRestrictions_ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_SECURITY
OrderRestrictions_ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_UNDERLYING_SECURITY_OF_A_DERIVATIVE_SECURITY = cvar.OrderRestrictions_ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_UNDERLYING_SECURITY_OF_A_DERIVATIVE_SECURITY
OrderRestrictions_FOREIGN_ENTITY = cvar.OrderRestrictions_FOREIGN_ENTITY
OrderRestrictions_EXTERNAL_MARKET_PARTICIPANT = cvar.OrderRestrictions_EXTERNAL_MARKET_PARTICIPANT
OrderRestrictions_EXTERNAL_INTER_CONNECTED_MARKET_LINKAGE = cvar.OrderRestrictions_EXTERNAL_INTER_CONNECTED_MARKET_LINKAGE
OrderRestrictions_RISKLESS_ARBITRAGE = cvar.OrderRestrictions_RISKLESS_ARBITRAGE
MassCancelRequestType_CANCEL_ORDERS_FOR_A_SECURITY = cvar.MassCancelRequestType_CANCEL_ORDERS_FOR_A_SECURITY
MassCancelRequestType_CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = cvar.MassCancelRequestType_CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY
MassCancelRequestType_CANCEL_ORDERS_FOR_A_PRODUCT = cvar.MassCancelRequestType_CANCEL_ORDERS_FOR_A_PRODUCT
MassCancelRequestType_CANCEL_ORDERS_FOR_A_CFICODE = cvar.MassCancelRequestType_CANCEL_ORDERS_FOR_A_CFICODE
MassCancelRequestType_CANCEL_ORDERS_FOR_A_SECURITYTYPE = cvar.MassCancelRequestType_CANCEL_ORDERS_FOR_A_SECURITYTYPE
MassCancelRequestType_CANCEL_ORDERS_FOR_A_TRADING_SESSION = cvar.MassCancelRequestType_CANCEL_ORDERS_FOR_A_TRADING_SESSION
MassCancelRequestType_CANCEL_ALL_ORDERS = cvar.MassCancelRequestType_CANCEL_ALL_ORDERS
MassCancelResponse_CANCEL_REQUEST_REJECTED = cvar.MassCancelResponse_CANCEL_REQUEST_REJECTED
MassCancelResponse_CANCEL_ORDERS_FOR_A_SECURITY = cvar.MassCancelResponse_CANCEL_ORDERS_FOR_A_SECURITY
MassCancelResponse_CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = cvar.MassCancelResponse_CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY
MassCancelResponse_CANCEL_ORDERS_FOR_A_PRODUCT = cvar.MassCancelResponse_CANCEL_ORDERS_FOR_A_PRODUCT
MassCancelResponse_CANCEL_ORDERS_FOR_A_CFICODE = cvar.MassCancelResponse_CANCEL_ORDERS_FOR_A_CFICODE
MassCancelResponse_CANCEL_ORDERS_FOR_A_SECURITYTYPE = cvar.MassCancelResponse_CANCEL_ORDERS_FOR_A_SECURITYTYPE
MassCancelResponse_CANCEL_ORDERS_FOR_A_TRADING_SESSION = cvar.MassCancelResponse_CANCEL_ORDERS_FOR_A_TRADING_SESSION
MassCancelResponse_CANCEL_ALL_ORDERS = cvar.MassCancelResponse_CANCEL_ALL_ORDERS
MassCancelRejectReason_MASS_CANCEL_NOT_SUPPORTED = cvar.MassCancelRejectReason_MASS_CANCEL_NOT_SUPPORTED
MassCancelRejectReason_INVALID_OR_UNKNOWN_SECURITY = cvar.MassCancelRejectReason_INVALID_OR_UNKNOWN_SECURITY
MassCancelRejectReason_INVALID_OR_UNKNOWN_UNDERLYING = cvar.MassCancelRejectReason_INVALID_OR_UNKNOWN_UNDERLYING
MassCancelRejectReason_INVALID_OR_UNKNOWN_PRODUCT = cvar.MassCancelRejectReason_INVALID_OR_UNKNOWN_PRODUCT
MassCancelRejectReason_INVALID_OR_UNKNOWN_CFICODE = cvar.MassCancelRejectReason_INVALID_OR_UNKNOWN_CFICODE
MassCancelRejectReason_INVALID_OR_UNKNOWN_SECURITY_TYPE = cvar.MassCancelRejectReason_INVALID_OR_UNKNOWN_SECURITY_TYPE
MassCancelRejectReason_INVALID_OR_UNKNOWN_TRADING_SESSION = cvar.MassCancelRejectReason_INVALID_OR_UNKNOWN_TRADING_SESSION
QuoteType_INDICATIVE = cvar.QuoteType_INDICATIVE
QuoteType_TRADEABLE = cvar.QuoteType_TRADEABLE
QuoteType_RESTRICTED_TRADEABLE = cvar.QuoteType_RESTRICTED_TRADEABLE
QuoteType_COUNTER = cvar.QuoteType_COUNTER
CashMargin_CASH = cvar.CashMargin_CASH
CashMargin_MARGIN_OPEN = cvar.CashMargin_MARGIN_OPEN
CashMargin_MARGIN_CLOSE = cvar.CashMargin_MARGIN_CLOSE
Scope_LOCAL = cvar.Scope_LOCAL
Scope_NATIONAL = cvar.Scope_NATIONAL
Scope_GLOBAL = cvar.Scope_GLOBAL
CrossType_CROSS_TRADE_WHICH_IS_EXECUTED_COMPLETELY_OR_NOT = cvar.CrossType_CROSS_TRADE_WHICH_IS_EXECUTED_COMPLETELY_OR_NOT
CrossType_CROSS_TRADE_WHICH_IS_EXECUTED_PARTIALLY_AND_THE_REST_IS_CANCELLED = cvar.CrossType_CROSS_TRADE_WHICH_IS_EXECUTED_PARTIALLY_AND_THE_REST_IS_CANCELLED
CrossType_CROSS_TRADE_WHICH_IS_PARTIALLY_EXECUTED_WITH_THE_UNFILLED_PORTIONS_REMAINING_ACTIVE = cvar.CrossType_CROSS_TRADE_WHICH_IS_PARTIALLY_EXECUTED_WITH_THE_UNFILLED_PORTIONS_REMAINING_ACTIVE
CrossType_CROSS_TRADE_IS_EXECUTED_WITH_EXISTING_ORDERS_WITH_THE_SAME_PRICE = cvar.CrossType_CROSS_TRADE_IS_EXECUTED_WITH_EXISTING_ORDERS_WITH_THE_SAME_PRICE
CrossPrioritization_NONE = cvar.CrossPrioritization_NONE
CrossPrioritization_BUY_SIDE_IS_PRIORITIZED = cvar.CrossPrioritization_BUY_SIDE_IS_PRIORITIZED
CrossPrioritization_SELL_SIDE_IS_PRIORITIZED = cvar.CrossPrioritization_SELL_SIDE_IS_PRIORITIZED
NoSides_ONE_SIDE = cvar.NoSides_ONE_SIDE
NoSides_BOTH_SIDES = cvar.NoSides_BOTH_SIDES
SecurityListRequestType_SYMBOL = cvar.SecurityListRequestType_SYMBOL
SecurityListRequestType_SECURITYTYPE_AND_OR_CFICODE = cvar.SecurityListRequestType_SECURITYTYPE_AND_OR_CFICODE
SecurityListRequestType_PRODUCT = cvar.SecurityListRequestType_PRODUCT
SecurityListRequestType_TRADINGSESSIONID = cvar.SecurityListRequestType_TRADINGSESSIONID
SecurityListRequestType_ALL_SECURITIES = cvar.SecurityListRequestType_ALL_SECURITIES
SecurityRequestResult_VALID_REQUEST = cvar.SecurityRequestResult_VALID_REQUEST
SecurityRequestResult_INVALID_OR_UNSUPPORTED_REQUEST = cvar.SecurityRequestResult_INVALID_OR_UNSUPPORTED_REQUEST
SecurityRequestResult_NO_INSTRUMENTS_FOUND_THAT_MATCH_SELECTION_CRITERIA = cvar.SecurityRequestResult_NO_INSTRUMENTS_FOUND_THAT_MATCH_SELECTION_CRITERIA
SecurityRequestResult_NOT_AUTHORIZED_TO_RETRIEVE_INSTRUMENT_DATA = cvar.SecurityRequestResult_NOT_AUTHORIZED_TO_RETRIEVE_INSTRUMENT_DATA
SecurityRequestResult_INSTRUMENT_DATA_TEMPORARILY_UNAVAILABLE = cvar.SecurityRequestResult_INSTRUMENT_DATA_TEMPORARILY_UNAVAILABLE
SecurityRequestResult_REQUEST_FOR_INSTRUMENT_DATA_NOT_SUPPORTED = cvar.SecurityRequestResult_REQUEST_FOR_INSTRUMENT_DATA_NOT_SUPPORTED
MultiLegRptTypeReq_REPORT_BY_MULITLEG_SECURITY_ONLY = cvar.MultiLegRptTypeReq_REPORT_BY_MULITLEG_SECURITY_ONLY
MultiLegRptTypeReq_REPORT_BY_MULTILEG_SECURITY_AND_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY = cvar.MultiLegRptTypeReq_REPORT_BY_MULTILEG_SECURITY_AND_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY
MultiLegRptTypeReq_REPORT_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY_ONLY = cvar.MultiLegRptTypeReq_REPORT_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY_ONLY
TradSesStatusRejReason_UNKNOWN_OR_INVALID_TRADINGSESSIONID = cvar.TradSesStatusRejReason_UNKNOWN_OR_INVALID_TRADINGSESSIONID
TradeRequestType_ALL_TRADES = cvar.TradeRequestType_ALL_TRADES
TradeRequestType_MATCHED_TRADES_MATCHING_CRITERIA_PROVIDED_ON_REQUEST = cvar.TradeRequestType_MATCHED_TRADES_MATCHING_CRITERIA_PROVIDED_ON_REQUEST
TradeRequestType_UNMATCHED_TRADES_THAT_MATCH_CRITERIA = cvar.TradeRequestType_UNMATCHED_TRADES_THAT_MATCH_CRITERIA
TradeRequestType_UNREPORTED_TRADES_THAT_MATCH_CRITERIA = cvar.TradeRequestType_UNREPORTED_TRADES_THAT_MATCH_CRITERIA
TradeRequestType_ADVISORIES_THAT_MATCH_CRITERIA = cvar.TradeRequestType_ADVISORIES_THAT_MATCH_CRITERIA
MatchStatus_COMPARED_MATCHED_OR_AFFIRMED = cvar.MatchStatus_COMPARED_MATCHED_OR_AFFIRMED
MatchStatus_UNCOMPARED_UNMATCHED_OR_UNAFFIRMED = cvar.MatchStatus_UNCOMPARED_UNMATCHED_OR_UNAFFIRMED
MatchStatus_ADVISORY_OR_ALERT = cvar.MatchStatus_ADVISORY_OR_ALERT
ClearingInstruction_PROCESS_NORMALLY = cvar.ClearingInstruction_PROCESS_NORMALLY
ClearingInstruction_EXCLUDE_FROM_ALL_NETTING = cvar.ClearingInstruction_EXCLUDE_FROM_ALL_NETTING
ClearingInstruction_BILATERAL_NETTING_ONLY = cvar.ClearingInstruction_BILATERAL_NETTING_ONLY
ClearingInstruction_EX_CLEARING = cvar.ClearingInstruction_EX_CLEARING
ClearingInstruction_SPECIAL_TRADE = cvar.ClearingInstruction_SPECIAL_TRADE
ClearingInstruction_MULTILATERAL_NETTING = cvar.ClearingInstruction_MULTILATERAL_NETTING
ClearingInstruction_CLEAR_AGAINST_CENTRAL_COUNTERPARTY = cvar.ClearingInstruction_CLEAR_AGAINST_CENTRAL_COUNTERPARTY
ClearingInstruction_EXCLUDE_FROM_CENTRAL_COUNTERPARTY = cvar.ClearingInstruction_EXCLUDE_FROM_CENTRAL_COUNTERPARTY
ClearingInstruction_MANUAL_MODE = cvar.ClearingInstruction_MANUAL_MODE
ClearingInstruction_AUTOMATIC_POSTING_MODE = cvar.ClearingInstruction_AUTOMATIC_POSTING_MODE
AccountType_ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS = cvar.AccountType_ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS
AccountType_ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS = cvar.AccountType_ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS
AccountType_HOUSE_TRADER = cvar.AccountType_HOUSE_TRADER
AccountType_FLOOR_TRADER = cvar.AccountType_FLOOR_TRADER
AccountType_ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED = cvar.AccountType_ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED
AccountType_ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED = cvar.AccountType_ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED
AccountType_JOINT_BACKOFFICE_ACCOUNT = cvar.AccountType_JOINT_BACKOFFICE_ACCOUNT
CustOrderCapacity_MEMBER_TRADING_FOR_THEIR_OWN_ACCOUNT = cvar.CustOrderCapacity_MEMBER_TRADING_FOR_THEIR_OWN_ACCOUNT
CustOrderCapacity_CLEARING_FIRM_TRADING_FOR_ITS_PROPRIETARY_ACCOUNT = cvar.CustOrderCapacity_CLEARING_FIRM_TRADING_FOR_ITS_PROPRIETARY_ACCOUNT
CustOrderCapacity_MEMBER_TRADING_FOR_ANOTHER_MEMBER = cvar.CustOrderCapacity_MEMBER_TRADING_FOR_ANOTHER_MEMBER
CustOrderCapacity_ALL_OTHER = cvar.CustOrderCapacity_ALL_OTHER
MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_SECURITY = cvar.MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_SECURITY
MassStatusReqType_STATUS_FOR_ORDERS_FOR_AN_UNDERLYING_SECURITY = cvar.MassStatusReqType_STATUS_FOR_ORDERS_FOR_AN_UNDERLYING_SECURITY
MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_PRODUCT = cvar.MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_PRODUCT
MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_CFICODE = cvar.MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_CFICODE
MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_SECURITYTYPE = cvar.MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_SECURITYTYPE
MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_TRADING_SESSION = cvar.MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_TRADING_SESSION
MassStatusReqType_STATUS_FOR_ALL_ORDERS = cvar.MassStatusReqType_STATUS_FOR_ALL_ORDERS
MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_PARTYID = cvar.MassStatusReqType_STATUS_FOR_ORDERS_FOR_A_PARTYID
DayBookingInst_CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR = cvar.DayBookingInst_CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR
DayBookingInst_SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING = cvar.DayBookingInst_SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING
DayBookingInst_ACCUMULATE = cvar.DayBookingInst_ACCUMULATE
BookingUnit_EACH_PARTIAL_EXECUTION_IS_A_BOOKABLE_UNIT = cvar.BookingUnit_EACH_PARTIAL_EXECUTION_IS_A_BOOKABLE_UNIT
BookingUnit_AGGREGATE_PARTIAL_EXECUTIONS_ON_THIS_ORDER_AND_BOOK_ONE_TRADE_PER_ORDER = cvar.BookingUnit_AGGREGATE_PARTIAL_EXECUTIONS_ON_THIS_ORDER_AND_BOOK_ONE_TRADE_PER_ORDER
BookingUnit_AGGREGATE_EXECUTIONS_FOR_THIS_SYMBOL_SIDE_AND_SETTLEMENT_DATE = cvar.BookingUnit_AGGREGATE_EXECUTIONS_FOR_THIS_SYMBOL_SIDE_AND_SETTLEMENT_DATE
PreallocMethod_PRO_RATA = cvar.PreallocMethod_PRO_RATA
PreallocMethod_DO_NOT_PRO_RATA = cvar.PreallocMethod_DO_NOT_PRO_RATA
AllocType_CALCULATED = cvar.AllocType_CALCULATED
AllocType_PRELIMINARY = cvar.AllocType_PRELIMINARY
AllocType_READY_TO_BOOK_SINGLE_ORDER = cvar.AllocType_READY_TO_BOOK_SINGLE_ORDER
AllocType_WAREHOUSE_INSTRUCTION = cvar.AllocType_WAREHOUSE_INSTRUCTION
AllocType_REQUEST_TO_INTERMEDIARY = cvar.AllocType_REQUEST_TO_INTERMEDIARY
ClearingFeeIndicator_CBOE_MEMBER = cvar.ClearingFeeIndicator_CBOE_MEMBER
ClearingFeeIndicator_NON_MEMBER_AND_CUSTOMER = cvar.ClearingFeeIndicator_NON_MEMBER_AND_CUSTOMER
ClearingFeeIndicator_EQUITY_MEMBER_AND_CLEARING_MEMBER = cvar.ClearingFeeIndicator_EQUITY_MEMBER_AND_CLEARING_MEMBER
ClearingFeeIndicator_FULL_AND_ASSOCIATE_MEMBER_TRADING_FOR_OWN_ACCOUNT_AND_AS_FLOOR_BROKERS = cvar.ClearingFeeIndicator_FULL_AND_ASSOCIATE_MEMBER_TRADING_FOR_OWN_ACCOUNT_AND_AS_FLOOR_BROKERS
ClearingFeeIndicator_FIRMS_106H_AND_106J = cvar.ClearingFeeIndicator_FIRMS_106H_AND_106J
ClearingFeeIndicator_GIM_IDEM_AND_COM_MEMBERSHIP_INTEREST_HOLDERS = cvar.ClearingFeeIndicator_GIM_IDEM_AND_COM_MEMBERSHIP_INTEREST_HOLDERS
ClearingFeeIndicator_LESSEE_AND_106F_EMPLOYEES = cvar.ClearingFeeIndicator_LESSEE_AND_106F_EMPLOYEES
ClearingFeeIndicator_ALL_OTHER_OWNERSHIP_TYPES = cvar.ClearingFeeIndicator_ALL_OTHER_OWNERSHIP_TYPES
PriorityIndicator_PRIORITY_UNCHANGED = cvar.PriorityIndicator_PRIORITY_UNCHANGED
PriorityIndicator_LOST_PRIORITY_AS_RESULT_OF_ORDER_CHANGE = cvar.PriorityIndicator_LOST_PRIORITY_AS_RESULT_OF_ORDER_CHANGE
QuoteRequestRejectReason_UNKNOWN_SYMBOL = cvar.QuoteRequestRejectReason_UNKNOWN_SYMBOL
QuoteRequestRejectReason_EXCHANGE_CLOSED = cvar.QuoteRequestRejectReason_EXCHANGE_CLOSED
QuoteRequestRejectReason_QUOTE_REQUEST_EXCEEDS_LIMIT = cvar.QuoteRequestRejectReason_QUOTE_REQUEST_EXCEEDS_LIMIT
QuoteRequestRejectReason_TOO_LATE_TO_ENTER = cvar.QuoteRequestRejectReason_TOO_LATE_TO_ENTER
QuoteRequestRejectReason_INVALID_PRICE = cvar.QuoteRequestRejectReason_INVALID_PRICE
QuoteRequestRejectReason_NOT_AUTHORIZED_TO_REQUEST_QUOTE = cvar.QuoteRequestRejectReason_NOT_AUTHORIZED_TO_REQUEST_QUOTE
QuoteRequestRejectReason_NO_MATCH_FOR_INQUIRY = cvar.QuoteRequestRejectReason_NO_MATCH_FOR_INQUIRY
QuoteRequestRejectReason_NO_MARKET_FOR_INSTRUMENT = cvar.QuoteRequestRejectReason_NO_MARKET_FOR_INSTRUMENT
QuoteRequestRejectReason_NO_INVENTORY = cvar.QuoteRequestRejectReason_NO_INVENTORY
AcctIDSource_BIC = cvar.AcctIDSource_BIC
AcctIDSource_SID_CODE = cvar.AcctIDSource_SID_CODE
AcctIDSource_TFM = cvar.AcctIDSource_TFM
AcctIDSource_OMGEO = cvar.AcctIDSource_OMGEO
AcctIDSource_DTCC_CODE = cvar.AcctIDSource_DTCC_CODE
ConfirmStatus_RECEIVED = cvar.ConfirmStatus_RECEIVED
ConfirmStatus_MISMATCHED_ACCOUNT = cvar.ConfirmStatus_MISMATCHED_ACCOUNT
ConfirmStatus_MISSING_SETTLEMENT_INSTRUCTIONS = cvar.ConfirmStatus_MISSING_SETTLEMENT_INSTRUCTIONS
ConfirmStatus_CONFIRMED = cvar.ConfirmStatus_CONFIRMED
ConfirmStatus_REQUEST_REJECTED = cvar.ConfirmStatus_REQUEST_REJECTED
ConfirmTransType_NEW = cvar.ConfirmTransType_NEW
ConfirmTransType_REPLACE = cvar.ConfirmTransType_REPLACE
ConfirmTransType_CANCEL = cvar.ConfirmTransType_CANCEL
DeliveryForm_BOOKENTRY = cvar.DeliveryForm_BOOKENTRY
DeliveryForm_BEARER = cvar.DeliveryForm_BEARER
LegSwapType_PAR_FOR_PAR = cvar.LegSwapType_PAR_FOR_PAR
LegSwapType_MODIFIED_DURATION = cvar.LegSwapType_MODIFIED_DURATION
LegSwapType_RISK = cvar.LegSwapType_RISK
LegSwapType_PROCEEDS = cvar.LegSwapType_PROCEEDS
QuotePriceType_PERCENT = cvar.QuotePriceType_PERCENT
QuotePriceType_PER_SHARE = cvar.QuotePriceType_PER_SHARE
QuotePriceType_FIXED_AMOUNT = cvar.QuotePriceType_FIXED_AMOUNT
QuotePriceType_DISCOUNT = cvar.QuotePriceType_DISCOUNT
QuotePriceType_PREMIUM = cvar.QuotePriceType_PREMIUM
QuotePriceType_BASIS_POINTS_RELATIVE_TO_BENCHMARK = cvar.QuotePriceType_BASIS_POINTS_RELATIVE_TO_BENCHMARK
QuotePriceType_TED_PRICE = cvar.QuotePriceType_TED_PRICE
QuotePriceType_TED_YIELD = cvar.QuotePriceType_TED_YIELD
QuotePriceType_YIELD_SPREAD = cvar.QuotePriceType_YIELD_SPREAD
QuoteRespType_HIT_LIFT = cvar.QuoteRespType_HIT_LIFT
QuoteRespType_COUNTER = cvar.QuoteRespType_COUNTER
QuoteRespType_EXPIRED = cvar.QuoteRespType_EXPIRED
QuoteRespType_COVER = cvar.QuoteRespType_COVER
QuoteRespType_DONE_AWAY = cvar.QuoteRespType_DONE_AWAY
QuoteRespType_PASS = cvar.QuoteRespType_PASS
PosType_TRANSACTION_QUANTITY = cvar.PosType_TRANSACTION_QUANTITY
PosType_INTRA_SPREAD_QTY = cvar.PosType_INTRA_SPREAD_QTY
PosType_INTER_SPREAD_QTY = cvar.PosType_INTER_SPREAD_QTY
PosType_END_OF_DAY_QTY = cvar.PosType_END_OF_DAY_QTY
PosType_START_OF_DAY_QTY = cvar.PosType_START_OF_DAY_QTY
PosType_OPTION_EXERCISE_QTY = cvar.PosType_OPTION_EXERCISE_QTY
PosType_OPTION_ASSIGNMENT = cvar.PosType_OPTION_ASSIGNMENT
PosType_TRANSACTION_FROM_EXERCISE = cvar.PosType_TRANSACTION_FROM_EXERCISE
PosType_TRANSACTION_FROM_ASSIGNMENT = cvar.PosType_TRANSACTION_FROM_ASSIGNMENT
PosType_PIT_TRADE_QTY = cvar.PosType_PIT_TRADE_QTY
PosType_TRANSFER_TRADE_QTY = cvar.PosType_TRANSFER_TRADE_QTY
PosType_ELECTRONIC_TRADE_QTY = cvar.PosType_ELECTRONIC_TRADE_QTY
PosType_ALLOCATION_TRADE_QTY = cvar.PosType_ALLOCATION_TRADE_QTY
PosType_ADJUSTMENT_QTY = cvar.PosType_ADJUSTMENT_QTY
PosType_AS_OF_TRADE_QTY = cvar.PosType_AS_OF_TRADE_QTY
PosType_DELIVERY_QTY = cvar.PosType_DELIVERY_QTY
PosType_TOTAL_TRANSACTION_QTY = cvar.PosType_TOTAL_TRANSACTION_QTY
PosType_CROSS_MARGIN_QTY = cvar.PosType_CROSS_MARGIN_QTY
PosType_INTEGRAL_SPLIT = cvar.PosType_INTEGRAL_SPLIT
PosQtyStatus_SUBMITTED = cvar.PosQtyStatus_SUBMITTED
PosQtyStatus_ACCEPTED = cvar.PosQtyStatus_ACCEPTED
PosQtyStatus_REJECTED = cvar.PosQtyStatus_REJECTED
PosAmtType_FINAL_MARK_TO_MARKET_AMOUNT = cvar.PosAmtType_FINAL_MARK_TO_MARKET_AMOUNT
PosAmtType_INCREMENTAL_MARK_TO_MARKET_AMOUNT = cvar.PosAmtType_INCREMENTAL_MARK_TO_MARKET_AMOUNT
PosAmtType_TRADE_VARIATION_AMOUNT = cvar.PosAmtType_TRADE_VARIATION_AMOUNT
PosAmtType_START_OF_DAY_MARK_TO_MARKET_AMOUNT = cvar.PosAmtType_START_OF_DAY_MARK_TO_MARKET_AMOUNT
PosAmtType_PREMIUM_AMOUNT = cvar.PosAmtType_PREMIUM_AMOUNT
PosAmtType_CASH_RESIDUAL_AMOUNT = cvar.PosAmtType_CASH_RESIDUAL_AMOUNT
PosAmtType_CASH_AMOUNT = cvar.PosAmtType_CASH_AMOUNT
PosAmtType_VALUE_ADJUSTED_AMOUNT = cvar.PosAmtType_VALUE_ADJUSTED_AMOUNT
PosTransType_EXERCISE = cvar.PosTransType_EXERCISE
PosTransType_DO_NOT_EXERCISE = cvar.PosTransType_DO_NOT_EXERCISE
PosTransType_POSITION_ADJUSTMENT = cvar.PosTransType_POSITION_ADJUSTMENT
PosTransType_POSITION_CHANGE_SUBMISSION_MARGIN_DISPOSITION = cvar.PosTransType_POSITION_CHANGE_SUBMISSION_MARGIN_DISPOSITION
PosTransType_PLEDGE = cvar.PosTransType_PLEDGE
PosMaintAction_NEW = cvar.PosMaintAction_NEW
PosMaintAction_REPLACE = cvar.PosMaintAction_REPLACE
PosMaintAction_CANCEL = cvar.PosMaintAction_CANCEL
AdjustmentType_PROCESS_REQUEST_AS_MARGIN_DISPOSITION = cvar.AdjustmentType_PROCESS_REQUEST_AS_MARGIN_DISPOSITION
AdjustmentType_DELTA_PLUS = cvar.AdjustmentType_DELTA_PLUS
AdjustmentType_DELTA_MINUS = cvar.AdjustmentType_DELTA_MINUS
AdjustmentType_FINAL = cvar.AdjustmentType_FINAL
PosMaintStatus_ACCEPTED = cvar.PosMaintStatus_ACCEPTED
PosMaintStatus_ACCEPTED_WITH_WARNINGS = cvar.PosMaintStatus_ACCEPTED_WITH_WARNINGS
PosMaintStatus_REJECTED = cvar.PosMaintStatus_REJECTED
PosMaintStatus_COMPLETED = cvar.PosMaintStatus_COMPLETED
PosMaintStatus_COMPLETED_WITH_WARNINGS = cvar.PosMaintStatus_COMPLETED_WITH_WARNINGS
PosMaintResult_SUCCESSFUL_COMPLETION_NO_WARNINGS_OR_ERRORS = cvar.PosMaintResult_SUCCESSFUL_COMPLETION_NO_WARNINGS_OR_ERRORS
PosMaintResult_REJECTED = cvar.PosMaintResult_REJECTED
PosReqType_POSITIONS = cvar.PosReqType_POSITIONS
PosReqType_TRADES = cvar.PosReqType_TRADES
PosReqType_EXERCISES = cvar.PosReqType_EXERCISES
PosReqType_ASSIGNMENTS = cvar.PosReqType_ASSIGNMENTS
ResponseTransportType_INBAND = cvar.ResponseTransportType_INBAND
ResponseTransportType_OUT_OF_BAND = cvar.ResponseTransportType_OUT_OF_BAND
PosReqResult_VALID_REQUEST = cvar.PosReqResult_VALID_REQUEST
PosReqResult_INVALID_OR_UNSUPPORTED_REQUEST = cvar.PosReqResult_INVALID_OR_UNSUPPORTED_REQUEST
PosReqResult_NO_POSITIONS_FOUND_THAT_MATCH_CRITERIA = cvar.PosReqResult_NO_POSITIONS_FOUND_THAT_MATCH_CRITERIA
PosReqResult_NOT_AUTHORIZED_TO_REQUEST_POSITIONS = cvar.PosReqResult_NOT_AUTHORIZED_TO_REQUEST_POSITIONS
PosReqResult_REQUEST_FOR_POSITION_NOT_SUPPORTED = cvar.PosReqResult_REQUEST_FOR_POSITION_NOT_SUPPORTED
PosReqResult_OTHER = cvar.PosReqResult_OTHER
PosReqStatus_COMPLETED = cvar.PosReqStatus_COMPLETED
PosReqStatus_COMPLETED_WITH_WARNINGS = cvar.PosReqStatus_COMPLETED_WITH_WARNINGS
PosReqStatus_REJECTED = cvar.PosReqStatus_REJECTED
SettlPriceType_FINAL = cvar.SettlPriceType_FINAL
SettlPriceType_THEORETICAL = cvar.SettlPriceType_THEORETICAL
AssignmentMethod_RANDOM = cvar.AssignmentMethod_RANDOM
AssignmentMethod_PRORATA = cvar.AssignmentMethod_PRORATA
ExerciseMethod_AUTOMATIC = cvar.ExerciseMethod_AUTOMATIC
ExerciseMethod_MANUAL = cvar.ExerciseMethod_MANUAL
TradeRequestResult_SUCCESSFUL = cvar.TradeRequestResult_SUCCESSFUL
TradeRequestResult_INVALID_OR_UNKNOWN_INSTRUMENT = cvar.TradeRequestResult_INVALID_OR_UNKNOWN_INSTRUMENT
TradeRequestResult_INVALID_TYPE_OF_TRADE_REQUESTED = cvar.TradeRequestResult_INVALID_TYPE_OF_TRADE_REQUESTED
TradeRequestResult_INVALID_PARTIES = cvar.TradeRequestResult_INVALID_PARTIES
TradeRequestResult_INVALID_TRANSPORT_TYPE_REQUESTED = cvar.TradeRequestResult_INVALID_TRANSPORT_TYPE_REQUESTED
TradeRequestResult_INVALID_DESTINATION_REQUESTED = cvar.TradeRequestResult_INVALID_DESTINATION_REQUESTED
TradeRequestResult_TRADEREQUESTTYPE_NOT_SUPPORTED = cvar.TradeRequestResult_TRADEREQUESTTYPE_NOT_SUPPORTED
TradeRequestResult_UNAUTHORIZED_FOR_TRADE_CAPTURE_REPORT_REQUEST = cvar.TradeRequestResult_UNAUTHORIZED_FOR_TRADE_CAPTURE_REPORT_REQUEST
TradeRequestStatus_ACCEPTED = cvar.TradeRequestStatus_ACCEPTED
TradeRequestStatus_COMPLETED = cvar.TradeRequestStatus_COMPLETED
TradeRequestStatus_REJECTED = cvar.TradeRequestStatus_REJECTED
TradeReportRejectReason_SUCCESSFUL = cvar.TradeReportRejectReason_SUCCESSFUL
TradeReportRejectReason_INVALID_PARTY_INFORMATION = cvar.TradeReportRejectReason_INVALID_PARTY_INFORMATION
TradeReportRejectReason_UNKNOWN_INSTRUMENT = cvar.TradeReportRejectReason_UNKNOWN_INSTRUMENT
TradeReportRejectReason_UNAUTHORIZED_TO_REPORT_TRADES = cvar.TradeReportRejectReason_UNAUTHORIZED_TO_REPORT_TRADES
TradeReportRejectReason_INVALID_TRADE_TYPE = cvar.TradeReportRejectReason_INVALID_TRADE_TYPE
SideMultiLegReportingType_SINGLE_SECURITY = cvar.SideMultiLegReportingType_SINGLE_SECURITY
SideMultiLegReportingType_INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY = cvar.SideMultiLegReportingType_INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY
SideMultiLegReportingType_MULTI_LEG_SECURITY = cvar.SideMultiLegReportingType_MULTI_LEG_SECURITY
TrdRegTimestampType_EXECUTION_TIME = cvar.TrdRegTimestampType_EXECUTION_TIME
TrdRegTimestampType_TIME_IN = cvar.TrdRegTimestampType_TIME_IN
TrdRegTimestampType_TIME_OUT = cvar.TrdRegTimestampType_TIME_OUT
TrdRegTimestampType_BROKER_RECEIPT = cvar.TrdRegTimestampType_BROKER_RECEIPT
TrdRegTimestampType_BROKER_EXECUTION = cvar.TrdRegTimestampType_BROKER_EXECUTION
ConfirmType_STATUS = cvar.ConfirmType_STATUS
ConfirmType_CONFIRMATION = cvar.ConfirmType_CONFIRMATION
ConfirmType_CONFIRMATION_REQUEST_REJECTED = cvar.ConfirmType_CONFIRMATION_REQUEST_REJECTED
ConfirmRejReason_MISMATCHED_ACCOUNT = cvar.ConfirmRejReason_MISMATCHED_ACCOUNT
ConfirmRejReason_MISSING_SETTLEMENT_INSTRUCTIONS = cvar.ConfirmRejReason_MISSING_SETTLEMENT_INSTRUCTIONS
BookingType_REGULAR_BOOKING = cvar.BookingType_REGULAR_BOOKING
BookingType_CFD = cvar.BookingType_CFD
BookingType_TOTAL_RETURN_SWAP = cvar.BookingType_TOTAL_RETURN_SWAP
AllocSettlInstType_USE_DEFAULT_INSTRUCTIONS = cvar.AllocSettlInstType_USE_DEFAULT_INSTRUCTIONS
AllocSettlInstType_DERIVE_FROM_PARAMETERS_PROVIDED = cvar.AllocSettlInstType_DERIVE_FROM_PARAMETERS_PROVIDED
AllocSettlInstType_FULL_DETAILS_PROVIDED = cvar.AllocSettlInstType_FULL_DETAILS_PROVIDED
AllocSettlInstType_SSI_DB_IDS_PROVIDED = cvar.AllocSettlInstType_SSI_DB_IDS_PROVIDED
AllocSettlInstType_PHONE_FOR_INSTRUCTIONS = cvar.AllocSettlInstType_PHONE_FOR_INSTRUCTIONS
DlvyInstType_SECURITIES = cvar.DlvyInstType_SECURITIES
DlvyInstType_CASH = cvar.DlvyInstType_CASH
TerminationType_OVERNIGHT = cvar.TerminationType_OVERNIGHT
TerminationType_TERM = cvar.TerminationType_TERM
TerminationType_FLEXIBLE = cvar.TerminationType_FLEXIBLE
TerminationType_OPEN = cvar.TerminationType_OPEN
SettlInstReqRejCode_UNABLE_TO_PROCESS_REQUEST = cvar.SettlInstReqRejCode_UNABLE_TO_PROCESS_REQUEST
SettlInstReqRejCode_UNKNOWN_ACCOUNT = cvar.SettlInstReqRejCode_UNKNOWN_ACCOUNT
SettlInstReqRejCode_NO_MATCHING_SETTLEMENT_INSTRUCTIONS_FOUND = cvar.SettlInstReqRejCode_NO_MATCHING_SETTLEMENT_INSTRUCTIONS_FOUND
AllocReportType_SELLSIDE_CALCULATED_USING_PRELIMINARY = cvar.AllocReportType_SELLSIDE_CALCULATED_USING_PRELIMINARY
AllocReportType_SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = cvar.AllocReportType_SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY
AllocReportType_WAREHOUSE_RECAP = cvar.AllocReportType_WAREHOUSE_RECAP
AllocReportType_REQUEST_TO_INTERMEDIARY = cvar.AllocReportType_REQUEST_TO_INTERMEDIARY
AllocCancReplaceReason_ORIGINAL_DETAILS_INCOMPLETE_INCORRECT = cvar.AllocCancReplaceReason_ORIGINAL_DETAILS_INCOMPLETE_INCORRECT
AllocCancReplaceReason_CHANGE_IN_UNDERLYING_ORDER_DETAILS = cvar.AllocCancReplaceReason_CHANGE_IN_UNDERLYING_ORDER_DETAILS
AllocAccountType_ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS = cvar.AllocAccountType_ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS
AllocAccountType_ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS = cvar.AllocAccountType_ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS
AllocAccountType_HOUSE_TRADER = cvar.AllocAccountType_HOUSE_TRADER
AllocAccountType_FLOOR_TRADER = cvar.AllocAccountType_FLOOR_TRADER
AllocAccountType_ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED = cvar.AllocAccountType_ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED
AllocAccountType_ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED = cvar.AllocAccountType_ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED
AllocAccountType_JOINT_BACKOFFICE_ACCOUNT = cvar.AllocAccountType_JOINT_BACKOFFICE_ACCOUNT
AllocIntermedReqType_PENDING_ACCEPT = cvar.AllocIntermedReqType_PENDING_ACCEPT
AllocIntermedReqType_PENDING_RELEASE = cvar.AllocIntermedReqType_PENDING_RELEASE
AllocIntermedReqType_PENDING_REVERSAL = cvar.AllocIntermedReqType_PENDING_REVERSAL
AllocIntermedReqType_ACCEPT = cvar.AllocIntermedReqType_ACCEPT
AllocIntermedReqType_BLOCK_LEVEL_REJECT = cvar.AllocIntermedReqType_BLOCK_LEVEL_REJECT
AllocIntermedReqType_ACCOUNT_LEVEL_REJECT = cvar.AllocIntermedReqType_ACCOUNT_LEVEL_REJECT
ApplQueueResolution_NO_ACTION_TAKEN = cvar.ApplQueueResolution_NO_ACTION_TAKEN
ApplQueueResolution_QUEUE_FLUSHED = cvar.ApplQueueResolution_QUEUE_FLUSHED
ApplQueueResolution_OVERLAY_LAST = cvar.ApplQueueResolution_OVERLAY_LAST
ApplQueueResolution_END_SESSION = cvar.ApplQueueResolution_END_SESSION
ApplQueueAction_NO_ACTION_TAKEN = cvar.ApplQueueAction_NO_ACTION_TAKEN
ApplQueueAction_QUEUE_FLUSHED = cvar.ApplQueueAction_QUEUE_FLUSHED
ApplQueueAction_OVERLAY_LAST = cvar.ApplQueueAction_OVERLAY_LAST
ApplQueueAction_END_SESSION = cvar.ApplQueueAction_END_SESSION
AvgPxIndicator_NO_AVERAGE_PRICING = cvar.AvgPxIndicator_NO_AVERAGE_PRICING
AvgPxIndicator_TRADE_IS_PART_OF_AN_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID = cvar.AvgPxIndicator_TRADE_IS_PART_OF_AN_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID
AvgPxIndicator_LAST_TRADE_IN_THE_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID = cvar.AvgPxIndicator_LAST_TRADE_IN_THE_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID
TradeAllocIndicator_ALLOCATION_NOT_REQUIRED = cvar.TradeAllocIndicator_ALLOCATION_NOT_REQUIRED
TradeAllocIndicator_ALLOCATION_REQUIRED = cvar.TradeAllocIndicator_ALLOCATION_REQUIRED
TradeAllocIndicator_USE_ALLOCATION_PROVIDED_WITH_THE_TRADE = cvar.TradeAllocIndicator_USE_ALLOCATION_PROVIDED_WITH_THE_TRADE
ExpirationCycle_EXPIRE_ON_TRADING_SESSION_CLOSE = cvar.ExpirationCycle_EXPIRE_ON_TRADING_SESSION_CLOSE
ExpirationCycle_EXPIRE_ON_TRADING_SESSION_OPEN = cvar.ExpirationCycle_EXPIRE_ON_TRADING_SESSION_OPEN
TrdType_REGULAR_TRADE = cvar.TrdType_REGULAR_TRADE
TrdType_BLOCK_TRADE = cvar.TrdType_BLOCK_TRADE
TrdType_EFP = cvar.TrdType_EFP
TrdType_TRANSFER = cvar.TrdType_TRANSFER
TrdType_LATE_TRADE = cvar.TrdType_LATE_TRADE
TrdType_T_TRADE = cvar.TrdType_T_TRADE
TrdType_WEIGHTED_AVERAGE_PRICE_TRADE = cvar.TrdType_WEIGHTED_AVERAGE_PRICE_TRADE
TrdType_BUNCHED_TRADE = cvar.TrdType_BUNCHED_TRADE
TrdType_LATE_BUNCHED_TRADE = cvar.TrdType_LATE_BUNCHED_TRADE
TrdType_PRIOR_REFERENCE_PRICE_TRADE = cvar.TrdType_PRIOR_REFERENCE_PRICE_TRADE
PegMoveType_FLOATING = cvar.PegMoveType_FLOATING
PegMoveType_FIXED = cvar.PegMoveType_FIXED
PegOffsetType_PRICE = cvar.PegOffsetType_PRICE
PegOffsetType_BASIS_POINTS = cvar.PegOffsetType_BASIS_POINTS
PegOffsetType_TICKS = cvar.PegOffsetType_TICKS
PegOffsetType_PRICE_TIER_LEVEL = cvar.PegOffsetType_PRICE_TIER_LEVEL
PegLimitType_OR_BETTER = cvar.PegLimitType_OR_BETTER
PegLimitType_STRICT = cvar.PegLimitType_STRICT
PegLimitType_OR_WORSE = cvar.PegLimitType_OR_WORSE
PegRoundDirection_MORE_AGGRESSIVE = cvar.PegRoundDirection_MORE_AGGRESSIVE
PegRoundDirection_MORE_PASSIVE = cvar.PegRoundDirection_MORE_PASSIVE
PegScope_LOCAL = cvar.PegScope_LOCAL
PegScope_NATIONAL = cvar.PegScope_NATIONAL
PegScope_GLOBAL = cvar.PegScope_GLOBAL
PegScope_NATIONAL_EXCLUDING_LOCAL = cvar.PegScope_NATIONAL_EXCLUDING_LOCAL
DiscretionMoveType_FLOATING = cvar.DiscretionMoveType_FLOATING
DiscretionMoveType_FIXED = cvar.DiscretionMoveType_FIXED
DiscretionOffsetType_PRICE = cvar.DiscretionOffsetType_PRICE
DiscretionOffsetType_BASIS_POINTS = cvar.DiscretionOffsetType_BASIS_POINTS
DiscretionOffsetType_TICKS = cvar.DiscretionOffsetType_TICKS
DiscretionOffsetType_PRICE_TIER_LEVEL = cvar.DiscretionOffsetType_PRICE_TIER_LEVEL
DiscretionLimitType_OR_BETTER = cvar.DiscretionLimitType_OR_BETTER
DiscretionLimitType_STRICT = cvar.DiscretionLimitType_STRICT
DiscretionLimitType_OR_WORSE = cvar.DiscretionLimitType_OR_WORSE
DiscretionRoundDirection_MORE_AGGRESSIVE = cvar.DiscretionRoundDirection_MORE_AGGRESSIVE
DiscretionRoundDirection_MORE_PASSIVE = cvar.DiscretionRoundDirection_MORE_PASSIVE
DiscretionScope_LOCAL = cvar.DiscretionScope_LOCAL
DiscretionScope_NATIONAL = cvar.DiscretionScope_NATIONAL
DiscretionScope_GLOBAL = cvar.DiscretionScope_GLOBAL
DiscretionScope_NATIONAL_EXCLUDING_LOCAL = cvar.DiscretionScope_NATIONAL_EXCLUDING_LOCAL
LastLiquidityInd_ADDED_LIQUIDITY = cvar.LastLiquidityInd_ADDED_LIQUIDITY
LastLiquidityInd_REMOVED_LIQUIDITY = cvar.LastLiquidityInd_REMOVED_LIQUIDITY
LastLiquidityInd_LIQUIDITY_ROUTED_OUT = cvar.LastLiquidityInd_LIQUIDITY_ROUTED_OUT
ShortSaleReason_DEALER_SOLD_SHORT = cvar.ShortSaleReason_DEALER_SOLD_SHORT
ShortSaleReason_DEALER_SOLD_SHORT_EXEMPT = cvar.ShortSaleReason_DEALER_SOLD_SHORT_EXEMPT
ShortSaleReason_SELLING_CUSTOMER_SOLD_SHORT = cvar.ShortSaleReason_SELLING_CUSTOMER_SOLD_SHORT
ShortSaleReason_SELLING_CUSTOMER_SOLD_SHORT_EXEMPT = cvar.ShortSaleReason_SELLING_CUSTOMER_SOLD_SHORT_EXEMPT
ShortSaleReason_QUALIFED_SERVICE_REPRESENTATIVE_OR_AUTOMATIC_GIVEUP_CONTRA_SIDE_SOLD_SHORT = cvar.ShortSaleReason_QUALIFED_SERVICE_REPRESENTATIVE_OR_AUTOMATIC_GIVEUP_CONTRA_SIDE_SOLD_SHORT
ShortSaleReason_QSR_OR_AGU_CONTRA_SIDE_SOLD_SHORT_EXEMPT = cvar.ShortSaleReason_QSR_OR_AGU_CONTRA_SIDE_SOLD_SHORT_EXEMPT
QtyType_UNITS = cvar.QtyType_UNITS
QtyType_CONTRACTS = cvar.QtyType_CONTRACTS
TradeReportType_SUBMIT = cvar.TradeReportType_SUBMIT
TradeReportType_ALLEGED = cvar.TradeReportType_ALLEGED
TradeReportType_ACCEPT = cvar.TradeReportType_ACCEPT
TradeReportType_DECLINE = cvar.TradeReportType_DECLINE
TradeReportType_ADDENDUM = cvar.TradeReportType_ADDENDUM
TradeReportType_NO_WAS = cvar.TradeReportType_NO_WAS
TradeReportType_TRADE_REPORT_CANCEL = cvar.TradeReportType_TRADE_REPORT_CANCEL
TradeReportType_LOCKED_IN_TRADE_BREAK = cvar.TradeReportType_LOCKED_IN_TRADE_BREAK
AllocNoOrdersType_NOT_SPECIFIED = cvar.AllocNoOrdersType_NOT_SPECIFIED
AllocNoOrdersType_EXPLICIT_LIST_PROVIDED = cvar.AllocNoOrdersType_EXPLICIT_LIST_PROVIDED
EventType_PUT = cvar.EventType_PUT
EventType_CALL = cvar.EventType_CALL
EventType_TENDER = cvar.EventType_TENDER
EventType_SINKING_FUND_CALL = cvar.EventType_SINKING_FUND_CALL
InstrAttribType_FLAT = cvar.InstrAttribType_FLAT
InstrAttribType_ZERO_COUPON = cvar.InstrAttribType_ZERO_COUPON
InstrAttribType_INTEREST_BEARING = cvar.InstrAttribType_INTEREST_BEARING
InstrAttribType_NO_PERIODIC_PAYMENTS = cvar.InstrAttribType_NO_PERIODIC_PAYMENTS
InstrAttribType_VARIABLE_RATE = cvar.InstrAttribType_VARIABLE_RATE
InstrAttribType_LESS_FEE_FOR_PUT = cvar.InstrAttribType_LESS_FEE_FOR_PUT
InstrAttribType_STEPPED_COUPON = cvar.InstrAttribType_STEPPED_COUPON
InstrAttribType_COUPON_PERIOD = cvar.InstrAttribType_COUPON_PERIOD
InstrAttribType_WHEN_AND_IF_ISSUED = cvar.InstrAttribType_WHEN_AND_IF_ISSUED
MiscFeeBasis_ABSOLUTE = cvar.MiscFeeBasis_ABSOLUTE
MiscFeeBasis_PER_UNIT = cvar.MiscFeeBasis_PER_UNIT
MiscFeeBasis_PERCENTAGE = cvar.MiscFeeBasis_PERCENTAGE
CollAsgnReason_INITIAL = cvar.CollAsgnReason_INITIAL
CollAsgnReason_SCHEDULED = cvar.CollAsgnReason_SCHEDULED
CollAsgnReason_TIME_WARNING = cvar.CollAsgnReason_TIME_WARNING
CollAsgnReason_MARGIN_DEFICIENCY = cvar.CollAsgnReason_MARGIN_DEFICIENCY
CollAsgnReason_MARGIN_EXCESS = cvar.CollAsgnReason_MARGIN_EXCESS
CollAsgnReason_FORWARD_COLLATERAL_DEMAND = cvar.CollAsgnReason_FORWARD_COLLATERAL_DEMAND
CollAsgnReason_EVENT_OF_DEFAULT = cvar.CollAsgnReason_EVENT_OF_DEFAULT
CollAsgnReason_ADVERSE_TAX_EVENT = cvar.CollAsgnReason_ADVERSE_TAX_EVENT
CollInquiryQualifier_TRADEDATE = cvar.CollInquiryQualifier_TRADEDATE
CollInquiryQualifier_GC_INSTRUMENT = cvar.CollInquiryQualifier_GC_INSTRUMENT
CollInquiryQualifier_COLLATERALINSTRUMENT = cvar.CollInquiryQualifier_COLLATERALINSTRUMENT
CollInquiryQualifier_SUBSTITUTION_ELIGIBLE = cvar.CollInquiryQualifier_SUBSTITUTION_ELIGIBLE
CollInquiryQualifier_NOT_ASSIGNED = cvar.CollInquiryQualifier_NOT_ASSIGNED
CollInquiryQualifier_PARTIALLY_ASSIGNED = cvar.CollInquiryQualifier_PARTIALLY_ASSIGNED
CollInquiryQualifier_FULLY_ASSIGNED = cvar.CollInquiryQualifier_FULLY_ASSIGNED
CollInquiryQualifier_OUTSTANDING_TRADES = cvar.CollInquiryQualifier_OUTSTANDING_TRADES
CollAsgnTransType_NEW = cvar.CollAsgnTransType_NEW
CollAsgnTransType_REPLACE = cvar.CollAsgnTransType_REPLACE
CollAsgnTransType_CANCEL = cvar.CollAsgnTransType_CANCEL
CollAsgnTransType_RELEASE = cvar.CollAsgnTransType_RELEASE
CollAsgnTransType_REVERSE = cvar.CollAsgnTransType_REVERSE
CollAsgnRespType_RECEIVED = cvar.CollAsgnRespType_RECEIVED
CollAsgnRespType_ACCEPTED = cvar.CollAsgnRespType_ACCEPTED
CollAsgnRespType_DECLINED = cvar.CollAsgnRespType_DECLINED
CollAsgnRespType_REJECTED = cvar.CollAsgnRespType_REJECTED
CollAsgnRejectReason_UNKNOWN_DEAL = cvar.CollAsgnRejectReason_UNKNOWN_DEAL
CollAsgnRejectReason_UNKNOWN_OR_INVALID_INSTRUMENT = cvar.CollAsgnRejectReason_UNKNOWN_OR_INVALID_INSTRUMENT
CollAsgnRejectReason_UNAUTHORIZED_TRANSACTION = cvar.CollAsgnRejectReason_UNAUTHORIZED_TRANSACTION
CollAsgnRejectReason_INSUFFICIENT_COLLATERAL = cvar.CollAsgnRejectReason_INSUFFICIENT_COLLATERAL
CollAsgnRejectReason_INVALID_TYPE_OF_COLLATERAL = cvar.CollAsgnRejectReason_INVALID_TYPE_OF_COLLATERAL
CollAsgnRejectReason_EXCESSIVE_SUBSTITUTION = cvar.CollAsgnRejectReason_EXCESSIVE_SUBSTITUTION
CollStatus_UNASSIGNED = cvar.CollStatus_UNASSIGNED
CollStatus_PARTIALLY_ASSIGNED = cvar.CollStatus_PARTIALLY_ASSIGNED
CollStatus_ASSIGNMENT_PROPOSED = cvar.CollStatus_ASSIGNMENT_PROPOSED
CollStatus_ASSIGNED = cvar.CollStatus_ASSIGNED
CollStatus_CHALLENGED = cvar.CollStatus_CHALLENGED
DeliveryType_VERSUS_PAYMENT = cvar.DeliveryType_VERSUS_PAYMENT
DeliveryType_FREE = cvar.DeliveryType_FREE
DeliveryType_TRI_PARTY = cvar.DeliveryType_TRI_PARTY
DeliveryType_HOLD_IN_CUSTODY = cvar.DeliveryType_HOLD_IN_CUSTODY
UserRequestType_LOGONUSER = cvar.UserRequestType_LOGONUSER
UserRequestType_LOGOFFUSER = cvar.UserRequestType_LOGOFFUSER
UserRequestType_CHANGEPASSWORDFORUSER = cvar.UserRequestType_CHANGEPASSWORDFORUSER
UserRequestType_REQUEST_INDIVIDUAL_USER_STATUS = cvar.UserRequestType_REQUEST_INDIVIDUAL_USER_STATUS
UserStatus_LOGGED_IN = cvar.UserStatus_LOGGED_IN
UserStatus_NOT_LOGGED_IN = cvar.UserStatus_NOT_LOGGED_IN
UserStatus_USER_NOT_RECOGNISED = cvar.UserStatus_USER_NOT_RECOGNISED
UserStatus_PASSWORD_INCORRECT = cvar.UserStatus_PASSWORD_INCORRECT
UserStatus_PASSWORD_CHANGED = cvar.UserStatus_PASSWORD_CHANGED
UserStatus_OTHER = cvar.UserStatus_OTHER
StatusValue_CONNECTED = cvar.StatusValue_CONNECTED
StatusValue_NOT_CONNECTED_DOWN_EXPECTED_UP = cvar.StatusValue_NOT_CONNECTED_DOWN_EXPECTED_UP
StatusValue_NOT_CONNECTED_DOWN_EXPECTED_DOWN = cvar.StatusValue_NOT_CONNECTED_DOWN_EXPECTED_DOWN
StatusValue_IN_PROCESS = cvar.StatusValue_IN_PROCESS
NetworkRequestType_SNAPSHOT = cvar.NetworkRequestType_SNAPSHOT
NetworkRequestType_SUBSCRIBE = cvar.NetworkRequestType_SUBSCRIBE
NetworkRequestType_STOP_SUBSCRIBING = cvar.NetworkRequestType_STOP_SUBSCRIBING
NetworkRequestType_LEVEL_OF_DETAIL = cvar.NetworkRequestType_LEVEL_OF_DETAIL
NetworkStatusResponseType_FULL = cvar.NetworkStatusResponseType_FULL
NetworkStatusResponseType_INCREMENTAL_UPDATE = cvar.NetworkStatusResponseType_INCREMENTAL_UPDATE
TrdRptStatus_ACCEPTED = cvar.TrdRptStatus_ACCEPTED
TrdRptStatus_REJECTED = cvar.TrdRptStatus_REJECTED
AffirmStatus_RECEIVED = cvar.AffirmStatus_RECEIVED
AffirmStatus_CONFIRM_REJECTED = cvar.AffirmStatus_CONFIRM_REJECTED
AffirmStatus_AFFIRMED = cvar.AffirmStatus_AFFIRMED
CollAction_RETAIN = cvar.CollAction_RETAIN
CollAction_ADD = cvar.CollAction_ADD
CollAction_REMOVE = cvar.CollAction_REMOVE
CollInquiryStatus_ACCEPTED = cvar.CollInquiryStatus_ACCEPTED
CollInquiryStatus_ACCEPTED_WITH_WARNINGS = cvar.CollInquiryStatus_ACCEPTED_WITH_WARNINGS
CollInquiryStatus_COMPLETED = cvar.CollInquiryStatus_COMPLETED
CollInquiryStatus_COMPLETED_WITH_WARNINGS = cvar.CollInquiryStatus_COMPLETED_WITH_WARNINGS
CollInquiryStatus_REJECTED = cvar.CollInquiryStatus_REJECTED
CollInquiryResult_SUCCESSFUL = cvar.CollInquiryResult_SUCCESSFUL
CollInquiryResult_INVALID_OR_UNKNOWN_INSTRUMENT = cvar.CollInquiryResult_INVALID_OR_UNKNOWN_INSTRUMENT
CollInquiryResult_INVALID_OR_UNKNOWN_COLLATERAL_TYPE = cvar.CollInquiryResult_INVALID_OR_UNKNOWN_COLLATERAL_TYPE
CollInquiryResult_INVALID_PARTIES = cvar.CollInquiryResult_INVALID_PARTIES
CollInquiryResult_INVALID_TRANSPORT_TYPE_REQUESTED = cvar.CollInquiryResult_INVALID_TRANSPORT_TYPE_REQUESTED
CollInquiryResult_INVALID_DESTINATION_REQUESTED = cvar.CollInquiryResult_INVALID_DESTINATION_REQUESTED
CollInquiryResult_NO_COLLATERAL_FOUND_FOR_THE_TRADE_SPECIFIED = cvar.CollInquiryResult_NO_COLLATERAL_FOUND_FOR_THE_TRADE_SPECIFIED
CollInquiryResult_NO_COLLATERAL_FOUND_FOR_THE_ORDER_SPECIFIED = cvar.CollInquiryResult_NO_COLLATERAL_FOUND_FOR_THE_ORDER_SPECIFIED
CollInquiryResult_COLLATERAL_INQUIRY_TYPE_NOT_SUPPORTED = cvar.CollInquiryResult_COLLATERAL_INQUIRY_TYPE_NOT_SUPPORTED
CollInquiryResult_UNAUTHORIZED_FOR_COLLATERAL_INQUIRY = cvar.CollInquiryResult_UNAUTHORIZED_FOR_COLLATERAL_INQUIRY
CollInquiryResult_OTHER = cvar.CollInquiryResult_OTHER
SessionRejectReason_INVALID_TAG_NUMBER_TEXT = cvar.SessionRejectReason_INVALID_TAG_NUMBER_TEXT
SessionRejectReason_REQUIRED_TAG_MISSING_TEXT = cvar.SessionRejectReason_REQUIRED_TAG_MISSING_TEXT
SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE_TEXT = cvar.SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE_TEXT
SessionRejectReason_UNDEFINED_TAG_TEXT = cvar.SessionRejectReason_UNDEFINED_TAG_TEXT
SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE_TEXT = cvar.SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE_TEXT
SessionRejectReason_VALUE_IS_INCORRECT_TEXT = cvar.SessionRejectReason_VALUE_IS_INCORRECT_TEXT
SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE_TEXT = cvar.SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE_TEXT
SessionRejectReason_DECRYPTION_PROBLEM_TEXT = cvar.SessionRejectReason_DECRYPTION_PROBLEM_TEXT
SessionRejectReason_SIGNATURE_PROBLEM_TEXT = cvar.SessionRejectReason_SIGNATURE_PROBLEM_TEXT
SessionRejectReason_COMPID_PROBLEM_TEXT = cvar.SessionRejectReason_COMPID_PROBLEM_TEXT
SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM_TEXT = cvar.SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM_TEXT
SessionRejectReason_INVALID_MSGTYPE_TEXT = cvar.SessionRejectReason_INVALID_MSGTYPE_TEXT
SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE_TEXT = cvar.SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE_TEXT
SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER_TEXT = cvar.SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER_TEXT
SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP_TEXT = cvar.SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP_TEXT
BusinessRejectReason_OTHER_TEXT = cvar.BusinessRejectReason_OTHER_TEXT
BusinessRejectReason_UNKNOWN_ID_TEXT = cvar.BusinessRejectReason_UNKNOWN_ID_TEXT
BusinessRejectReason_UNKNOWN_SECURITY_TEXT = cvar.BusinessRejectReason_UNKNOWN_SECURITY_TEXT
BusinessRejectReason_UNSUPPORTED_MESSAGE_TYPE_TEXT = cvar.BusinessRejectReason_UNSUPPORTED_MESSAGE_TYPE_TEXT
BusinessRejectReason_APPLICATION_NOT_AVAILABLE_TEXT = cvar.BusinessRejectReason_APPLICATION_NOT_AVAILABLE_TEXT
BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING_TEXT = cvar.BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING_TEXT
BusinessRejectReason_NOT_AUTHORIZED_TEXT = cvar.BusinessRejectReason_NOT_AUTHORIZED_TEXT
BusinessRejectReason_DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME_TEXT = cvar.BusinessRejectReason_DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME_TEXT
ExecTransType_NEW = cvar.ExecTransType_NEW
ExecTransType_CANCEL = cvar.ExecTransType_CANCEL
ExecTransType_CORRECT = cvar.ExecTransType_CORRECT
ExecTransType_STATUS = cvar.ExecTransType_STATUS
IDSource_CUSIP = cvar.IDSource_CUSIP
IDSource_SEDOL = cvar.IDSource_SEDOL
IDSource_QUIK = cvar.IDSource_QUIK
IDSource_ISIN_NUMBER = cvar.IDSource_ISIN_NUMBER
IDSource_RIC_CODE = cvar.IDSource_RIC_CODE
IDSource_ISO_CURRENCY_CODE = cvar.IDSource_ISO_CURRENCY_CODE
IDSource_ISO_COUNTRY_CODE = cvar.IDSource_ISO_COUNTRY_CODE
IDSource_EXCHANGE_SYMBOL = cvar.IDSource_EXCHANGE_SYMBOL
IDSource_CONSOLIDATED_TAPE_ASSOCIATION = cvar.IDSource_CONSOLIDATED_TAPE_ASSOCIATION
IOIShares_SMALL = cvar.IOIShares_SMALL
IOIShares_MEDIUM = cvar.IOIShares_MEDIUM
IOIShares_LARGE = cvar.IOIShares_LARGE
Rule80A_AGENCY_SINGLE_ORDER = cvar.Rule80A_AGENCY_SINGLE_ORDER
Rule80A_SHORT_EXEMPT_TRANSACTION_REFER_TO_A_TYPE = cvar.Rule80A_SHORT_EXEMPT_TRANSACTION_REFER_TO_A_TYPE
Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_MEMBER_FIRM = cvar.Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_MEMBER_FIRM
Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRM = cvar.Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRM
Rule80A_SHORT_EXEMPT_TRANSACTION_FOR_PRINCIPAL = cvar.Rule80A_SHORT_EXEMPT_TRANSACTION_FOR_PRINCIPAL
Rule80A_SHORT_EXEMPT_TRANSACTION_REFER_TO_W_TYPE = cvar.Rule80A_SHORT_EXEMPT_TRANSACTION_REFER_TO_W_TYPE
Rule80A_SHORT_EXEMPT_TRANSACTION_REFER_TO_I_TYPE = cvar.Rule80A_SHORT_EXEMPT_TRANSACTION_REFER_TO_I_TYPE
Rule80A_INDIVIDUAL_INVESTOR = cvar.Rule80A_INDIVIDUAL_INVESTOR
Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = cvar.Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER
Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = cvar.Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER
Rule80A_SHORT_EXEMPT_AFFILIATED = cvar.Rule80A_SHORT_EXEMPT_AFFILIATED
Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER = cvar.Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER
Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_MEMBER = cvar.Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_MEMBER
Rule80A_PROPRIETARY_AFFILIATED = cvar.Rule80A_PROPRIETARY_AFFILIATED
Rule80A_PRINCIPAL = cvar.Rule80A_PRINCIPAL
Rule80A_TRANSACTIONS_NON_MEMBER = cvar.Rule80A_TRANSACTIONS_NON_MEMBER
Rule80A_SPECIALIST_TRADES = cvar.Rule80A_SPECIALIST_TRADES
Rule80A_TRANSACTIONS_UNAFFILIATED_MEMBER = cvar.Rule80A_TRANSACTIONS_UNAFFILIATED_MEMBER
Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY = cvar.Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY
Rule80A_ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER = cvar.Rule80A_ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER
Rule80A_SHORT_EXEMPT_NOT_AFFILIATED = cvar.Rule80A_SHORT_EXEMPT_NOT_AFFILIATED
Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_AGENCY = cvar.Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_AGENCY
Rule80A_SHORT_EXEMPT_NONMEMBER = cvar.Rule80A_SHORT_EXEMPT_NONMEMBER
SettlmntTyp_REGULAR = cvar.SettlmntTyp_REGULAR
SettlmntTyp_CASH = cvar.SettlmntTyp_CASH
SettlmntTyp_NEXT_DAY = cvar.SettlmntTyp_NEXT_DAY
SettlmntTyp_T_PLUS_2 = cvar.SettlmntTyp_T_PLUS_2
SettlmntTyp_T_PLUS_3 = cvar.SettlmntTyp_T_PLUS_3
SettlmntTyp_T_PLUS_4 = cvar.SettlmntTyp_T_PLUS_4
SettlmntTyp_FUTURE = cvar.SettlmntTyp_FUTURE
SettlmntTyp_WHEN_AND_IF_ISSUED = cvar.SettlmntTyp_WHEN_AND_IF_ISSUED
SettlmntTyp_SELLERS_OPTION = cvar.SettlmntTyp_SELLERS_OPTION
SettlmntTyp_T_PLUS_5 = cvar.SettlmntTyp_T_PLUS_5
SettlmntTyp_T_PLUS_1 = cvar.SettlmntTyp_T_PLUS_1
OpenClose_OPEN = cvar.OpenClose_OPEN
OpenClose_CLOSE = cvar.OpenClose_CLOSE
CxlType_PARTIAL_CANCEL = cvar.CxlType_PARTIAL_CANCEL
CxlType_FULL_REMAINING_QUANTITY = cvar.CxlType_FULL_REMAINING_QUANTITY
SettlLocation_CEDEL = cvar.SettlLocation_CEDEL
SettlLocation_DEPOSITORY_TRUST_COMPANY = cvar.SettlLocation_DEPOSITORY_TRUST_COMPANY
SettlLocation_EUROCLEAR = cvar.SettlLocation_EUROCLEAR
SettlLocation_FEDERAL_BOOK_ENTRY = cvar.SettlLocation_FEDERAL_BOOK_ENTRY
SettlLocation_PHYSICAL = cvar.SettlLocation_PHYSICAL
SettlLocation_PARTICIPANT_TRUST_COMPANY_ISO_COUNTRY = cvar.SettlLocation_PARTICIPANT_TRUST_COMPANY_ISO_COUNTRY
PutOrCall_PUT = cvar.PutOrCall_PUT
PutOrCall_CALL = cvar.PutOrCall_CALL
CustomerOrFirm_CUSTOMER = cvar.CustomerOrFirm_CUSTOMER
CustomerOrFirm_FIRM = cvar.CustomerOrFirm_FIRM
Benchmark_CURVE = cvar.Benchmark_CURVE
Benchmark_FIVEYR = cvar.Benchmark_FIVEYR
Benchmark_OLD5 = cvar.Benchmark_OLD5
Benchmark_TENYR = cvar.Benchmark_TENYR
Benchmark_OLD10 = cvar.Benchmark_OLD10
Benchmark_THIRTYYR = cvar.Benchmark_THIRTYYR
Benchmark_OLD30 = cvar.Benchmark_OLD30
Benchmark_THREEMOLIBOR = cvar.Benchmark_THREEMOLIBOR
Benchmark_SIXMOLIBOR = cvar.Benchmark_SIXMOLIBOR
OpenCloseSettleFlag_DAILY_OPEN = cvar.OpenCloseSettleFlag_DAILY_OPEN
OpenCloseSettleFlag_SESSION_OPEN = cvar.OpenCloseSettleFlag_SESSION_OPEN
OpenCloseSettleFlag_DELIVERY_SETTLEMENT_PRICE = cvar.OpenCloseSettleFlag_DELIVERY_SETTLEMENT_PRICE
OpenCloseSettleFlag_EXPECTED_PRICE = cvar.OpenCloseSettleFlag_EXPECTED_PRICE
OpenCloseSettleFlag_PRICE_FROM_PREVIOUS_BUSINESS_DAY = cvar.OpenCloseSettleFlag_PRICE_FROM_PREVIOUS_BUSINESS_DAY

class SessionSettings(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SessionSettings, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SessionSettings, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SessionSettings(*args)
        try: self.this.append(this)
        except: self.this = this
    def has(*args): return _quickfix.SessionSettings_has(*args)
    def get(*args): return _quickfix.SessionSettings_get(*args)
    def set(*args): return _quickfix.SessionSettings_set(*args)
    def size(*args): return _quickfix.SessionSettings_size(*args)
    def getSessions(*args): return _quickfix.SessionSettings_getSessions(*args)
    __swig_destroy__ = _quickfix.delete_SessionSettings
    __del__ = lambda self : None;
SessionSettings_swigregister = _quickfix.SessionSettings_swigregister
SessionSettings_swigregister(SessionSettings)
__lt__ = _quickfix.__lt__
__eq__ = _quickfix.__eq__
__ne__ = _quickfix.__ne__
__lshift__ = _quickfix.__lshift__
BEGINSTRING = cvar.BEGINSTRING
SENDERCOMPID = cvar.SENDERCOMPID
TARGETCOMPID = cvar.TARGETCOMPID
SESSION_QUALIFIER = cvar.SESSION_QUALIFIER
CONNECTION_TYPE = cvar.CONNECTION_TYPE
USE_DATA_DICTIONARY = cvar.USE_DATA_DICTIONARY
SEND_RESETSEQNUMFLAG = cvar.SEND_RESETSEQNUMFLAG
DATA_DICTIONARY = cvar.DATA_DICTIONARY
START_TIME = cvar.START_TIME
END_TIME = cvar.END_TIME
START_DAY = cvar.START_DAY
END_DAY = cvar.END_DAY
CHECK_COMPID = cvar.CHECK_COMPID
CHECK_LATENCY = cvar.CHECK_LATENCY
MAX_LATENCY = cvar.MAX_LATENCY
HEARTBTINT = cvar.HEARTBTINT
SOCKET_ACCEPT_PORT = cvar.SOCKET_ACCEPT_PORT
SOCKET_REUSE_ADDRESS = cvar.SOCKET_REUSE_ADDRESS
SOCKET_CONNECT_HOST = cvar.SOCKET_CONNECT_HOST
SOCKET_CONNECT_PORT = cvar.SOCKET_CONNECT_PORT
SOCKET_NODELAY = cvar.SOCKET_NODELAY
RECONNECT_INTERVAL = cvar.RECONNECT_INTERVAL
VALIDATE_FIELDS_OUT_OF_ORDER = cvar.VALIDATE_FIELDS_OUT_OF_ORDER
VALIDATE_FIELDS_HAVE_VALUES = cvar.VALIDATE_FIELDS_HAVE_VALUES
VALIDATE_USER_DEFINED_FIELDS = cvar.VALIDATE_USER_DEFINED_FIELDS
LOGON_TIMEOUT = cvar.LOGON_TIMEOUT
LOGOUT_TIMEOUT = cvar.LOGOUT_TIMEOUT
FILE_PATH = cvar.FILE_PATH
FILE_STORE_PATH = cvar.FILE_STORE_PATH
MYSQL_STORE_USECONNECTIONPOOL = cvar.MYSQL_STORE_USECONNECTIONPOOL
MYSQL_STORE_DATABASE = cvar.MYSQL_STORE_DATABASE
MYSQL_STORE_USER = cvar.MYSQL_STORE_USER
MYSQL_STORE_PASSWORD = cvar.MYSQL_STORE_PASSWORD
MYSQL_STORE_HOST = cvar.MYSQL_STORE_HOST
MYSQL_STORE_PORT = cvar.MYSQL_STORE_PORT
POSTGRESQL_STORE_USECONNECTIONPOOL = cvar.POSTGRESQL_STORE_USECONNECTIONPOOL
POSTGRESQL_STORE_DATABASE = cvar.POSTGRESQL_STORE_DATABASE
POSTGRESQL_STORE_USER = cvar.POSTGRESQL_STORE_USER
POSTGRESQL_STORE_PASSWORD = cvar.POSTGRESQL_STORE_PASSWORD
POSTGRESQL_STORE_HOST = cvar.POSTGRESQL_STORE_HOST
POSTGRESQL_STORE_PORT = cvar.POSTGRESQL_STORE_PORT
ODBC_STORE_USER = cvar.ODBC_STORE_USER
ODBC_STORE_PASSWORD = cvar.ODBC_STORE_PASSWORD
ODBC_STORE_CONNECTION_STRING = cvar.ODBC_STORE_CONNECTION_STRING
FILE_LOG_PATH = cvar.FILE_LOG_PATH
SCREEN_LOG_SHOW_INCOMING = cvar.SCREEN_LOG_SHOW_INCOMING
SCREEN_LOG_SHOW_OUTGOING = cvar.SCREEN_LOG_SHOW_OUTGOING
SCREEN_LOG_SHOW_EVENTS = cvar.SCREEN_LOG_SHOW_EVENTS
MYSQL_LOG_USECONNECTIONPOOL = cvar.MYSQL_LOG_USECONNECTIONPOOL
MYSQL_LOG_DATABASE = cvar.MYSQL_LOG_DATABASE
MYSQL_LOG_USER = cvar.MYSQL_LOG_USER
MYSQL_LOG_PASSWORD = cvar.MYSQL_LOG_PASSWORD
MYSQL_LOG_HOST = cvar.MYSQL_LOG_HOST
MYSQL_LOG_PORT = cvar.MYSQL_LOG_PORT
POSTGRESQL_LOG_USECONNECTIONPOOL = cvar.POSTGRESQL_LOG_USECONNECTIONPOOL
POSTGRESQL_LOG_DATABASE = cvar.POSTGRESQL_LOG_DATABASE
POSTGRESQL_LOG_USER = cvar.POSTGRESQL_LOG_USER
POSTGRESQL_LOG_PASSWORD = cvar.POSTGRESQL_LOG_PASSWORD
POSTGRESQL_LOG_HOST = cvar.POSTGRESQL_LOG_HOST
POSTGRESQL_LOG_PORT = cvar.POSTGRESQL_LOG_PORT
ODBC_LOG_USER = cvar.ODBC_LOG_USER
ODBC_LOG_PASSWORD = cvar.ODBC_LOG_PASSWORD
ODBC_LOG_CONNECTION_STRING = cvar.ODBC_LOG_CONNECTION_STRING
RESET_ON_LOGON = cvar.RESET_ON_LOGON
RESET_ON_LOGOUT = cvar.RESET_ON_LOGOUT
RESET_ON_DISCONNECT = cvar.RESET_ON_DISCONNECT
REFRESH_ON_LOGON = cvar.REFRESH_ON_LOGON
MILLISECONDS_IN_TIMESTAMP = cvar.MILLISECONDS_IN_TIMESTAMP

class Session(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Session, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Session, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Session(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Session
    __del__ = lambda self : None;
    def logon(*args): return _quickfix.Session_logon(*args)
    def logout(*args): return _quickfix.Session_logout(*args)
    def isEnabled(*args): return _quickfix.Session_isEnabled(*args)
    def sentLogon(*args): return _quickfix.Session_sentLogon(*args)
    def sentLogout(*args): return _quickfix.Session_sentLogout(*args)
    def receivedLogon(*args): return _quickfix.Session_receivedLogon(*args)
    def isLoggedOn(*args): return _quickfix.Session_isLoggedOn(*args)
    def reset(*args): return _quickfix.Session_reset(*args)
    def refresh(*args): return _quickfix.Session_refresh(*args)
    def setNextSenderMsgSeqNum(*args): return _quickfix.Session_setNextSenderMsgSeqNum(*args)
    def setNextTargetMsgSeqNum(*args): return _quickfix.Session_setNextTargetMsgSeqNum(*args)
    def getSessionID(*args): return _quickfix.Session_getSessionID(*args)
    def setDataDictionary(*args): return _quickfix.Session_setDataDictionary(*args)
    def getDataDictionary(*args): return _quickfix.Session_getDataDictionary(*args)
    __swig_getmethods__["sendToTarget"] = lambda x: _quickfix.Session_sendToTarget
    if _newclass:sendToTarget = staticmethod(_quickfix.Session_sendToTarget)
    __swig_getmethods__["doesSessionExist"] = lambda x: _quickfix.Session_doesSessionExist
    if _newclass:doesSessionExist = staticmethod(_quickfix.Session_doesSessionExist)
    __swig_getmethods__["lookupSession"] = lambda x: _quickfix.Session_lookupSession
    if _newclass:lookupSession = staticmethod(_quickfix.Session_lookupSession)
    __swig_getmethods__["isSessionRegistered"] = lambda x: _quickfix.Session_isSessionRegistered
    if _newclass:isSessionRegistered = staticmethod(_quickfix.Session_isSessionRegistered)
    __swig_getmethods__["registerSession"] = lambda x: _quickfix.Session_registerSession
    if _newclass:registerSession = staticmethod(_quickfix.Session_registerSession)
    __swig_getmethods__["unregisterSession"] = lambda x: _quickfix.Session_unregisterSession
    if _newclass:unregisterSession = staticmethod(_quickfix.Session_unregisterSession)
    __swig_getmethods__["numSessions"] = lambda x: _quickfix.Session_numSessions
    if _newclass:numSessions = staticmethod(_quickfix.Session_numSessions)
    def isSessionTime(*args): return _quickfix.Session_isSessionTime(*args)
    def checkCompId(*args): return _quickfix.Session_checkCompId(*args)
    def checkLatency(*args): return _quickfix.Session_checkLatency(*args)
    def setMaxLatency(*args): return _quickfix.Session_setMaxLatency(*args)
    def setLogonTimeout(*args): return _quickfix.Session_setLogonTimeout(*args)
    def setLogoutTimeout(*args): return _quickfix.Session_setLogoutTimeout(*args)
    def setResetOnLogon(*args): return _quickfix.Session_setResetOnLogon(*args)
    def setResetOnLogout(*args): return _quickfix.Session_setResetOnLogout(*args)
    def setResetOnDisconnect(*args): return _quickfix.Session_setResetOnDisconnect(*args)
    def setRefreshOnLogon(*args): return _quickfix.Session_setRefreshOnLogon(*args)
    def setMillisecondsInTimeStamp(*args): return _quickfix.Session_setMillisecondsInTimeStamp(*args)
    def setResponder(*args): return _quickfix.Session_setResponder(*args)
    def send(*args): return _quickfix.Session_send(*args)
    def next(*args): return _quickfix.Session_next(*args)
    def disconnect(*args): return _quickfix.Session_disconnect(*args)
    def getExpectedSenderNum(*args): return _quickfix.Session_getExpectedSenderNum(*args)
    def getExpectedTargetNum(*args): return _quickfix.Session_getExpectedTargetNum(*args)
    def getLog(*args): return _quickfix.Session_getLog(*args)
    def getStore(*args): return _quickfix.Session_getStore(*args)
Session_swigregister = _quickfix.Session_swigregister
Session_swigregister(Session)
__rshift__ = _quickfix.__rshift__
Session_sendToTarget = _quickfix.Session_sendToTarget
Session_doesSessionExist = _quickfix.Session_doesSessionExist
Session_lookupSession = _quickfix.Session_lookupSession
Session_isSessionRegistered = _quickfix.Session_isSessionRegistered
Session_registerSession = _quickfix.Session_registerSession
Session_unregisterSession = _quickfix.Session_unregisterSession
Session_numSessions = _quickfix.Session_numSessions

class LogFactory(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, LogFactory, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, LogFactory, name)
    def __init__(self): raise AttributeError, "No constructor defined"
    __repr__ = _swig_repr
    __swig_destroy__ = _quickfix.delete_LogFactory
    __del__ = lambda self : None;
    def create(*args): return _quickfix.LogFactory_create(*args)
    def destroy(*args): return _quickfix.LogFactory_destroy(*args)
LogFactory_swigregister = _quickfix.LogFactory_swigregister
LogFactory_swigregister(LogFactory)

class ScreenLogFactory(LogFactory):
    __swig_setmethods__ = {}
    for _s in [LogFactory]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ScreenLogFactory, name, value)
    __swig_getmethods__ = {}
    for _s in [LogFactory]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ScreenLogFactory, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ScreenLogFactory(*args)
        try: self.this.append(this)
        except: self.this = this
    def create(*args): return _quickfix.ScreenLogFactory_create(*args)
    def destroy(*args): return _quickfix.ScreenLogFactory_destroy(*args)
    __swig_destroy__ = _quickfix.delete_ScreenLogFactory
    __del__ = lambda self : None;
ScreenLogFactory_swigregister = _quickfix.ScreenLogFactory_swigregister
ScreenLogFactory_swigregister(ScreenLogFactory)

class Log(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Log, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Log, name)
    def __init__(self): raise AttributeError, "No constructor defined"
    __repr__ = _swig_repr
    __swig_destroy__ = _quickfix.delete_Log
    __del__ = lambda self : None;
    def clear(*args): return _quickfix.Log_clear(*args)
    def onIncoming(*args): return _quickfix.Log_onIncoming(*args)
    def onOutgoing(*args): return _quickfix.Log_onOutgoing(*args)
    def onEvent(*args): return _quickfix.Log_onEvent(*args)
Log_swigregister = _quickfix.Log_swigregister
Log_swigregister(Log)

class ScreenLog(Log):
    __swig_setmethods__ = {}
    for _s in [Log]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, ScreenLog, name, value)
    __swig_getmethods__ = {}
    for _s in [Log]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, ScreenLog, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_ScreenLog(*args)
        try: self.this.append(this)
        except: self.this = this
    def clear(*args): return _quickfix.ScreenLog_clear(*args)
    def onIncoming(*args): return _quickfix.ScreenLog_onIncoming(*args)
    def onOutgoing(*args): return _quickfix.ScreenLog_onOutgoing(*args)
    def onEvent(*args): return _quickfix.ScreenLog_onEvent(*args)
    __swig_destroy__ = _quickfix.delete_ScreenLog
    __del__ = lambda self : None;
ScreenLog_swigregister = _quickfix.ScreenLog_swigregister
ScreenLog_swigregister(ScreenLog)

class FileLogFactory(LogFactory):
    __swig_setmethods__ = {}
    for _s in [LogFactory]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FileLogFactory, name, value)
    __swig_getmethods__ = {}
    for _s in [LogFactory]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FileLogFactory, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FileLogFactory(*args)
        try: self.this.append(this)
        except: self.this = this
    def create(*args): return _quickfix.FileLogFactory_create(*args)
    def destroy(*args): return _quickfix.FileLogFactory_destroy(*args)
    __swig_destroy__ = _quickfix.delete_FileLogFactory
    __del__ = lambda self : None;
FileLogFactory_swigregister = _quickfix.FileLogFactory_swigregister
FileLogFactory_swigregister(FileLogFactory)

class FileLog(Log):
    __swig_setmethods__ = {}
    for _s in [Log]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FileLog, name, value)
    __swig_getmethods__ = {}
    for _s in [Log]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FileLog, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FileLog(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_FileLog
    __del__ = lambda self : None;
    def clear(*args): return _quickfix.FileLog_clear(*args)
    def onIncoming(*args): return _quickfix.FileLog_onIncoming(*args)
    def onOutgoing(*args): return _quickfix.FileLog_onOutgoing(*args)
    def onEvent(*args): return _quickfix.FileLog_onEvent(*args)
FileLog_swigregister = _quickfix.FileLog_swigregister
FileLog_swigregister(FileLog)

class MessageStoreFactory(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MessageStoreFactory, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MessageStoreFactory, name)
    def __init__(self): raise AttributeError, "No constructor defined"
    __repr__ = _swig_repr
    __swig_destroy__ = _quickfix.delete_MessageStoreFactory
    __del__ = lambda self : None;
    def create(*args): return _quickfix.MessageStoreFactory_create(*args)
    def destroy(*args): return _quickfix.MessageStoreFactory_destroy(*args)
MessageStoreFactory_swigregister = _quickfix.MessageStoreFactory_swigregister
MessageStoreFactory_swigregister(MessageStoreFactory)

class MemoryStoreFactory(MessageStoreFactory):
    __swig_setmethods__ = {}
    for _s in [MessageStoreFactory]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MemoryStoreFactory, name, value)
    __swig_getmethods__ = {}
    for _s in [MessageStoreFactory]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MemoryStoreFactory, name)
    __repr__ = _swig_repr
    def create(*args): return _quickfix.MemoryStoreFactory_create(*args)
    def destroy(*args): return _quickfix.MemoryStoreFactory_destroy(*args)
    def __init__(self, *args): 
        this = _quickfix.new_MemoryStoreFactory(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MemoryStoreFactory
    __del__ = lambda self : None;
MemoryStoreFactory_swigregister = _quickfix.MemoryStoreFactory_swigregister
MemoryStoreFactory_swigregister(MemoryStoreFactory)

class MessageStore(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MessageStore, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MessageStore, name)
    def __init__(self): raise AttributeError, "No constructor defined"
    __repr__ = _swig_repr
    __swig_destroy__ = _quickfix.delete_MessageStore
    __del__ = lambda self : None;
    def set(*args): return _quickfix.MessageStore_set(*args)
    def get(*args): return _quickfix.MessageStore_get(*args)
    def getNextSenderMsgSeqNum(*args): return _quickfix.MessageStore_getNextSenderMsgSeqNum(*args)
    def getNextTargetMsgSeqNum(*args): return _quickfix.MessageStore_getNextTargetMsgSeqNum(*args)
    def setNextSenderMsgSeqNum(*args): return _quickfix.MessageStore_setNextSenderMsgSeqNum(*args)
    def setNextTargetMsgSeqNum(*args): return _quickfix.MessageStore_setNextTargetMsgSeqNum(*args)
    def incrNextSenderMsgSeqNum(*args): return _quickfix.MessageStore_incrNextSenderMsgSeqNum(*args)
    def incrNextTargetMsgSeqNum(*args): return _quickfix.MessageStore_incrNextTargetMsgSeqNum(*args)
    def getCreationTime(*args): return _quickfix.MessageStore_getCreationTime(*args)
    def reset(*args): return _quickfix.MessageStore_reset(*args)
    def refresh(*args): return _quickfix.MessageStore_refresh(*args)
MessageStore_swigregister = _quickfix.MessageStore_swigregister
MessageStore_swigregister(MessageStore)

class MemoryStore(MessageStore):
    __swig_setmethods__ = {}
    for _s in [MessageStore]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, MemoryStore, name, value)
    __swig_getmethods__ = {}
    for _s in [MessageStore]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, MemoryStore, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MemoryStore(*args)
        try: self.this.append(this)
        except: self.this = this
    def set(*args): return _quickfix.MemoryStore_set(*args)
    def get(*args): return _quickfix.MemoryStore_get(*args)
    def getNextSenderMsgSeqNum(*args): return _quickfix.MemoryStore_getNextSenderMsgSeqNum(*args)
    def getNextTargetMsgSeqNum(*args): return _quickfix.MemoryStore_getNextTargetMsgSeqNum(*args)
    def setNextSenderMsgSeqNum(*args): return _quickfix.MemoryStore_setNextSenderMsgSeqNum(*args)
    def setNextTargetMsgSeqNum(*args): return _quickfix.MemoryStore_setNextTargetMsgSeqNum(*args)
    def incrNextSenderMsgSeqNum(*args): return _quickfix.MemoryStore_incrNextSenderMsgSeqNum(*args)
    def incrNextTargetMsgSeqNum(*args): return _quickfix.MemoryStore_incrNextTargetMsgSeqNum(*args)
    def setCreationTime(*args): return _quickfix.MemoryStore_setCreationTime(*args)
    def getCreationTime(*args): return _quickfix.MemoryStore_getCreationTime(*args)
    def reset(*args): return _quickfix.MemoryStore_reset(*args)
    def refresh(*args): return _quickfix.MemoryStore_refresh(*args)
    __swig_destroy__ = _quickfix.delete_MemoryStore
    __del__ = lambda self : None;
MemoryStore_swigregister = _quickfix.MemoryStore_swigregister
MemoryStore_swigregister(MemoryStore)

class MessageStoreFactoryExceptionWrapper(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MessageStoreFactoryExceptionWrapper, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MessageStoreFactoryExceptionWrapper, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MessageStoreFactoryExceptionWrapper(*args)
        try: self.this.append(this)
        except: self.this = this
    def create(*args): return _quickfix.MessageStoreFactoryExceptionWrapper_create(*args)
    def destroy(*args): return _quickfix.MessageStoreFactoryExceptionWrapper_destroy(*args)
    __swig_destroy__ = _quickfix.delete_MessageStoreFactoryExceptionWrapper
    __del__ = lambda self : None;
MessageStoreFactoryExceptionWrapper_swigregister = _quickfix.MessageStoreFactoryExceptionWrapper_swigregister
MessageStoreFactoryExceptionWrapper_swigregister(MessageStoreFactoryExceptionWrapper)

class MessageStoreExceptionWrapper(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MessageStoreExceptionWrapper, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MessageStoreExceptionWrapper, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_MessageStoreExceptionWrapper(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_MessageStoreExceptionWrapper
    __del__ = lambda self : None;
    def set(*args): return _quickfix.MessageStoreExceptionWrapper_set(*args)
    def get(*args): return _quickfix.MessageStoreExceptionWrapper_get(*args)
    def getNextSenderMsgSeqNum(*args): return _quickfix.MessageStoreExceptionWrapper_getNextSenderMsgSeqNum(*args)
    def getNextTargetMsgSeqNum(*args): return _quickfix.MessageStoreExceptionWrapper_getNextTargetMsgSeqNum(*args)
    def setNextSenderMsgSeqNum(*args): return _quickfix.MessageStoreExceptionWrapper_setNextSenderMsgSeqNum(*args)
    def setNextTargetMsgSeqNum(*args): return _quickfix.MessageStoreExceptionWrapper_setNextTargetMsgSeqNum(*args)
    def incrNextSenderMsgSeqNum(*args): return _quickfix.MessageStoreExceptionWrapper_incrNextSenderMsgSeqNum(*args)
    def incrNextTargetMsgSeqNum(*args): return _quickfix.MessageStoreExceptionWrapper_incrNextTargetMsgSeqNum(*args)
    def getCreationTime(*args): return _quickfix.MessageStoreExceptionWrapper_getCreationTime(*args)
    def reset(*args): return _quickfix.MessageStoreExceptionWrapper_reset(*args)
    def refresh(*args): return _quickfix.MessageStoreExceptionWrapper_refresh(*args)
MessageStoreExceptionWrapper_swigregister = _quickfix.MessageStoreExceptionWrapper_swigregister
MessageStoreExceptionWrapper_swigregister(MessageStoreExceptionWrapper)

class FileStoreFactory(MessageStoreFactory):
    __swig_setmethods__ = {}
    for _s in [MessageStoreFactory]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FileStoreFactory, name, value)
    __swig_getmethods__ = {}
    for _s in [MessageStoreFactory]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FileStoreFactory, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FileStoreFactory(*args)
        try: self.this.append(this)
        except: self.this = this
    def create(*args): return _quickfix.FileStoreFactory_create(*args)
    def destroy(*args): return _quickfix.FileStoreFactory_destroy(*args)
    __swig_destroy__ = _quickfix.delete_FileStoreFactory
    __del__ = lambda self : None;
FileStoreFactory_swigregister = _quickfix.FileStoreFactory_swigregister
FileStoreFactory_swigregister(FileStoreFactory)

class FileStore(MessageStore):
    __swig_setmethods__ = {}
    for _s in [MessageStore]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, FileStore, name, value)
    __swig_getmethods__ = {}
    for _s in [MessageStore]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, FileStore, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_FileStore(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_FileStore
    __del__ = lambda self : None;
    def set(*args): return _quickfix.FileStore_set(*args)
    def get(*args): return _quickfix.FileStore_get(*args)
    def getNextSenderMsgSeqNum(*args): return _quickfix.FileStore_getNextSenderMsgSeqNum(*args)
    def getNextTargetMsgSeqNum(*args): return _quickfix.FileStore_getNextTargetMsgSeqNum(*args)
    def setNextSenderMsgSeqNum(*args): return _quickfix.FileStore_setNextSenderMsgSeqNum(*args)
    def setNextTargetMsgSeqNum(*args): return _quickfix.FileStore_setNextTargetMsgSeqNum(*args)
    def incrNextSenderMsgSeqNum(*args): return _quickfix.FileStore_incrNextSenderMsgSeqNum(*args)
    def incrNextTargetMsgSeqNum(*args): return _quickfix.FileStore_incrNextTargetMsgSeqNum(*args)
    def getCreationTime(*args): return _quickfix.FileStore_getCreationTime(*args)
    def reset(*args): return _quickfix.FileStore_reset(*args)
    def refresh(*args): return _quickfix.FileStore_refresh(*args)
FileStore_swigregister = _quickfix.FileStore_swigregister
FileStore_swigregister(FileStore)

class Application(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Application, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Application, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _quickfix.delete_Application
    __del__ = lambda self : None;
    def onCreate(*args): return _quickfix.Application_onCreate(*args)
    def onLogon(*args): return _quickfix.Application_onLogon(*args)
    def onLogout(*args): return _quickfix.Application_onLogout(*args)
    def toAdmin(*args): return _quickfix.Application_toAdmin(*args)
    def toApp(*args): return _quickfix.Application_toApp(*args)
    def fromAdmin(*args): return _quickfix.Application_fromAdmin(*args)
    def fromApp(*args): return _quickfix.Application_fromApp(*args)
    def __init__(self, *args): 
        if self.__class__ == Application:
            args = (None,) + args
        else:
            args = (self,) + args
        this = _quickfix.new_Application(*args)
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _quickfix.disown_Application(self)
        return weakref_proxy(self)
Application_swigregister = _quickfix.Application_swigregister
Application_swigregister(Application)

class SynchronizedApplication(Application):
    __swig_setmethods__ = {}
    for _s in [Application]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SynchronizedApplication, name, value)
    __swig_getmethods__ = {}
    for _s in [Application]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SynchronizedApplication, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SynchronizedApplication(*args)
        try: self.this.append(this)
        except: self.this = this
    def onCreate(*args): return _quickfix.SynchronizedApplication_onCreate(*args)
    def onLogon(*args): return _quickfix.SynchronizedApplication_onLogon(*args)
    def onLogout(*args): return _quickfix.SynchronizedApplication_onLogout(*args)
    def toAdmin(*args): return _quickfix.SynchronizedApplication_toAdmin(*args)
    def toApp(*args): return _quickfix.SynchronizedApplication_toApp(*args)
    def fromAdmin(*args): return _quickfix.SynchronizedApplication_fromAdmin(*args)
    def fromApp(*args): return _quickfix.SynchronizedApplication_fromApp(*args)
    __swig_setmethods__["m_mutex"] = _quickfix.SynchronizedApplication_m_mutex_set
    __swig_getmethods__["m_mutex"] = _quickfix.SynchronizedApplication_m_mutex_get
    if _newclass:m_mutex = property(_quickfix.SynchronizedApplication_m_mutex_get, _quickfix.SynchronizedApplication_m_mutex_set)
    def app(*args): return _quickfix.SynchronizedApplication_app(*args)
    __swig_setmethods__["m_app"] = _quickfix.SynchronizedApplication_m_app_set
    __swig_getmethods__["m_app"] = _quickfix.SynchronizedApplication_m_app_get
    if _newclass:m_app = property(_quickfix.SynchronizedApplication_m_app_get, _quickfix.SynchronizedApplication_m_app_set)
    __swig_destroy__ = _quickfix.delete_SynchronizedApplication
    __del__ = lambda self : None;
SynchronizedApplication_swigregister = _quickfix.SynchronizedApplication_swigregister
SynchronizedApplication_swigregister(SynchronizedApplication)

class NullApplication(Application):
    __swig_setmethods__ = {}
    for _s in [Application]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, NullApplication, name, value)
    __swig_getmethods__ = {}
    for _s in [Application]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, NullApplication, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_NullApplication(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_NullApplication
    __del__ = lambda self : None;
NullApplication_swigregister = _quickfix.NullApplication_swigregister
NullApplication_swigregister(NullApplication)

class Initiator(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Initiator, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Initiator, name)
    def __init__(self): raise AttributeError, "No constructor defined"
    __repr__ = _swig_repr
    __swig_destroy__ = _quickfix.delete_Initiator
    __del__ = lambda self : None;
    def start(self):
    	thread.start_new_thread(_quickfix_start_thread, (self,))


    def block(*args): return _quickfix.Initiator_block(*args)
    def poll(*args): return _quickfix.Initiator_poll(*args)
    def stop(*args): return _quickfix.Initiator_stop(*args)
    def isLoggedOn(*args): return _quickfix.Initiator_isLoggedOn(*args)
    def getSession(*args): return _quickfix.Initiator_getSession(*args)
    def getSessions(*args): return _quickfix.Initiator_getSessions(*args)
    def has(*args): return _quickfix.Initiator_has(*args)
    def isStopped(*args): return _quickfix.Initiator_isStopped(*args)
    def getApplication(*args): return _quickfix.Initiator_getApplication(*args)
    def getMessageStoreFactory(*args): return _quickfix.Initiator_getMessageStoreFactory(*args)
Initiator_swigregister = _quickfix.Initiator_swigregister
Initiator_swigregister(Initiator)

class SocketInitiator(Initiator):
    __swig_setmethods__ = {}
    for _s in [Initiator]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SocketInitiator, name, value)
    __swig_getmethods__ = {}
    for _s in [Initiator]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SocketInitiator, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SocketInitiator(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SocketInitiator
    __del__ = lambda self : None;
SocketInitiator_swigregister = _quickfix.SocketInitiator_swigregister
SocketInitiator_swigregister(SocketInitiator)

class Acceptor(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Acceptor, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Acceptor, name)
    def __init__(self): raise AttributeError, "No constructor defined"
    __repr__ = _swig_repr
    __swig_destroy__ = _quickfix.delete_Acceptor
    __del__ = lambda self : None;
    def start(self):
    	thread.start_new_thread(_quickfix_start_thread, (self,))


    def block(*args): return _quickfix.Acceptor_block(*args)
    def poll(*args): return _quickfix.Acceptor_poll(*args)
    def stop(*args): return _quickfix.Acceptor_stop(*args)
    def isLoggedOn(*args): return _quickfix.Acceptor_isLoggedOn(*args)
    def getSession(*args): return _quickfix.Acceptor_getSession(*args)
    def getSessions(*args): return _quickfix.Acceptor_getSessions(*args)
    def has(*args): return _quickfix.Acceptor_has(*args)
    def isStopped(*args): return _quickfix.Acceptor_isStopped(*args)
    def getApplication(*args): return _quickfix.Acceptor_getApplication(*args)
    def getMessageStoreFactory(*args): return _quickfix.Acceptor_getMessageStoreFactory(*args)
Acceptor_swigregister = _quickfix.Acceptor_swigregister
Acceptor_swigregister(Acceptor)

class SocketAcceptor(Acceptor):
    __swig_setmethods__ = {}
    for _s in [Acceptor]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SocketAcceptor, name, value)
    __swig_getmethods__ = {}
    for _s in [Acceptor]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SocketAcceptor, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SocketAcceptor(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SocketAcceptor
    __del__ = lambda self : None;
SocketAcceptor_swigregister = _quickfix.SocketAcceptor_swigregister
SocketAcceptor_swigregister(SocketAcceptor)



