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
    __swig_destroy__ = _quickfix.delete_FieldBase
    __del__ = lambda self : None;
    def setField(*args): return _quickfix.FieldBase_setField(*args)
    def setString(*args): return _quickfix.FieldBase_setString(*args)
    def getField(*args): return _quickfix.FieldBase_getField(*args)
    def getString(*args): return _quickfix.FieldBase_getString(*args)
    def getValue(*args): return _quickfix.FieldBase_getValue(*args)
    def getLength(*args): return _quickfix.FieldBase_getLength(*args)
    def getTotal(*args): return _quickfix.FieldBase_getTotal(*args)
    def __lt__(*args): return _quickfix.FieldBase___lt__(*args)
    def __str__(*args): return _quickfix.FieldBase___str__(*args)
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
    def getFieldRef(*args): return _quickfix.FieldMap_getFieldRef(*args)
    def getFieldPtr(*args): return _quickfix.FieldMap_getFieldPtr(*args)
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
    def totalFields(*args): return _quickfix.FieldMap_totalFields(*args)
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
MsgType_NetworkStatusRequest = cvar.MsgType_NetworkStatusRequest
MsgType_NetworkStatusResponse = cvar.MsgType_NetworkStatusResponse
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

class Dictionary(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Dictionary, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Dictionary, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_Dictionary(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_Dictionary
    __del__ = lambda self : None;
    def getName(*args): return _quickfix.Dictionary_getName(*args)
    def size(*args): return _quickfix.Dictionary_size(*args)
    def getString(*args): return _quickfix.Dictionary_getString(*args)
    def getLong(*args): return _quickfix.Dictionary_getLong(*args)
    def getDouble(*args): return _quickfix.Dictionary_getDouble(*args)
    def getBool(*args): return _quickfix.Dictionary_getBool(*args)
    def getDay(*args): return _quickfix.Dictionary_getDay(*args)
    def setString(*args): return _quickfix.Dictionary_setString(*args)
    def setLong(*args): return _quickfix.Dictionary_setLong(*args)
    def setDouble(*args): return _quickfix.Dictionary_setDouble(*args)
    def setBool(*args): return _quickfix.Dictionary_setBool(*args)
    def setDay(*args): return _quickfix.Dictionary_setDay(*args)
    def has(*args): return _quickfix.Dictionary_has(*args)
    def merge(*args): return _quickfix.Dictionary_merge(*args)
    def begin(*args): return _quickfix.Dictionary_begin(*args)
    def end(*args): return _quickfix.Dictionary_end(*args)
Dictionary_swigregister = _quickfix.Dictionary_swigregister
Dictionary_swigregister(Dictionary)
__lt__ = _quickfix.__lt__
__eq__ = _quickfix.__eq__
__ne__ = _quickfix.__ne__

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
BEGINSTRING = cvar.BEGINSTRING
SENDERCOMPID = cvar.SENDERCOMPID
TARGETCOMPID = cvar.TARGETCOMPID
SESSION_QUALIFIER = cvar.SESSION_QUALIFIER
CONNECTION_TYPE = cvar.CONNECTION_TYPE
USE_DATA_DICTIONARY = cvar.USE_DATA_DICTIONARY
SEND_RESETSEQNUMFLAG = cvar.SEND_RESETSEQNUMFLAG
SEND_REDUNDANT_RESENDREQUESTS = cvar.SEND_REDUNDANT_RESENDREQUESTS
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
HTTP_ACCEPT_PORT = cvar.HTTP_ACCEPT_PORT
PERSIST_MESSAGES = cvar.PERSIST_MESSAGES

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
    __swig_getmethods__["getSessions"] = lambda x: _quickfix.Session_getSessions
    if _newclass:getSessions = staticmethod(_quickfix.Session_getSessions)
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
    def isInitiator(*args): return _quickfix.Session_isInitiator(*args)
    def isAcceptor(*args): return _quickfix.Session_isAcceptor(*args)
    def getSendRedundantResendRequests(*args): return _quickfix.Session_getSendRedundantResendRequests(*args)
    def setSendRedundantResendRequests(*args): return _quickfix.Session_setSendRedundantResendRequests(*args)
    def getCheckCompId(*args): return _quickfix.Session_getCheckCompId(*args)
    def setCheckCompId(*args): return _quickfix.Session_setCheckCompId(*args)
    def getCheckLatency(*args): return _quickfix.Session_getCheckLatency(*args)
    def setCheckLatency(*args): return _quickfix.Session_setCheckLatency(*args)
    def getMaxLatency(*args): return _quickfix.Session_getMaxLatency(*args)
    def setMaxLatency(*args): return _quickfix.Session_setMaxLatency(*args)
    def getLogonTimeout(*args): return _quickfix.Session_getLogonTimeout(*args)
    def setLogonTimeout(*args): return _quickfix.Session_setLogonTimeout(*args)
    def getLogoutTimeout(*args): return _quickfix.Session_getLogoutTimeout(*args)
    def setLogoutTimeout(*args): return _quickfix.Session_setLogoutTimeout(*args)
    def getResetOnLogon(*args): return _quickfix.Session_getResetOnLogon(*args)
    def setResetOnLogon(*args): return _quickfix.Session_setResetOnLogon(*args)
    def getResetOnLogout(*args): return _quickfix.Session_getResetOnLogout(*args)
    def setResetOnLogout(*args): return _quickfix.Session_setResetOnLogout(*args)
    def getResetOnDisconnect(*args): return _quickfix.Session_getResetOnDisconnect(*args)
    def setResetOnDisconnect(*args): return _quickfix.Session_setResetOnDisconnect(*args)
    def getRefreshOnLogon(*args): return _quickfix.Session_getRefreshOnLogon(*args)
    def setRefreshOnLogon(*args): return _quickfix.Session_setRefreshOnLogon(*args)
    def getMillisecondsInTimeStamp(*args): return _quickfix.Session_getMillisecondsInTimeStamp(*args)
    def setMillisecondsInTimeStamp(*args): return _quickfix.Session_setMillisecondsInTimeStamp(*args)
    def getPersistMessages(*args): return _quickfix.Session_getPersistMessages(*args)
    def setPersistMessages(*args): return _quickfix.Session_setPersistMessages(*args)
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
__lshift__ = _quickfix.__lshift__
Session_sendToTarget = _quickfix.Session_sendToTarget
Session_getSessions = _quickfix.Session_getSessions
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

class Initiator(Log):
    __swig_setmethods__ = {}
    for _s in [Log]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Initiator, name, value)
    __swig_getmethods__ = {}
    for _s in [Log]: __swig_getmethods__.update(_s.__swig_getmethods__)
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
    def onEvent(*args): return _quickfix.Initiator_onEvent(*args)
    def onIncoming(*args): return _quickfix.Initiator_onIncoming(*args)
    def onOutgoing(*args): return _quickfix.Initiator_onOutgoing(*args)
    def clear(*args): return _quickfix.Initiator_clear(*args)
Initiator_swigregister = _quickfix.Initiator_swigregister
Initiator_swigregister(Initiator)

class SocketInitiatorBase(Initiator):
    __swig_setmethods__ = {}
    for _s in [Initiator]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SocketInitiatorBase, name, value)
    __swig_getmethods__ = {}
    for _s in [Initiator]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SocketInitiatorBase, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SocketInitiatorBase(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SocketInitiatorBase
    __del__ = lambda self : None;
SocketInitiatorBase_swigregister = _quickfix.SocketInitiatorBase_swigregister
SocketInitiatorBase_swigregister(SocketInitiatorBase)

class Acceptor(Log):
    __swig_setmethods__ = {}
    for _s in [Log]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, Acceptor, name, value)
    __swig_getmethods__ = {}
    for _s in [Log]: __swig_getmethods__.update(_s.__swig_getmethods__)
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
    def onEvent(*args): return _quickfix.Acceptor_onEvent(*args)
    def onIncoming(*args): return _quickfix.Acceptor_onIncoming(*args)
    def onOutgoing(*args): return _quickfix.Acceptor_onOutgoing(*args)
    def clear(*args): return _quickfix.Acceptor_clear(*args)
Acceptor_swigregister = _quickfix.Acceptor_swigregister
Acceptor_swigregister(Acceptor)

class SocketAcceptorBase(Acceptor):
    __swig_setmethods__ = {}
    for _s in [Acceptor]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, SocketAcceptorBase, name, value)
    __swig_getmethods__ = {}
    for _s in [Acceptor]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, SocketAcceptorBase, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_SocketAcceptorBase(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_SocketAcceptorBase
    __del__ = lambda self : None;
SocketAcceptorBase_swigregister = _quickfix.SocketAcceptorBase_swigregister
SocketAcceptorBase_swigregister(SocketAcceptorBase)

class DataDictionary(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, DataDictionary, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, DataDictionary, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _quickfix.new_DataDictionary(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _quickfix.delete_DataDictionary
    __del__ = lambda self : None;
    def readFromURL(*args): return _quickfix.DataDictionary_readFromURL(*args)
    def readFromDocument(*args): return _quickfix.DataDictionary_readFromDocument(*args)
    def readFromStream(*args): return _quickfix.DataDictionary_readFromStream(*args)
    def getOrderedFields(*args): return _quickfix.DataDictionary_getOrderedFields(*args)
    def setVersion(*args): return _quickfix.DataDictionary_setVersion(*args)
    def getVersion(*args): return _quickfix.DataDictionary_getVersion(*args)
    def addField(*args): return _quickfix.DataDictionary_addField(*args)
    def addFieldName(*args): return _quickfix.DataDictionary_addFieldName(*args)
    def getFieldName(*args): return _quickfix.DataDictionary_getFieldName(*args)
    def getFieldTag(*args): return _quickfix.DataDictionary_getFieldTag(*args)
    def addValueName(*args): return _quickfix.DataDictionary_addValueName(*args)
    def getValueName(*args): return _quickfix.DataDictionary_getValueName(*args)
    def isField(*args): return _quickfix.DataDictionary_isField(*args)
    def addMsgType(*args): return _quickfix.DataDictionary_addMsgType(*args)
    def isMsgType(*args): return _quickfix.DataDictionary_isMsgType(*args)
    def addMsgField(*args): return _quickfix.DataDictionary_addMsgField(*args)
    def isMsgField(*args): return _quickfix.DataDictionary_isMsgField(*args)
    def addHeaderField(*args): return _quickfix.DataDictionary_addHeaderField(*args)
    def isHeaderField(*args): return _quickfix.DataDictionary_isHeaderField(*args)
    def addTrailerField(*args): return _quickfix.DataDictionary_addTrailerField(*args)
    def isTrailerField(*args): return _quickfix.DataDictionary_isTrailerField(*args)
    def addFieldType(*args): return _quickfix.DataDictionary_addFieldType(*args)
    def getFieldType(*args): return _quickfix.DataDictionary_getFieldType(*args)
    def addRequiredField(*args): return _quickfix.DataDictionary_addRequiredField(*args)
    def isRequiredField(*args): return _quickfix.DataDictionary_isRequiredField(*args)
    def addFieldValue(*args): return _quickfix.DataDictionary_addFieldValue(*args)
    def hasFieldValue(*args): return _quickfix.DataDictionary_hasFieldValue(*args)
    def isFieldValue(*args): return _quickfix.DataDictionary_isFieldValue(*args)
    def addGroup(*args): return _quickfix.DataDictionary_addGroup(*args)
    def isGroup(*args): return _quickfix.DataDictionary_isGroup(*args)
    def getGroup(*args): return _quickfix.DataDictionary_getGroup(*args)
    def isDataField(*args): return _quickfix.DataDictionary_isDataField(*args)
    def isMultipleValueStringField(*args): return _quickfix.DataDictionary_isMultipleValueStringField(*args)
    def checkFieldsOutOfOrder(*args): return _quickfix.DataDictionary_checkFieldsOutOfOrder(*args)
    def checkFieldsHaveValues(*args): return _quickfix.DataDictionary_checkFieldsHaveValues(*args)
    def checkUserDefinedFields(*args): return _quickfix.DataDictionary_checkUserDefinedFields(*args)
    def validate(*args): return _quickfix.DataDictionary_validate(*args)
DataDictionary_swigregister = _quickfix.DataDictionary_swigregister
DataDictionary_swigregister(DataDictionary)

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



import quickfix

class Account(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1)
		else:
			quickfix.StringField.__init__(self, 1, data)

class AdvId(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 2)
		else:
			quickfix.StringField.__init__(self, 2, data)

class AdvRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 3)
		else:
			quickfix.StringField.__init__(self, 3, data)

class AdvSide(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 4)
		else:
			quickfix.CharField.__init__(self, 4, data)

class AdvTransType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 5)
		else:
			quickfix.StringField.__init__(self, 5, data)

class AvgPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 6)
		else:
			quickfix.DoubleField.__init__(self, 6, data)

class BeginSeqNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 7)
		else:
			quickfix.IntField.__init__(self, 7, data)

class BeginString(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 8)
		else:
			quickfix.StringField.__init__(self, 8, data)

class BodyLength(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 9)
		else:
			quickfix.IntField.__init__(self, 9, data)

class CheckSum(quickfix.CheckSumField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CheckSumField.__init__(self, 10)
		else:
			quickfix.CheckSumField.__init__(self, 10, data)

class ClOrdID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 11)
		else:
			quickfix.StringField.__init__(self, 11, data)

class Commission(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 12)
		else:
			quickfix.DoubleField.__init__(self, 12, data)

class CommType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 13)
		else:
			quickfix.CharField.__init__(self, 13, data)

class CumQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 14)
		else:
			quickfix.DoubleField.__init__(self, 14, data)

class Currency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 15)
		else:
			quickfix.StringField.__init__(self, 15, data)

class EndSeqNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 16)
		else:
			quickfix.IntField.__init__(self, 16, data)

class ExecID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 17)
		else:
			quickfix.StringField.__init__(self, 17, data)

class ExecInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 18)
		else:
			quickfix.StringField.__init__(self, 18, data)

class ExecRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 19)
		else:
			quickfix.StringField.__init__(self, 19, data)

class HandlInst(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 21)
		else:
			quickfix.CharField.__init__(self, 21, data)

class SecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 22)
		else:
			quickfix.StringField.__init__(self, 22, data)

class IOIid(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 23)
		else:
			quickfix.StringField.__init__(self, 23, data)

class IOIQltyInd(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 25)
		else:
			quickfix.CharField.__init__(self, 25, data)

class IOIRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 26)
		else:
			quickfix.StringField.__init__(self, 26, data)

class IOIQty(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 27)
		else:
			quickfix.StringField.__init__(self, 27, data)

class IOITransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 28)
		else:
			quickfix.CharField.__init__(self, 28, data)

class LastCapacity(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 29)
		else:
			quickfix.CharField.__init__(self, 29, data)

class LastMkt(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 30)
		else:
			quickfix.StringField.__init__(self, 30, data)

class LastPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 31)
		else:
			quickfix.DoubleField.__init__(self, 31, data)

class LastQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 32)
		else:
			quickfix.DoubleField.__init__(self, 32, data)

class LinesOfText(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 33)
		else:
			quickfix.IntField.__init__(self, 33, data)

class MsgSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 34)
		else:
			quickfix.IntField.__init__(self, 34, data)

class MsgType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 35)
		else:
			quickfix.StringField.__init__(self, 35, data)

class NewSeqNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 36)
		else:
			quickfix.IntField.__init__(self, 36, data)

class OrderID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 37)
		else:
			quickfix.StringField.__init__(self, 37, data)

class OrderQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 38)
		else:
			quickfix.DoubleField.__init__(self, 38, data)

class OrdStatus(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 39)
		else:
			quickfix.CharField.__init__(self, 39, data)

class OrdType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 40)
		else:
			quickfix.CharField.__init__(self, 40, data)

class OrigClOrdID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 41)
		else:
			quickfix.StringField.__init__(self, 41, data)

class OrigTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 42)
		else:
			quickfix.UtcTimeStampField.__init__(self, 42, data)

class PossDupFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 43)
		else:
			quickfix.BoolField.__init__(self, 43, data)

class Price(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 44)
		else:
			quickfix.DoubleField.__init__(self, 44, data)

class RefSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 45)
		else:
			quickfix.IntField.__init__(self, 45, data)

class SecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 48)
		else:
			quickfix.StringField.__init__(self, 48, data)

class SenderCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 49)
		else:
			quickfix.StringField.__init__(self, 49, data)

class SenderSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 50)
		else:
			quickfix.StringField.__init__(self, 50, data)

class SendingTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 52)
		else:
			quickfix.UtcTimeStampField.__init__(self, 52, data)

class Quantity(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 53)
		else:
			quickfix.DoubleField.__init__(self, 53, data)

class Side(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 54)
		else:
			quickfix.CharField.__init__(self, 54, data)

class Symbol(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 55)
		else:
			quickfix.StringField.__init__(self, 55, data)

class TargetCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 56)
		else:
			quickfix.StringField.__init__(self, 56, data)

class TargetSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 57)
		else:
			quickfix.StringField.__init__(self, 57, data)

class Text(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 58)
		else:
			quickfix.StringField.__init__(self, 58, data)

class TimeInForce(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 59)
		else:
			quickfix.CharField.__init__(self, 59, data)

class TransactTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 60)
		else:
			quickfix.UtcTimeStampField.__init__(self, 60, data)

class Urgency(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 61)
		else:
			quickfix.CharField.__init__(self, 61, data)

class ValidUntilTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 62)
		else:
			quickfix.UtcTimeStampField.__init__(self, 62, data)

class SettlType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 63)
		else:
			quickfix.CharField.__init__(self, 63, data)

class SettlDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 64)
		else:
			quickfix.StringField.__init__(self, 64, data)

class SymbolSfx(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 65)
		else:
			quickfix.StringField.__init__(self, 65, data)

class ListID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 66)
		else:
			quickfix.StringField.__init__(self, 66, data)

class ListSeqNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 67)
		else:
			quickfix.IntField.__init__(self, 67, data)

class TotNoOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 68)
		else:
			quickfix.IntField.__init__(self, 68, data)

class ListExecInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 69)
		else:
			quickfix.StringField.__init__(self, 69, data)

class AllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 70)
		else:
			quickfix.StringField.__init__(self, 70, data)

class AllocTransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 71)
		else:
			quickfix.CharField.__init__(self, 71, data)

class RefAllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 72)
		else:
			quickfix.StringField.__init__(self, 72, data)

class NoOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 73)
		else:
			quickfix.IntField.__init__(self, 73, data)

class AvgPxPrecision(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 74)
		else:
			quickfix.IntField.__init__(self, 74, data)

class TradeDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 75)
		else:
			quickfix.StringField.__init__(self, 75, data)

class PositionEffect(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 77)
		else:
			quickfix.CharField.__init__(self, 77, data)

class NoAllocs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 78)
		else:
			quickfix.IntField.__init__(self, 78, data)

class AllocAccount(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 79)
		else:
			quickfix.StringField.__init__(self, 79, data)

class AllocQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 80)
		else:
			quickfix.DoubleField.__init__(self, 80, data)

class ProcessCode(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 81)
		else:
			quickfix.CharField.__init__(self, 81, data)

class NoRpts(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 82)
		else:
			quickfix.IntField.__init__(self, 82, data)

class RptSeq(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 83)
		else:
			quickfix.IntField.__init__(self, 83, data)

class CxlQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 84)
		else:
			quickfix.DoubleField.__init__(self, 84, data)

class NoDlvyInst(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 85)
		else:
			quickfix.IntField.__init__(self, 85, data)

class AllocStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 87)
		else:
			quickfix.IntField.__init__(self, 87, data)

class AllocRejCode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 88)
		else:
			quickfix.IntField.__init__(self, 88, data)

class Signature(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 89)
		else:
			quickfix.StringField.__init__(self, 89, data)

class SecureDataLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 90)
		else:
			quickfix.IntField.__init__(self, 90, data)

class SecureData(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 91)
		else:
			quickfix.StringField.__init__(self, 91, data)

class SignatureLength(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 93)
		else:
			quickfix.IntField.__init__(self, 93, data)

class EmailType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 94)
		else:
			quickfix.CharField.__init__(self, 94, data)

class RawDataLength(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 95)
		else:
			quickfix.IntField.__init__(self, 95, data)

class RawData(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 96)
		else:
			quickfix.StringField.__init__(self, 96, data)

class PossResend(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 97)
		else:
			quickfix.BoolField.__init__(self, 97, data)

class EncryptMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 98)
		else:
			quickfix.IntField.__init__(self, 98, data)

class StopPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 99)
		else:
			quickfix.DoubleField.__init__(self, 99, data)

class ExDestination(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 100)
		else:
			quickfix.StringField.__init__(self, 100, data)

class CxlRejReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 102)
		else:
			quickfix.IntField.__init__(self, 102, data)

class OrdRejReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 103)
		else:
			quickfix.IntField.__init__(self, 103, data)

class IOIQualifier(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 104)
		else:
			quickfix.CharField.__init__(self, 104, data)

class WaveNo(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 105)
		else:
			quickfix.StringField.__init__(self, 105, data)

class Issuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 106)
		else:
			quickfix.StringField.__init__(self, 106, data)

class SecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 107)
		else:
			quickfix.StringField.__init__(self, 107, data)

class HeartBtInt(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 108)
		else:
			quickfix.IntField.__init__(self, 108, data)

class MinQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 110)
		else:
			quickfix.DoubleField.__init__(self, 110, data)

class MaxFloor(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 111)
		else:
			quickfix.DoubleField.__init__(self, 111, data)

class TestReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 112)
		else:
			quickfix.StringField.__init__(self, 112, data)

class ReportToExch(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 113)
		else:
			quickfix.BoolField.__init__(self, 113, data)

class LocateReqd(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 114)
		else:
			quickfix.BoolField.__init__(self, 114, data)

class OnBehalfOfCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 115)
		else:
			quickfix.StringField.__init__(self, 115, data)

class OnBehalfOfSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 116)
		else:
			quickfix.StringField.__init__(self, 116, data)

class QuoteID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 117)
		else:
			quickfix.StringField.__init__(self, 117, data)

class NetMoney(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 118)
		else:
			quickfix.DoubleField.__init__(self, 118, data)

class SettlCurrAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 119)
		else:
			quickfix.DoubleField.__init__(self, 119, data)

class SettlCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 120)
		else:
			quickfix.StringField.__init__(self, 120, data)

class ForexReq(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 121)
		else:
			quickfix.BoolField.__init__(self, 121, data)

class OrigSendingTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 122)
		else:
			quickfix.UtcTimeStampField.__init__(self, 122, data)

class GapFillFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 123)
		else:
			quickfix.BoolField.__init__(self, 123, data)

class NoExecs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 124)
		else:
			quickfix.IntField.__init__(self, 124, data)

class ExpireTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 126)
		else:
			quickfix.UtcTimeStampField.__init__(self, 126, data)

class DKReason(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 127)
		else:
			quickfix.CharField.__init__(self, 127, data)

class DeliverToCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 128)
		else:
			quickfix.StringField.__init__(self, 128, data)

class DeliverToSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 129)
		else:
			quickfix.StringField.__init__(self, 129, data)

class IOINaturalFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 130)
		else:
			quickfix.BoolField.__init__(self, 130, data)

class QuoteReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 131)
		else:
			quickfix.StringField.__init__(self, 131, data)

class BidPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 132)
		else:
			quickfix.DoubleField.__init__(self, 132, data)

class OfferPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 133)
		else:
			quickfix.DoubleField.__init__(self, 133, data)

class BidSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 134)
		else:
			quickfix.DoubleField.__init__(self, 134, data)

class OfferSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 135)
		else:
			quickfix.DoubleField.__init__(self, 135, data)

class NoMiscFees(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 136)
		else:
			quickfix.IntField.__init__(self, 136, data)

class MiscFeeAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 137)
		else:
			quickfix.DoubleField.__init__(self, 137, data)

class MiscFeeCurr(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 138)
		else:
			quickfix.StringField.__init__(self, 138, data)

class MiscFeeType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 139)
		else:
			quickfix.CharField.__init__(self, 139, data)

class PrevClosePx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 140)
		else:
			quickfix.DoubleField.__init__(self, 140, data)

class ResetSeqNumFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 141)
		else:
			quickfix.BoolField.__init__(self, 141, data)

class SenderLocationID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 142)
		else:
			quickfix.StringField.__init__(self, 142, data)

class TargetLocationID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 143)
		else:
			quickfix.StringField.__init__(self, 143, data)

class OnBehalfOfLocationID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 144)
		else:
			quickfix.StringField.__init__(self, 144, data)

class DeliverToLocationID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 145)
		else:
			quickfix.StringField.__init__(self, 145, data)

class NoRelatedSym(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 146)
		else:
			quickfix.IntField.__init__(self, 146, data)

class Subject(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 147)
		else:
			quickfix.StringField.__init__(self, 147, data)

class Headline(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 148)
		else:
			quickfix.StringField.__init__(self, 148, data)

class URLLink(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 149)
		else:
			quickfix.StringField.__init__(self, 149, data)

class ExecType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 150)
		else:
			quickfix.CharField.__init__(self, 150, data)

class LeavesQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 151)
		else:
			quickfix.DoubleField.__init__(self, 151, data)

class CashOrderQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 152)
		else:
			quickfix.DoubleField.__init__(self, 152, data)

class AllocAvgPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 153)
		else:
			quickfix.DoubleField.__init__(self, 153, data)

class AllocNetMoney(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 154)
		else:
			quickfix.DoubleField.__init__(self, 154, data)

class SettlCurrFxRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 155)
		else:
			quickfix.DoubleField.__init__(self, 155, data)

class SettlCurrFxRateCalc(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 156)
		else:
			quickfix.CharField.__init__(self, 156, data)

class NumDaysInterest(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 157)
		else:
			quickfix.IntField.__init__(self, 157, data)

class AccruedInterestRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 158)
		else:
			quickfix.DoubleField.__init__(self, 158, data)

class AccruedInterestAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 159)
		else:
			quickfix.DoubleField.__init__(self, 159, data)

class SettlInstMode(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 160)
		else:
			quickfix.CharField.__init__(self, 160, data)

class AllocText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 161)
		else:
			quickfix.StringField.__init__(self, 161, data)

class SettlInstID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 162)
		else:
			quickfix.StringField.__init__(self, 162, data)

class SettlInstTransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 163)
		else:
			quickfix.CharField.__init__(self, 163, data)

class EmailThreadID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 164)
		else:
			quickfix.StringField.__init__(self, 164, data)

class SettlInstSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 165)
		else:
			quickfix.CharField.__init__(self, 165, data)

class SecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 167)
		else:
			quickfix.StringField.__init__(self, 167, data)

class EffectiveTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 168)
		else:
			quickfix.UtcTimeStampField.__init__(self, 168, data)

class StandInstDbType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 169)
		else:
			quickfix.IntField.__init__(self, 169, data)

class StandInstDbName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 170)
		else:
			quickfix.StringField.__init__(self, 170, data)

class StandInstDbID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 171)
		else:
			quickfix.StringField.__init__(self, 171, data)

class SettlDeliveryType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 172)
		else:
			quickfix.IntField.__init__(self, 172, data)

class BidSpotRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 188)
		else:
			quickfix.DoubleField.__init__(self, 188, data)

class BidForwardPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 189)
		else:
			quickfix.DoubleField.__init__(self, 189, data)

class OfferSpotRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 190)
		else:
			quickfix.DoubleField.__init__(self, 190, data)

class OfferForwardPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 191)
		else:
			quickfix.DoubleField.__init__(self, 191, data)

class OrderQty2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 192)
		else:
			quickfix.DoubleField.__init__(self, 192, data)

class SettlDate2(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 193)
		else:
			quickfix.StringField.__init__(self, 193, data)

class LastSpotRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 194)
		else:
			quickfix.DoubleField.__init__(self, 194, data)

class LastForwardPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 195)
		else:
			quickfix.DoubleField.__init__(self, 195, data)

class AllocLinkID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 196)
		else:
			quickfix.StringField.__init__(self, 196, data)

class AllocLinkType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 197)
		else:
			quickfix.IntField.__init__(self, 197, data)

class SecondaryOrderID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 198)
		else:
			quickfix.StringField.__init__(self, 198, data)

class NoIOIQualifiers(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 199)
		else:
			quickfix.IntField.__init__(self, 199, data)

class MaturityMonthYear(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 200)
		else:
			quickfix.StringField.__init__(self, 200, data)

class StrikePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 202)
		else:
			quickfix.DoubleField.__init__(self, 202, data)

class CoveredOrUncovered(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 203)
		else:
			quickfix.IntField.__init__(self, 203, data)

class OptAttribute(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 206)
		else:
			quickfix.CharField.__init__(self, 206, data)

class SecurityExchange(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 207)
		else:
			quickfix.StringField.__init__(self, 207, data)

class NotifyBrokerOfCredit(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 208)
		else:
			quickfix.BoolField.__init__(self, 208, data)

class AllocHandlInst(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 209)
		else:
			quickfix.IntField.__init__(self, 209, data)

class MaxShow(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 210)
		else:
			quickfix.DoubleField.__init__(self, 210, data)

class PegOffsetValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 211)
		else:
			quickfix.DoubleField.__init__(self, 211, data)

class XmlDataLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 212)
		else:
			quickfix.IntField.__init__(self, 212, data)

class XmlData(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 213)
		else:
			quickfix.StringField.__init__(self, 213, data)

class SettlInstRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 214)
		else:
			quickfix.StringField.__init__(self, 214, data)

class NoRoutingIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 215)
		else:
			quickfix.IntField.__init__(self, 215, data)

class RoutingType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 216)
		else:
			quickfix.IntField.__init__(self, 216, data)

class RoutingID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 217)
		else:
			quickfix.StringField.__init__(self, 217, data)

class Spread(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 218)
		else:
			quickfix.DoubleField.__init__(self, 218, data)

class BenchmarkCurveCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 220)
		else:
			quickfix.StringField.__init__(self, 220, data)

class BenchmarkCurveName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 221)
		else:
			quickfix.StringField.__init__(self, 221, data)

class BenchmarkCurvePoint(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 222)
		else:
			quickfix.StringField.__init__(self, 222, data)

class CouponRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 223)
		else:
			quickfix.DoubleField.__init__(self, 223, data)

class CouponPaymentDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 224)
		else:
			quickfix.StringField.__init__(self, 224, data)

class IssueDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 225)
		else:
			quickfix.StringField.__init__(self, 225, data)

class RepurchaseTerm(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 226)
		else:
			quickfix.IntField.__init__(self, 226, data)

class RepurchaseRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 227)
		else:
			quickfix.DoubleField.__init__(self, 227, data)

class Factor(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 228)
		else:
			quickfix.DoubleField.__init__(self, 228, data)

class TradeOriginationDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 229)
		else:
			quickfix.StringField.__init__(self, 229, data)

class ExDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 230)
		else:
			quickfix.StringField.__init__(self, 230, data)

class ContractMultiplier(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 231)
		else:
			quickfix.DoubleField.__init__(self, 231, data)

class NoStipulations(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 232)
		else:
			quickfix.IntField.__init__(self, 232, data)

class StipulationType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 233)
		else:
			quickfix.StringField.__init__(self, 233, data)

class StipulationValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 234)
		else:
			quickfix.StringField.__init__(self, 234, data)

class YieldType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 235)
		else:
			quickfix.StringField.__init__(self, 235, data)

class Yield(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 236)
		else:
			quickfix.DoubleField.__init__(self, 236, data)

class TotalTakedown(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 237)
		else:
			quickfix.DoubleField.__init__(self, 237, data)

class Concession(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 238)
		else:
			quickfix.DoubleField.__init__(self, 238, data)

class RepoCollateralSecurityType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 239)
		else:
			quickfix.IntField.__init__(self, 239, data)

class RedemptionDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 240)
		else:
			quickfix.StringField.__init__(self, 240, data)

class UnderlyingCouponPaymentDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 241)
		else:
			quickfix.StringField.__init__(self, 241, data)

class UnderlyingIssueDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 242)
		else:
			quickfix.StringField.__init__(self, 242, data)

class UnderlyingRepoCollateralSecurityType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 243)
		else:
			quickfix.IntField.__init__(self, 243, data)

class UnderlyingRepurchaseTerm(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 244)
		else:
			quickfix.IntField.__init__(self, 244, data)

class UnderlyingRepurchaseRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 245)
		else:
			quickfix.DoubleField.__init__(self, 245, data)

class UnderlyingFactor(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 246)
		else:
			quickfix.DoubleField.__init__(self, 246, data)

class UnderlyingRedemptionDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 247)
		else:
			quickfix.StringField.__init__(self, 247, data)

class LegCouponPaymentDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 248)
		else:
			quickfix.StringField.__init__(self, 248, data)

class LegIssueDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 249)
		else:
			quickfix.StringField.__init__(self, 249, data)

class LegRepoCollateralSecurityType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 250)
		else:
			quickfix.IntField.__init__(self, 250, data)

class LegRepurchaseTerm(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 251)
		else:
			quickfix.IntField.__init__(self, 251, data)

class LegRepurchaseRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 252)
		else:
			quickfix.DoubleField.__init__(self, 252, data)

class LegFactor(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 253)
		else:
			quickfix.DoubleField.__init__(self, 253, data)

class LegRedemptionDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 254)
		else:
			quickfix.StringField.__init__(self, 254, data)

class CreditRating(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 255)
		else:
			quickfix.StringField.__init__(self, 255, data)

class UnderlyingCreditRating(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 256)
		else:
			quickfix.StringField.__init__(self, 256, data)

class LegCreditRating(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 257)
		else:
			quickfix.StringField.__init__(self, 257, data)

class TradedFlatSwitch(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 258)
		else:
			quickfix.BoolField.__init__(self, 258, data)

class BasisFeatureDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 259)
		else:
			quickfix.StringField.__init__(self, 259, data)

class BasisFeaturePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 260)
		else:
			quickfix.DoubleField.__init__(self, 260, data)

class MDReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 262)
		else:
			quickfix.StringField.__init__(self, 262, data)

class SubscriptionRequestType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 263)
		else:
			quickfix.CharField.__init__(self, 263, data)

class MarketDepth(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 264)
		else:
			quickfix.IntField.__init__(self, 264, data)

class MDUpdateType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 265)
		else:
			quickfix.IntField.__init__(self, 265, data)

class AggregatedBook(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 266)
		else:
			quickfix.BoolField.__init__(self, 266, data)

class NoMDEntryTypes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 267)
		else:
			quickfix.IntField.__init__(self, 267, data)

class NoMDEntries(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 268)
		else:
			quickfix.IntField.__init__(self, 268, data)

class MDEntryType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 269)
		else:
			quickfix.CharField.__init__(self, 269, data)

class MDEntryPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 270)
		else:
			quickfix.DoubleField.__init__(self, 270, data)

class MDEntrySize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 271)
		else:
			quickfix.DoubleField.__init__(self, 271, data)

class MDEntryDate(quickfix.UtcDateField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcDateField.__init__(self, 272)
		else:
			quickfix.UtcDateField.__init__(self, 272, data)

class MDEntryTime(quickfix.UtcTimeOnlyField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeOnlyField.__init__(self, 273)
		else:
			quickfix.UtcTimeOnlyField.__init__(self, 273, data)

class TickDirection(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 274)
		else:
			quickfix.CharField.__init__(self, 274, data)

class MDMkt(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 275)
		else:
			quickfix.StringField.__init__(self, 275, data)

class QuoteCondition(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 276)
		else:
			quickfix.StringField.__init__(self, 276, data)

class TradeCondition(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 277)
		else:
			quickfix.StringField.__init__(self, 277, data)

class MDEntryID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 278)
		else:
			quickfix.StringField.__init__(self, 278, data)

class MDUpdateAction(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 279)
		else:
			quickfix.CharField.__init__(self, 279, data)

class MDEntryRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 280)
		else:
			quickfix.StringField.__init__(self, 280, data)

class MDReqRejReason(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 281)
		else:
			quickfix.CharField.__init__(self, 281, data)

class MDEntryOriginator(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 282)
		else:
			quickfix.StringField.__init__(self, 282, data)

class LocationID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 283)
		else:
			quickfix.StringField.__init__(self, 283, data)

class DeskID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 284)
		else:
			quickfix.StringField.__init__(self, 284, data)

class DeleteReason(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 285)
		else:
			quickfix.CharField.__init__(self, 285, data)

class OpenCloseSettlFlag(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 286)
		else:
			quickfix.StringField.__init__(self, 286, data)

class SellerDays(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 287)
		else:
			quickfix.IntField.__init__(self, 287, data)

class MDEntryBuyer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 288)
		else:
			quickfix.StringField.__init__(self, 288, data)

class MDEntrySeller(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 289)
		else:
			quickfix.StringField.__init__(self, 289, data)

class MDEntryPositionNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 290)
		else:
			quickfix.IntField.__init__(self, 290, data)

class FinancialStatus(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 291)
		else:
			quickfix.StringField.__init__(self, 291, data)

class CorporateAction(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 292)
		else:
			quickfix.StringField.__init__(self, 292, data)

class DefBidSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 293)
		else:
			quickfix.DoubleField.__init__(self, 293, data)

class DefOfferSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 294)
		else:
			quickfix.DoubleField.__init__(self, 294, data)

class NoQuoteEntries(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 295)
		else:
			quickfix.IntField.__init__(self, 295, data)

class NoQuoteSets(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 296)
		else:
			quickfix.IntField.__init__(self, 296, data)

class QuoteStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 297)
		else:
			quickfix.IntField.__init__(self, 297, data)

class QuoteCancelType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 298)
		else:
			quickfix.IntField.__init__(self, 298, data)

class QuoteEntryID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 299)
		else:
			quickfix.StringField.__init__(self, 299, data)

class QuoteRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 300)
		else:
			quickfix.IntField.__init__(self, 300, data)

class QuoteResponseLevel(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 301)
		else:
			quickfix.IntField.__init__(self, 301, data)

class QuoteSetID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 302)
		else:
			quickfix.StringField.__init__(self, 302, data)

class QuoteRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 303)
		else:
			quickfix.IntField.__init__(self, 303, data)

class TotNoQuoteEntries(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 304)
		else:
			quickfix.IntField.__init__(self, 304, data)

class UnderlyingSecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 305)
		else:
			quickfix.StringField.__init__(self, 305, data)

class UnderlyingIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 306)
		else:
			quickfix.StringField.__init__(self, 306, data)

class UnderlyingSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 307)
		else:
			quickfix.StringField.__init__(self, 307, data)

class UnderlyingSecurityExchange(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 308)
		else:
			quickfix.StringField.__init__(self, 308, data)

class UnderlyingSecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 309)
		else:
			quickfix.StringField.__init__(self, 309, data)

class UnderlyingSecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 310)
		else:
			quickfix.StringField.__init__(self, 310, data)

class UnderlyingSymbol(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 311)
		else:
			quickfix.StringField.__init__(self, 311, data)

class UnderlyingSymbolSfx(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 312)
		else:
			quickfix.StringField.__init__(self, 312, data)

class UnderlyingMaturityMonthYear(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 313)
		else:
			quickfix.StringField.__init__(self, 313, data)

class UnderlyingStrikePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 316)
		else:
			quickfix.DoubleField.__init__(self, 316, data)

class UnderlyingOptAttribute(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 317)
		else:
			quickfix.CharField.__init__(self, 317, data)

class UnderlyingCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 318)
		else:
			quickfix.StringField.__init__(self, 318, data)

class SecurityReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 320)
		else:
			quickfix.StringField.__init__(self, 320, data)

class SecurityRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 321)
		else:
			quickfix.IntField.__init__(self, 321, data)

class SecurityResponseID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 322)
		else:
			quickfix.StringField.__init__(self, 322, data)

class SecurityResponseType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 323)
		else:
			quickfix.IntField.__init__(self, 323, data)

class SecurityStatusReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 324)
		else:
			quickfix.StringField.__init__(self, 324, data)

class UnsolicitedIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 325)
		else:
			quickfix.BoolField.__init__(self, 325, data)

class SecurityTradingStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 326)
		else:
			quickfix.IntField.__init__(self, 326, data)

class HaltReason(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 327)
		else:
			quickfix.CharField.__init__(self, 327, data)

class InViewOfCommon(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 328)
		else:
			quickfix.BoolField.__init__(self, 328, data)

class DueToRelated(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 329)
		else:
			quickfix.BoolField.__init__(self, 329, data)

class BuyVolume(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 330)
		else:
			quickfix.DoubleField.__init__(self, 330, data)

class SellVolume(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 331)
		else:
			quickfix.DoubleField.__init__(self, 331, data)

class HighPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 332)
		else:
			quickfix.DoubleField.__init__(self, 332, data)

class LowPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 333)
		else:
			quickfix.DoubleField.__init__(self, 333, data)

class Adjustment(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 334)
		else:
			quickfix.IntField.__init__(self, 334, data)

class TradSesReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 335)
		else:
			quickfix.StringField.__init__(self, 335, data)

class TradingSessionID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 336)
		else:
			quickfix.StringField.__init__(self, 336, data)

class ContraTrader(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 337)
		else:
			quickfix.StringField.__init__(self, 337, data)

class TradSesMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 338)
		else:
			quickfix.IntField.__init__(self, 338, data)

class TradSesMode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 339)
		else:
			quickfix.IntField.__init__(self, 339, data)

class TradSesStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 340)
		else:
			quickfix.IntField.__init__(self, 340, data)

class TradSesStartTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 341)
		else:
			quickfix.UtcTimeStampField.__init__(self, 341, data)

class TradSesOpenTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 342)
		else:
			quickfix.UtcTimeStampField.__init__(self, 342, data)

class TradSesPreCloseTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 343)
		else:
			quickfix.UtcTimeStampField.__init__(self, 343, data)

class TradSesCloseTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 344)
		else:
			quickfix.UtcTimeStampField.__init__(self, 344, data)

class TradSesEndTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 345)
		else:
			quickfix.UtcTimeStampField.__init__(self, 345, data)

class NumberOfOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 346)
		else:
			quickfix.IntField.__init__(self, 346, data)

class MessageEncoding(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 347)
		else:
			quickfix.StringField.__init__(self, 347, data)

class EncodedIssuerLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 348)
		else:
			quickfix.IntField.__init__(self, 348, data)

class EncodedIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 349)
		else:
			quickfix.StringField.__init__(self, 349, data)

class EncodedSecurityDescLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 350)
		else:
			quickfix.IntField.__init__(self, 350, data)

class EncodedSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 351)
		else:
			quickfix.StringField.__init__(self, 351, data)

class EncodedListExecInstLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 352)
		else:
			quickfix.IntField.__init__(self, 352, data)

class EncodedListExecInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 353)
		else:
			quickfix.StringField.__init__(self, 353, data)

class EncodedTextLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 354)
		else:
			quickfix.IntField.__init__(self, 354, data)

class EncodedText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 355)
		else:
			quickfix.StringField.__init__(self, 355, data)

class EncodedSubjectLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 356)
		else:
			quickfix.IntField.__init__(self, 356, data)

class EncodedSubject(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 357)
		else:
			quickfix.StringField.__init__(self, 357, data)

class EncodedHeadlineLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 358)
		else:
			quickfix.IntField.__init__(self, 358, data)

class EncodedHeadline(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 359)
		else:
			quickfix.StringField.__init__(self, 359, data)

class EncodedAllocTextLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 360)
		else:
			quickfix.IntField.__init__(self, 360, data)

class EncodedAllocText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 361)
		else:
			quickfix.StringField.__init__(self, 361, data)

class EncodedUnderlyingIssuerLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 362)
		else:
			quickfix.IntField.__init__(self, 362, data)

class EncodedUnderlyingIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 363)
		else:
			quickfix.StringField.__init__(self, 363, data)

class EncodedUnderlyingSecurityDescLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 364)
		else:
			quickfix.IntField.__init__(self, 364, data)

class EncodedUnderlyingSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 365)
		else:
			quickfix.StringField.__init__(self, 365, data)

class AllocPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 366)
		else:
			quickfix.DoubleField.__init__(self, 366, data)

class QuoteSetValidUntilTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 367)
		else:
			quickfix.UtcTimeStampField.__init__(self, 367, data)

class QuoteEntryRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 368)
		else:
			quickfix.IntField.__init__(self, 368, data)

class LastMsgSeqNumProcessed(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 369)
		else:
			quickfix.IntField.__init__(self, 369, data)

class RefTagID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 371)
		else:
			quickfix.IntField.__init__(self, 371, data)

class RefMsgType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 372)
		else:
			quickfix.StringField.__init__(self, 372, data)

class SessionRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 373)
		else:
			quickfix.IntField.__init__(self, 373, data)

class BidRequestTransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 374)
		else:
			quickfix.CharField.__init__(self, 374, data)

class ContraBroker(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 375)
		else:
			quickfix.StringField.__init__(self, 375, data)

class ComplianceID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 376)
		else:
			quickfix.StringField.__init__(self, 376, data)

class SolicitedFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 377)
		else:
			quickfix.BoolField.__init__(self, 377, data)

class ExecRestatementReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 378)
		else:
			quickfix.IntField.__init__(self, 378, data)

class BusinessRejectRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 379)
		else:
			quickfix.StringField.__init__(self, 379, data)

class BusinessRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 380)
		else:
			quickfix.IntField.__init__(self, 380, data)

class GrossTradeAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 381)
		else:
			quickfix.DoubleField.__init__(self, 381, data)

class NoContraBrokers(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 382)
		else:
			quickfix.IntField.__init__(self, 382, data)

class MaxMessageSize(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 383)
		else:
			quickfix.IntField.__init__(self, 383, data)

class NoMsgTypes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 384)
		else:
			quickfix.IntField.__init__(self, 384, data)

class MsgDirection(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 385)
		else:
			quickfix.CharField.__init__(self, 385, data)

class NoTradingSessions(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 386)
		else:
			quickfix.IntField.__init__(self, 386, data)

class TotalVolumeTraded(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 387)
		else:
			quickfix.DoubleField.__init__(self, 387, data)

class DiscretionInst(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 388)
		else:
			quickfix.CharField.__init__(self, 388, data)

class DiscretionOffsetValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 389)
		else:
			quickfix.DoubleField.__init__(self, 389, data)

class BidID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 390)
		else:
			quickfix.StringField.__init__(self, 390, data)

class ClientBidID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 391)
		else:
			quickfix.StringField.__init__(self, 391, data)

class ListName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 392)
		else:
			quickfix.StringField.__init__(self, 392, data)

class TotNoRelatedSym(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 393)
		else:
			quickfix.IntField.__init__(self, 393, data)

class BidType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 394)
		else:
			quickfix.IntField.__init__(self, 394, data)

class NumTickets(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 395)
		else:
			quickfix.IntField.__init__(self, 395, data)

class SideValue1(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 396)
		else:
			quickfix.DoubleField.__init__(self, 396, data)

class SideValue2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 397)
		else:
			quickfix.DoubleField.__init__(self, 397, data)

class NoBidDescriptors(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 398)
		else:
			quickfix.IntField.__init__(self, 398, data)

class BidDescriptorType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 399)
		else:
			quickfix.IntField.__init__(self, 399, data)

class BidDescriptor(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 400)
		else:
			quickfix.StringField.__init__(self, 400, data)

class SideValueInd(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 401)
		else:
			quickfix.IntField.__init__(self, 401, data)

class LiquidityPctLow(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 402)
		else:
			quickfix.DoubleField.__init__(self, 402, data)

class LiquidityPctHigh(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 403)
		else:
			quickfix.DoubleField.__init__(self, 403, data)

class LiquidityValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 404)
		else:
			quickfix.DoubleField.__init__(self, 404, data)

class EFPTrackingError(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 405)
		else:
			quickfix.DoubleField.__init__(self, 405, data)

class FairValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 406)
		else:
			quickfix.DoubleField.__init__(self, 406, data)

class OutsideIndexPct(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 407)
		else:
			quickfix.DoubleField.__init__(self, 407, data)

class ValueOfFutures(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 408)
		else:
			quickfix.DoubleField.__init__(self, 408, data)

class LiquidityIndType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 409)
		else:
			quickfix.IntField.__init__(self, 409, data)

class WtAverageLiquidity(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 410)
		else:
			quickfix.DoubleField.__init__(self, 410, data)

class ExchangeForPhysical(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 411)
		else:
			quickfix.BoolField.__init__(self, 411, data)

class OutMainCntryUIndex(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 412)
		else:
			quickfix.DoubleField.__init__(self, 412, data)

class CrossPercent(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 413)
		else:
			quickfix.DoubleField.__init__(self, 413, data)

class ProgRptReqs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 414)
		else:
			quickfix.IntField.__init__(self, 414, data)

class ProgPeriodInterval(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 415)
		else:
			quickfix.IntField.__init__(self, 415, data)

class IncTaxInd(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 416)
		else:
			quickfix.IntField.__init__(self, 416, data)

class NumBidders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 417)
		else:
			quickfix.IntField.__init__(self, 417, data)

class BidTradeType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 418)
		else:
			quickfix.CharField.__init__(self, 418, data)

class BasisPxType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 419)
		else:
			quickfix.CharField.__init__(self, 419, data)

class NoBidComponents(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 420)
		else:
			quickfix.IntField.__init__(self, 420, data)

class Country(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 421)
		else:
			quickfix.StringField.__init__(self, 421, data)

class TotNoStrikes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 422)
		else:
			quickfix.IntField.__init__(self, 422, data)

class PriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 423)
		else:
			quickfix.IntField.__init__(self, 423, data)

class DayOrderQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 424)
		else:
			quickfix.DoubleField.__init__(self, 424, data)

class DayCumQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 425)
		else:
			quickfix.DoubleField.__init__(self, 425, data)

class DayAvgPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 426)
		else:
			quickfix.DoubleField.__init__(self, 426, data)

class GTBookingInst(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 427)
		else:
			quickfix.IntField.__init__(self, 427, data)

class NoStrikes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 428)
		else:
			quickfix.IntField.__init__(self, 428, data)

class ListStatusType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 429)
		else:
			quickfix.IntField.__init__(self, 429, data)

class NetGrossInd(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 430)
		else:
			quickfix.IntField.__init__(self, 430, data)

class ListOrderStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 431)
		else:
			quickfix.IntField.__init__(self, 431, data)

class ExpireDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 432)
		else:
			quickfix.StringField.__init__(self, 432, data)

class ListExecInstType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 433)
		else:
			quickfix.CharField.__init__(self, 433, data)

class CxlRejResponseTo(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 434)
		else:
			quickfix.CharField.__init__(self, 434, data)

class UnderlyingCouponRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 435)
		else:
			quickfix.DoubleField.__init__(self, 435, data)

class UnderlyingContractMultiplier(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 436)
		else:
			quickfix.DoubleField.__init__(self, 436, data)

class ContraTradeQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 437)
		else:
			quickfix.DoubleField.__init__(self, 437, data)

class ContraTradeTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 438)
		else:
			quickfix.UtcTimeStampField.__init__(self, 438, data)

class LiquidityNumSecurities(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 441)
		else:
			quickfix.IntField.__init__(self, 441, data)

class MultiLegReportingType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 442)
		else:
			quickfix.CharField.__init__(self, 442, data)

class StrikeTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 443)
		else:
			quickfix.UtcTimeStampField.__init__(self, 443, data)

class ListStatusText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 444)
		else:
			quickfix.StringField.__init__(self, 444, data)

class EncodedListStatusTextLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 445)
		else:
			quickfix.IntField.__init__(self, 445, data)

class EncodedListStatusText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 446)
		else:
			quickfix.StringField.__init__(self, 446, data)

class PartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 447)
		else:
			quickfix.CharField.__init__(self, 447, data)

class PartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 448)
		else:
			quickfix.StringField.__init__(self, 448, data)

class NetChgPrevDay(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 451)
		else:
			quickfix.DoubleField.__init__(self, 451, data)

class PartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 452)
		else:
			quickfix.IntField.__init__(self, 452, data)

class NoPartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 453)
		else:
			quickfix.IntField.__init__(self, 453, data)

class NoSecurityAltID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 454)
		else:
			quickfix.IntField.__init__(self, 454, data)

class SecurityAltID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 455)
		else:
			quickfix.StringField.__init__(self, 455, data)

class SecurityAltIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 456)
		else:
			quickfix.StringField.__init__(self, 456, data)

class NoUnderlyingSecurityAltID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 457)
		else:
			quickfix.IntField.__init__(self, 457, data)

class UnderlyingSecurityAltID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 458)
		else:
			quickfix.StringField.__init__(self, 458, data)

class UnderlyingSecurityAltIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 459)
		else:
			quickfix.StringField.__init__(self, 459, data)

class Product(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 460)
		else:
			quickfix.IntField.__init__(self, 460, data)

class CFICode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 461)
		else:
			quickfix.StringField.__init__(self, 461, data)

class UnderlyingProduct(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 462)
		else:
			quickfix.IntField.__init__(self, 462, data)

class UnderlyingCFICode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 463)
		else:
			quickfix.StringField.__init__(self, 463, data)

class TestMessageIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 464)
		else:
			quickfix.BoolField.__init__(self, 464, data)

class QuantityType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 465)
		else:
			quickfix.IntField.__init__(self, 465, data)

class BookingRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 466)
		else:
			quickfix.StringField.__init__(self, 466, data)

class IndividualAllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 467)
		else:
			quickfix.StringField.__init__(self, 467, data)

class RoundingDirection(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 468)
		else:
			quickfix.CharField.__init__(self, 468, data)

class RoundingModulus(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 469)
		else:
			quickfix.DoubleField.__init__(self, 469, data)

class CountryOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 470)
		else:
			quickfix.StringField.__init__(self, 470, data)

class StateOrProvinceOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 471)
		else:
			quickfix.StringField.__init__(self, 471, data)

class LocaleOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 472)
		else:
			quickfix.StringField.__init__(self, 472, data)

class NoRegistDtls(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 473)
		else:
			quickfix.IntField.__init__(self, 473, data)

class MailingDtls(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 474)
		else:
			quickfix.StringField.__init__(self, 474, data)

class InvestorCountryOfResidence(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 475)
		else:
			quickfix.StringField.__init__(self, 475, data)

class PaymentRef(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 476)
		else:
			quickfix.StringField.__init__(self, 476, data)

class DistribPaymentMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 477)
		else:
			quickfix.IntField.__init__(self, 477, data)

class CashDistribCurr(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 478)
		else:
			quickfix.StringField.__init__(self, 478, data)

class CommCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 479)
		else:
			quickfix.StringField.__init__(self, 479, data)

class CancellationRights(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 480)
		else:
			quickfix.CharField.__init__(self, 480, data)

class MoneyLaunderingStatus(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 481)
		else:
			quickfix.CharField.__init__(self, 481, data)

class MailingInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 482)
		else:
			quickfix.StringField.__init__(self, 482, data)

class TransBkdTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 483)
		else:
			quickfix.UtcTimeStampField.__init__(self, 483, data)

class ExecPriceType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 484)
		else:
			quickfix.CharField.__init__(self, 484, data)

class ExecPriceAdjustment(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 485)
		else:
			quickfix.DoubleField.__init__(self, 485, data)

class DateOfBirth(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 486)
		else:
			quickfix.StringField.__init__(self, 486, data)

class TradeReportTransType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 487)
		else:
			quickfix.IntField.__init__(self, 487, data)

class CardHolderName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 488)
		else:
			quickfix.StringField.__init__(self, 488, data)

class CardNumber(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 489)
		else:
			quickfix.StringField.__init__(self, 489, data)

class CardExpDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 490)
		else:
			quickfix.StringField.__init__(self, 490, data)

class CardIssNum(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 491)
		else:
			quickfix.StringField.__init__(self, 491, data)

class PaymentMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 492)
		else:
			quickfix.IntField.__init__(self, 492, data)

class RegistAcctType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 493)
		else:
			quickfix.StringField.__init__(self, 493, data)

class Designation(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 494)
		else:
			quickfix.StringField.__init__(self, 494, data)

class TaxAdvantageType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 495)
		else:
			quickfix.IntField.__init__(self, 495, data)

class RegistRejReasonText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 496)
		else:
			quickfix.StringField.__init__(self, 496, data)

class FundRenewWaiv(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 497)
		else:
			quickfix.CharField.__init__(self, 497, data)

class CashDistribAgentName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 498)
		else:
			quickfix.StringField.__init__(self, 498, data)

class CashDistribAgentCode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 499)
		else:
			quickfix.StringField.__init__(self, 499, data)

class CashDistribAgentAcctNumber(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 500)
		else:
			quickfix.StringField.__init__(self, 500, data)

class CashDistribPayRef(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 501)
		else:
			quickfix.StringField.__init__(self, 501, data)

class CashDistribAgentAcctName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 502)
		else:
			quickfix.StringField.__init__(self, 502, data)

class CardStartDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 503)
		else:
			quickfix.StringField.__init__(self, 503, data)

class PaymentDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 504)
		else:
			quickfix.StringField.__init__(self, 504, data)

class PaymentRemitterID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 505)
		else:
			quickfix.StringField.__init__(self, 505, data)

class RegistStatus(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 506)
		else:
			quickfix.CharField.__init__(self, 506, data)

class RegistRejReasonCode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 507)
		else:
			quickfix.IntField.__init__(self, 507, data)

class RegistRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 508)
		else:
			quickfix.StringField.__init__(self, 508, data)

class RegistDtls(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 509)
		else:
			quickfix.StringField.__init__(self, 509, data)

class NoDistribInsts(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 510)
		else:
			quickfix.IntField.__init__(self, 510, data)

class RegistEmail(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 511)
		else:
			quickfix.StringField.__init__(self, 511, data)

class DistribPercentage(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 512)
		else:
			quickfix.DoubleField.__init__(self, 512, data)

class RegistID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 513)
		else:
			quickfix.StringField.__init__(self, 513, data)

class RegistTransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 514)
		else:
			quickfix.CharField.__init__(self, 514, data)

class ExecValuationPoint(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 515)
		else:
			quickfix.UtcTimeStampField.__init__(self, 515, data)

class OrderPercent(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 516)
		else:
			quickfix.DoubleField.__init__(self, 516, data)

class OwnershipType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 517)
		else:
			quickfix.CharField.__init__(self, 517, data)

class NoContAmts(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 518)
		else:
			quickfix.IntField.__init__(self, 518, data)

class ContAmtType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 519)
		else:
			quickfix.IntField.__init__(self, 519, data)

class ContAmtValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 520)
		else:
			quickfix.DoubleField.__init__(self, 520, data)

class ContAmtCurr(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 521)
		else:
			quickfix.StringField.__init__(self, 521, data)

class OwnerType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 522)
		else:
			quickfix.IntField.__init__(self, 522, data)

class PartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 523)
		else:
			quickfix.StringField.__init__(self, 523, data)

class NestedPartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 524)
		else:
			quickfix.StringField.__init__(self, 524, data)

class NestedPartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 525)
		else:
			quickfix.CharField.__init__(self, 525, data)

class SecondaryClOrdID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 526)
		else:
			quickfix.StringField.__init__(self, 526, data)

class SecondaryExecID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 527)
		else:
			quickfix.StringField.__init__(self, 527, data)

class OrderCapacity(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 528)
		else:
			quickfix.CharField.__init__(self, 528, data)

class OrderRestrictions(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 529)
		else:
			quickfix.StringField.__init__(self, 529, data)

class MassCancelRequestType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 530)
		else:
			quickfix.CharField.__init__(self, 530, data)

class MassCancelResponse(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 531)
		else:
			quickfix.CharField.__init__(self, 531, data)

class MassCancelRejectReason(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 532)
		else:
			quickfix.CharField.__init__(self, 532, data)

class TotalAffectedOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 533)
		else:
			quickfix.IntField.__init__(self, 533, data)

class NoAffectedOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 534)
		else:
			quickfix.IntField.__init__(self, 534, data)

class AffectedOrderID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 535)
		else:
			quickfix.StringField.__init__(self, 535, data)

class AffectedSecondaryOrderID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 536)
		else:
			quickfix.StringField.__init__(self, 536, data)

class QuoteType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 537)
		else:
			quickfix.IntField.__init__(self, 537, data)

class NestedPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 538)
		else:
			quickfix.IntField.__init__(self, 538, data)

class NoNestedPartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 539)
		else:
			quickfix.IntField.__init__(self, 539, data)

class TotalAccruedInterestAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 540)
		else:
			quickfix.DoubleField.__init__(self, 540, data)

class MaturityDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 541)
		else:
			quickfix.StringField.__init__(self, 541, data)

class UnderlyingMaturityDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 542)
		else:
			quickfix.StringField.__init__(self, 542, data)

class InstrRegistry(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 543)
		else:
			quickfix.StringField.__init__(self, 543, data)

class CashMargin(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 544)
		else:
			quickfix.CharField.__init__(self, 544, data)

class NestedPartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 545)
		else:
			quickfix.StringField.__init__(self, 545, data)

class Scope(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 546)
		else:
			quickfix.StringField.__init__(self, 546, data)

class MDImplicitDelete(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 547)
		else:
			quickfix.BoolField.__init__(self, 547, data)

class CrossID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 548)
		else:
			quickfix.StringField.__init__(self, 548, data)

class CrossType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 549)
		else:
			quickfix.IntField.__init__(self, 549, data)

class CrossPrioritization(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 550)
		else:
			quickfix.IntField.__init__(self, 550, data)

class OrigCrossID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 551)
		else:
			quickfix.StringField.__init__(self, 551, data)

class NoSides(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 552)
		else:
			quickfix.IntField.__init__(self, 552, data)

class Username(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 553)
		else:
			quickfix.StringField.__init__(self, 553, data)

class Password(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 554)
		else:
			quickfix.StringField.__init__(self, 554, data)

class NoLegs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 555)
		else:
			quickfix.IntField.__init__(self, 555, data)

class LegCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 556)
		else:
			quickfix.StringField.__init__(self, 556, data)

class TotNoSecurityTypes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 557)
		else:
			quickfix.IntField.__init__(self, 557, data)

class NoSecurityTypes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 558)
		else:
			quickfix.IntField.__init__(self, 558, data)

class SecurityListRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 559)
		else:
			quickfix.IntField.__init__(self, 559, data)

class SecurityRequestResult(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 560)
		else:
			quickfix.IntField.__init__(self, 560, data)

class RoundLot(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 561)
		else:
			quickfix.DoubleField.__init__(self, 561, data)

class MinTradeVol(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 562)
		else:
			quickfix.DoubleField.__init__(self, 562, data)

class MultiLegRptTypeReq(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 563)
		else:
			quickfix.IntField.__init__(self, 563, data)

class LegPositionEffect(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 564)
		else:
			quickfix.CharField.__init__(self, 564, data)

class LegCoveredOrUncovered(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 565)
		else:
			quickfix.IntField.__init__(self, 565, data)

class LegPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 566)
		else:
			quickfix.DoubleField.__init__(self, 566, data)

class TradSesStatusRejReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 567)
		else:
			quickfix.IntField.__init__(self, 567, data)

class TradeRequestID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 568)
		else:
			quickfix.StringField.__init__(self, 568, data)

class TradeRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 569)
		else:
			quickfix.IntField.__init__(self, 569, data)

class PreviouslyReported(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 570)
		else:
			quickfix.BoolField.__init__(self, 570, data)

class TradeReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 571)
		else:
			quickfix.StringField.__init__(self, 571, data)

class TradeReportRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 572)
		else:
			quickfix.StringField.__init__(self, 572, data)

class MatchStatus(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 573)
		else:
			quickfix.CharField.__init__(self, 573, data)

class MatchType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 574)
		else:
			quickfix.StringField.__init__(self, 574, data)

class OddLot(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 575)
		else:
			quickfix.BoolField.__init__(self, 575, data)

class NoClearingInstructions(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 576)
		else:
			quickfix.IntField.__init__(self, 576, data)

class ClearingInstruction(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 577)
		else:
			quickfix.IntField.__init__(self, 577, data)

class TradeInputSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 578)
		else:
			quickfix.StringField.__init__(self, 578, data)

class TradeInputDevice(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 579)
		else:
			quickfix.StringField.__init__(self, 579, data)

class NoDates(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 580)
		else:
			quickfix.IntField.__init__(self, 580, data)

class AccountType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 581)
		else:
			quickfix.IntField.__init__(self, 581, data)

class CustOrderCapacity(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 582)
		else:
			quickfix.IntField.__init__(self, 582, data)

class ClOrdLinkID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 583)
		else:
			quickfix.StringField.__init__(self, 583, data)

class MassStatusReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 584)
		else:
			quickfix.StringField.__init__(self, 584, data)

class MassStatusReqType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 585)
		else:
			quickfix.IntField.__init__(self, 585, data)

class OrigOrdModTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 586)
		else:
			quickfix.UtcTimeStampField.__init__(self, 586, data)

class LegSettlType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 587)
		else:
			quickfix.CharField.__init__(self, 587, data)

class LegSettlDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 588)
		else:
			quickfix.StringField.__init__(self, 588, data)

class DayBookingInst(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 589)
		else:
			quickfix.CharField.__init__(self, 589, data)

class BookingUnit(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 590)
		else:
			quickfix.CharField.__init__(self, 590, data)

class PreallocMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 591)
		else:
			quickfix.CharField.__init__(self, 591, data)

class UnderlyingCountryOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 592)
		else:
			quickfix.StringField.__init__(self, 592, data)

class UnderlyingStateOrProvinceOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 593)
		else:
			quickfix.StringField.__init__(self, 593, data)

class UnderlyingLocaleOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 594)
		else:
			quickfix.StringField.__init__(self, 594, data)

class UnderlyingInstrRegistry(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 595)
		else:
			quickfix.StringField.__init__(self, 595, data)

class LegCountryOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 596)
		else:
			quickfix.StringField.__init__(self, 596, data)

class LegStateOrProvinceOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 597)
		else:
			quickfix.StringField.__init__(self, 597, data)

class LegLocaleOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 598)
		else:
			quickfix.StringField.__init__(self, 598, data)

class LegInstrRegistry(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 599)
		else:
			quickfix.StringField.__init__(self, 599, data)

class LegSymbol(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 600)
		else:
			quickfix.StringField.__init__(self, 600, data)

class LegSymbolSfx(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 601)
		else:
			quickfix.StringField.__init__(self, 601, data)

class LegSecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 602)
		else:
			quickfix.StringField.__init__(self, 602, data)

class LegSecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 603)
		else:
			quickfix.StringField.__init__(self, 603, data)

class NoLegSecurityAltID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 604)
		else:
			quickfix.StringField.__init__(self, 604, data)

class LegSecurityAltID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 605)
		else:
			quickfix.StringField.__init__(self, 605, data)

class LegSecurityAltIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 606)
		else:
			quickfix.StringField.__init__(self, 606, data)

class LegProduct(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 607)
		else:
			quickfix.IntField.__init__(self, 607, data)

class LegCFICode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 608)
		else:
			quickfix.StringField.__init__(self, 608, data)

class LegSecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 609)
		else:
			quickfix.StringField.__init__(self, 609, data)

class LegMaturityMonthYear(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 610)
		else:
			quickfix.StringField.__init__(self, 610, data)

class LegMaturityDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 611)
		else:
			quickfix.StringField.__init__(self, 611, data)

class LegStrikePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 612)
		else:
			quickfix.DoubleField.__init__(self, 612, data)

class LegOptAttribute(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 613)
		else:
			quickfix.CharField.__init__(self, 613, data)

class LegContractMultiplier(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 614)
		else:
			quickfix.DoubleField.__init__(self, 614, data)

class LegCouponRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 615)
		else:
			quickfix.DoubleField.__init__(self, 615, data)

class LegSecurityExchange(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 616)
		else:
			quickfix.StringField.__init__(self, 616, data)

class LegIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 617)
		else:
			quickfix.StringField.__init__(self, 617, data)

class EncodedLegIssuerLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 618)
		else:
			quickfix.IntField.__init__(self, 618, data)

class EncodedLegIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 619)
		else:
			quickfix.StringField.__init__(self, 619, data)

class LegSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 620)
		else:
			quickfix.StringField.__init__(self, 620, data)

class EncodedLegSecurityDescLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 621)
		else:
			quickfix.IntField.__init__(self, 621, data)

class EncodedLegSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 622)
		else:
			quickfix.StringField.__init__(self, 622, data)

class LegRatioQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 623)
		else:
			quickfix.DoubleField.__init__(self, 623, data)

class LegSide(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 624)
		else:
			quickfix.CharField.__init__(self, 624, data)

class TradingSessionSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 625)
		else:
			quickfix.StringField.__init__(self, 625, data)

class AllocType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 626)
		else:
			quickfix.IntField.__init__(self, 626, data)

class NoHops(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 627)
		else:
			quickfix.IntField.__init__(self, 627, data)

class HopCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 628)
		else:
			quickfix.StringField.__init__(self, 628, data)

class HopSendingTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 629)
		else:
			quickfix.UtcTimeStampField.__init__(self, 629, data)

class HopRefID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 630)
		else:
			quickfix.IntField.__init__(self, 630, data)

class MidPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 631)
		else:
			quickfix.DoubleField.__init__(self, 631, data)

class BidYield(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 632)
		else:
			quickfix.DoubleField.__init__(self, 632, data)

class MidYield(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 633)
		else:
			quickfix.DoubleField.__init__(self, 633, data)

class OfferYield(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 634)
		else:
			quickfix.DoubleField.__init__(self, 634, data)

class ClearingFeeIndicator(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 635)
		else:
			quickfix.StringField.__init__(self, 635, data)

class WorkingIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 636)
		else:
			quickfix.BoolField.__init__(self, 636, data)

class LegLastPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 637)
		else:
			quickfix.DoubleField.__init__(self, 637, data)

class PriorityIndicator(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 638)
		else:
			quickfix.IntField.__init__(self, 638, data)

class PriceImprovement(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 639)
		else:
			quickfix.DoubleField.__init__(self, 639, data)

class Price2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 640)
		else:
			quickfix.DoubleField.__init__(self, 640, data)

class LastForwardPoints2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 641)
		else:
			quickfix.DoubleField.__init__(self, 641, data)

class BidForwardPoints2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 642)
		else:
			quickfix.DoubleField.__init__(self, 642, data)

class OfferForwardPoints2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 643)
		else:
			quickfix.DoubleField.__init__(self, 643, data)

class RFQReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 644)
		else:
			quickfix.StringField.__init__(self, 644, data)

class MktBidPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 645)
		else:
			quickfix.DoubleField.__init__(self, 645, data)

class MktOfferPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 646)
		else:
			quickfix.DoubleField.__init__(self, 646, data)

class MinBidSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 647)
		else:
			quickfix.DoubleField.__init__(self, 647, data)

class MinOfferSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 648)
		else:
			quickfix.DoubleField.__init__(self, 648, data)

class QuoteStatusReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 649)
		else:
			quickfix.StringField.__init__(self, 649, data)

class LegalConfirm(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 650)
		else:
			quickfix.BoolField.__init__(self, 650, data)

class UnderlyingLastPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 651)
		else:
			quickfix.DoubleField.__init__(self, 651, data)

class UnderlyingLastQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 652)
		else:
			quickfix.DoubleField.__init__(self, 652, data)

class LegRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 654)
		else:
			quickfix.StringField.__init__(self, 654, data)

class ContraLegRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 655)
		else:
			quickfix.StringField.__init__(self, 655, data)

class SettlCurrBidFxRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 656)
		else:
			quickfix.DoubleField.__init__(self, 656, data)

class SettlCurrOfferFxRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 657)
		else:
			quickfix.DoubleField.__init__(self, 657, data)

class QuoteRequestRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 658)
		else:
			quickfix.IntField.__init__(self, 658, data)

class SideComplianceID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 659)
		else:
			quickfix.StringField.__init__(self, 659, data)

class AcctIDSource(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 660)
		else:
			quickfix.IntField.__init__(self, 660, data)

class AllocAcctIDSource(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 661)
		else:
			quickfix.IntField.__init__(self, 661, data)

class BenchmarkPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 662)
		else:
			quickfix.DoubleField.__init__(self, 662, data)

class BenchmarkPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 663)
		else:
			quickfix.IntField.__init__(self, 663, data)

class ConfirmID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 664)
		else:
			quickfix.StringField.__init__(self, 664, data)

class ConfirmStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 665)
		else:
			quickfix.IntField.__init__(self, 665, data)

class ConfirmTransType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 666)
		else:
			quickfix.IntField.__init__(self, 666, data)

class ContractSettlMonth(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 667)
		else:
			quickfix.StringField.__init__(self, 667, data)

class DeliveryForm(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 668)
		else:
			quickfix.IntField.__init__(self, 668, data)

class LastParPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 669)
		else:
			quickfix.DoubleField.__init__(self, 669, data)

class NoLegAllocs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 670)
		else:
			quickfix.IntField.__init__(self, 670, data)

class LegAllocAccount(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 671)
		else:
			quickfix.StringField.__init__(self, 671, data)

class LegIndividualAllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 672)
		else:
			quickfix.StringField.__init__(self, 672, data)

class LegAllocQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 673)
		else:
			quickfix.DoubleField.__init__(self, 673, data)

class LegAllocAcctIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 674)
		else:
			quickfix.StringField.__init__(self, 674, data)

class LegSettlCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 675)
		else:
			quickfix.StringField.__init__(self, 675, data)

class LegBenchmarkCurveCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 676)
		else:
			quickfix.StringField.__init__(self, 676, data)

class LegBenchmarkCurveName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 677)
		else:
			quickfix.StringField.__init__(self, 677, data)

class LegBenchmarkCurvePoint(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 678)
		else:
			quickfix.StringField.__init__(self, 678, data)

class LegBenchmarkPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 679)
		else:
			quickfix.DoubleField.__init__(self, 679, data)

class LegBenchmarkPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 680)
		else:
			quickfix.IntField.__init__(self, 680, data)

class LegBidPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 681)
		else:
			quickfix.DoubleField.__init__(self, 681, data)

class LegIOIQty(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 682)
		else:
			quickfix.StringField.__init__(self, 682, data)

class NoLegStipulations(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 683)
		else:
			quickfix.IntField.__init__(self, 683, data)

class LegOfferPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 684)
		else:
			quickfix.DoubleField.__init__(self, 684, data)

class LegOrderQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 685)
		else:
			quickfix.DoubleField.__init__(self, 685, data)

class LegPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 686)
		else:
			quickfix.IntField.__init__(self, 686, data)

class LegQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 687)
		else:
			quickfix.DoubleField.__init__(self, 687, data)

class LegStipulationType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 688)
		else:
			quickfix.StringField.__init__(self, 688, data)

class LegStipulationValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 689)
		else:
			quickfix.StringField.__init__(self, 689, data)

class LegSwapType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 690)
		else:
			quickfix.IntField.__init__(self, 690, data)

class Pool(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 691)
		else:
			quickfix.StringField.__init__(self, 691, data)

class QuotePriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 692)
		else:
			quickfix.IntField.__init__(self, 692, data)

class QuoteRespID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 693)
		else:
			quickfix.StringField.__init__(self, 693, data)

class QuoteRespType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 694)
		else:
			quickfix.IntField.__init__(self, 694, data)

class QuoteQualifier(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 695)
		else:
			quickfix.CharField.__init__(self, 695, data)

class YieldRedemptionDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 696)
		else:
			quickfix.StringField.__init__(self, 696, data)

class YieldRedemptionPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 697)
		else:
			quickfix.DoubleField.__init__(self, 697, data)

class YieldRedemptionPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 698)
		else:
			quickfix.IntField.__init__(self, 698, data)

class BenchmarkSecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 699)
		else:
			quickfix.StringField.__init__(self, 699, data)

class ReversalIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 700)
		else:
			quickfix.BoolField.__init__(self, 700, data)

class YieldCalcDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 701)
		else:
			quickfix.StringField.__init__(self, 701, data)

class NoPositions(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 702)
		else:
			quickfix.IntField.__init__(self, 702, data)

class PosType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 703)
		else:
			quickfix.StringField.__init__(self, 703, data)

class LongQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 704)
		else:
			quickfix.DoubleField.__init__(self, 704, data)

class ShortQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 705)
		else:
			quickfix.DoubleField.__init__(self, 705, data)

class PosQtyStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 706)
		else:
			quickfix.IntField.__init__(self, 706, data)

class PosAmtType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 707)
		else:
			quickfix.StringField.__init__(self, 707, data)

class PosAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 708)
		else:
			quickfix.DoubleField.__init__(self, 708, data)

class PosTransType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 709)
		else:
			quickfix.IntField.__init__(self, 709, data)

class PosReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 710)
		else:
			quickfix.StringField.__init__(self, 710, data)

class NoUnderlyings(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 711)
		else:
			quickfix.IntField.__init__(self, 711, data)

class PosMaintAction(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 712)
		else:
			quickfix.IntField.__init__(self, 712, data)

class OrigPosReqRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 713)
		else:
			quickfix.StringField.__init__(self, 713, data)

class PosMaintRptRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 714)
		else:
			quickfix.StringField.__init__(self, 714, data)

class ClearingBusinessDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 715)
		else:
			quickfix.StringField.__init__(self, 715, data)

class SettlSessID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 716)
		else:
			quickfix.StringField.__init__(self, 716, data)

class SettlSessSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 717)
		else:
			quickfix.StringField.__init__(self, 717, data)

class AdjustmentType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 718)
		else:
			quickfix.IntField.__init__(self, 718, data)

class ContraryInstructionIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 719)
		else:
			quickfix.BoolField.__init__(self, 719, data)

class PriorSpreadIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 720)
		else:
			quickfix.BoolField.__init__(self, 720, data)

class PosMaintRptID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 721)
		else:
			quickfix.StringField.__init__(self, 721, data)

class PosMaintStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 722)
		else:
			quickfix.IntField.__init__(self, 722, data)

class PosMaintResult(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 723)
		else:
			quickfix.IntField.__init__(self, 723, data)

class PosReqType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 724)
		else:
			quickfix.IntField.__init__(self, 724, data)

class ResponseTransportType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 725)
		else:
			quickfix.IntField.__init__(self, 725, data)

class ResponseDestination(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 726)
		else:
			quickfix.StringField.__init__(self, 726, data)

class TotalNumPosReports(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 727)
		else:
			quickfix.IntField.__init__(self, 727, data)

class PosReqResult(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 728)
		else:
			quickfix.IntField.__init__(self, 728, data)

class PosReqStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 729)
		else:
			quickfix.IntField.__init__(self, 729, data)

class SettlPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 730)
		else:
			quickfix.DoubleField.__init__(self, 730, data)

class SettlPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 731)
		else:
			quickfix.IntField.__init__(self, 731, data)

class UnderlyingSettlPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 732)
		else:
			quickfix.DoubleField.__init__(self, 732, data)

class UnderlyingSettlPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 733)
		else:
			quickfix.IntField.__init__(self, 733, data)

class PriorSettlPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 734)
		else:
			quickfix.DoubleField.__init__(self, 734, data)

class NoQuoteQualifiers(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 735)
		else:
			quickfix.IntField.__init__(self, 735, data)

class AllocSettlCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 736)
		else:
			quickfix.StringField.__init__(self, 736, data)

class AllocSettlCurrAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 737)
		else:
			quickfix.DoubleField.__init__(self, 737, data)

class InterestAtMaturity(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 738)
		else:
			quickfix.DoubleField.__init__(self, 738, data)

class LegDatedDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 739)
		else:
			quickfix.StringField.__init__(self, 739, data)

class LegPool(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 740)
		else:
			quickfix.StringField.__init__(self, 740, data)

class AllocInterestAtMaturity(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 741)
		else:
			quickfix.DoubleField.__init__(self, 741, data)

class AllocAccruedInterestAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 742)
		else:
			quickfix.DoubleField.__init__(self, 742, data)

class DeliveryDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 743)
		else:
			quickfix.StringField.__init__(self, 743, data)

class AssignmentMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 744)
		else:
			quickfix.CharField.__init__(self, 744, data)

class AssignmentUnit(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 745)
		else:
			quickfix.DoubleField.__init__(self, 745, data)

class OpenInterest(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 746)
		else:
			quickfix.DoubleField.__init__(self, 746, data)

class ExerciseMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 747)
		else:
			quickfix.CharField.__init__(self, 747, data)

class TotNumTradeReports(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 748)
		else:
			quickfix.IntField.__init__(self, 748, data)

class TradeRequestResult(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 749)
		else:
			quickfix.IntField.__init__(self, 749, data)

class TradeRequestStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 750)
		else:
			quickfix.IntField.__init__(self, 750, data)

class TradeReportRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 751)
		else:
			quickfix.IntField.__init__(self, 751, data)

class SideMultiLegReportingType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 752)
		else:
			quickfix.IntField.__init__(self, 752, data)

class NoPosAmt(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 753)
		else:
			quickfix.IntField.__init__(self, 753, data)

class AutoAcceptIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 754)
		else:
			quickfix.BoolField.__init__(self, 754, data)

class AllocReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 755)
		else:
			quickfix.StringField.__init__(self, 755, data)

class NoNested2PartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 756)
		else:
			quickfix.IntField.__init__(self, 756, data)

class Nested2PartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 757)
		else:
			quickfix.StringField.__init__(self, 757, data)

class Nested2PartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 758)
		else:
			quickfix.CharField.__init__(self, 758, data)

class Nested2PartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 759)
		else:
			quickfix.IntField.__init__(self, 759, data)

class Nested2PartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 760)
		else:
			quickfix.StringField.__init__(self, 760, data)

class BenchmarkSecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 761)
		else:
			quickfix.StringField.__init__(self, 761, data)

class SecuritySubType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 762)
		else:
			quickfix.StringField.__init__(self, 762, data)

class UnderlyingSecuritySubType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 763)
		else:
			quickfix.StringField.__init__(self, 763, data)

class LegSecuritySubType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 764)
		else:
			quickfix.StringField.__init__(self, 764, data)

class AllowableOneSidednessPct(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 765)
		else:
			quickfix.DoubleField.__init__(self, 765, data)

class AllowableOneSidednessValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 766)
		else:
			quickfix.DoubleField.__init__(self, 766, data)

class AllowableOneSidednessCurr(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 767)
		else:
			quickfix.StringField.__init__(self, 767, data)

class NoTrdRegTimestamps(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 768)
		else:
			quickfix.IntField.__init__(self, 768, data)

class TrdRegTimestamp(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 769)
		else:
			quickfix.UtcTimeStampField.__init__(self, 769, data)

class TrdRegTimestampType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 770)
		else:
			quickfix.IntField.__init__(self, 770, data)

class TrdRegTimestampOrigin(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 771)
		else:
			quickfix.StringField.__init__(self, 771, data)

class ConfirmRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 772)
		else:
			quickfix.StringField.__init__(self, 772, data)

class ConfirmType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 773)
		else:
			quickfix.IntField.__init__(self, 773, data)

class ConfirmRejReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 774)
		else:
			quickfix.IntField.__init__(self, 774, data)

class BookingType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 775)
		else:
			quickfix.IntField.__init__(self, 775, data)

class IndividualAllocRejCode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 776)
		else:
			quickfix.IntField.__init__(self, 776, data)

class SettlInstMsgID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 777)
		else:
			quickfix.StringField.__init__(self, 777, data)

class NoSettlInst(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 778)
		else:
			quickfix.IntField.__init__(self, 778, data)

class LastUpdateTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 779)
		else:
			quickfix.UtcTimeStampField.__init__(self, 779, data)

class AllocSettlInstType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 780)
		else:
			quickfix.IntField.__init__(self, 780, data)

class NoSettlPartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 781)
		else:
			quickfix.IntField.__init__(self, 781, data)

class SettlPartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 782)
		else:
			quickfix.StringField.__init__(self, 782, data)

class SettlPartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 783)
		else:
			quickfix.CharField.__init__(self, 783, data)

class SettlPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 784)
		else:
			quickfix.IntField.__init__(self, 784, data)

class SettlPartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 785)
		else:
			quickfix.StringField.__init__(self, 785, data)

class SettlPartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 786)
		else:
			quickfix.IntField.__init__(self, 786, data)

class DlvyInstType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 787)
		else:
			quickfix.CharField.__init__(self, 787, data)

class TerminationType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 788)
		else:
			quickfix.IntField.__init__(self, 788, data)

class NextExpectedMsgSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 789)
		else:
			quickfix.IntField.__init__(self, 789, data)

class OrdStatusReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 790)
		else:
			quickfix.StringField.__init__(self, 790, data)

class SettlInstReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 791)
		else:
			quickfix.StringField.__init__(self, 791, data)

class SettlInstReqRejCode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 792)
		else:
			quickfix.IntField.__init__(self, 792, data)

class SecondaryAllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 793)
		else:
			quickfix.StringField.__init__(self, 793, data)

class AllocReportType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 794)
		else:
			quickfix.IntField.__init__(self, 794, data)

class AllocReportRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 795)
		else:
			quickfix.StringField.__init__(self, 795, data)

class AllocCancReplaceReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 796)
		else:
			quickfix.IntField.__init__(self, 796, data)

class CopyMsgIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 797)
		else:
			quickfix.BoolField.__init__(self, 797, data)

class AllocAccountType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 798)
		else:
			quickfix.IntField.__init__(self, 798, data)

class OrderAvgPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 799)
		else:
			quickfix.DoubleField.__init__(self, 799, data)

class OrderBookingQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 800)
		else:
			quickfix.DoubleField.__init__(self, 800, data)

class NoSettlPartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 801)
		else:
			quickfix.IntField.__init__(self, 801, data)

class NoPartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 802)
		else:
			quickfix.IntField.__init__(self, 802, data)

class PartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 803)
		else:
			quickfix.IntField.__init__(self, 803, data)

class NoNestedPartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 804)
		else:
			quickfix.IntField.__init__(self, 804, data)

class NestedPartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 805)
		else:
			quickfix.IntField.__init__(self, 805, data)

class NoNested2PartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 806)
		else:
			quickfix.IntField.__init__(self, 806, data)

class Nested2PartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 807)
		else:
			quickfix.IntField.__init__(self, 807, data)

class AllocIntermedReqType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 808)
		else:
			quickfix.IntField.__init__(self, 808, data)

class UnderlyingPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 810)
		else:
			quickfix.DoubleField.__init__(self, 810, data)

class PriceDelta(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 811)
		else:
			quickfix.DoubleField.__init__(self, 811, data)

class ApplQueueMax(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 812)
		else:
			quickfix.IntField.__init__(self, 812, data)

class ApplQueueDepth(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 813)
		else:
			quickfix.IntField.__init__(self, 813, data)

class ApplQueueResolution(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 814)
		else:
			quickfix.IntField.__init__(self, 814, data)

class ApplQueueAction(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 815)
		else:
			quickfix.IntField.__init__(self, 815, data)

class NoAltMDSource(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 816)
		else:
			quickfix.IntField.__init__(self, 816, data)

class AltMDSourceID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 817)
		else:
			quickfix.StringField.__init__(self, 817, data)

class SecondaryTradeReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 818)
		else:
			quickfix.StringField.__init__(self, 818, data)

class AvgPxIndicator(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 819)
		else:
			quickfix.IntField.__init__(self, 819, data)

class TradeLinkID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 820)
		else:
			quickfix.StringField.__init__(self, 820, data)

class OrderInputDevice(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 821)
		else:
			quickfix.StringField.__init__(self, 821, data)

class UnderlyingTradingSessionID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 822)
		else:
			quickfix.StringField.__init__(self, 822, data)

class UnderlyingTradingSessionSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 823)
		else:
			quickfix.StringField.__init__(self, 823, data)

class TradeLegRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 824)
		else:
			quickfix.StringField.__init__(self, 824, data)

class ExchangeRule(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 825)
		else:
			quickfix.StringField.__init__(self, 825, data)

class TradeAllocIndicator(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 826)
		else:
			quickfix.IntField.__init__(self, 826, data)

class ExpirationCycle(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 827)
		else:
			quickfix.IntField.__init__(self, 827, data)

class TrdType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 828)
		else:
			quickfix.IntField.__init__(self, 828, data)

class TrdSubType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 829)
		else:
			quickfix.IntField.__init__(self, 829, data)

class TransferReason(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 830)
		else:
			quickfix.StringField.__init__(self, 830, data)

class AsgnReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 831)
		else:
			quickfix.StringField.__init__(self, 831, data)

class TotNumAssignmentReports(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 832)
		else:
			quickfix.IntField.__init__(self, 832, data)

class AsgnRptID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 833)
		else:
			quickfix.StringField.__init__(self, 833, data)

class ThresholdAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 834)
		else:
			quickfix.DoubleField.__init__(self, 834, data)

class PegMoveType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 835)
		else:
			quickfix.IntField.__init__(self, 835, data)

class PegOffsetType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 836)
		else:
			quickfix.IntField.__init__(self, 836, data)

class PegLimitType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 837)
		else:
			quickfix.IntField.__init__(self, 837, data)

class PegRoundDirection(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 838)
		else:
			quickfix.IntField.__init__(self, 838, data)

class PeggedPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 839)
		else:
			quickfix.DoubleField.__init__(self, 839, data)

class PegScope(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 840)
		else:
			quickfix.IntField.__init__(self, 840, data)

class DiscretionMoveType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 841)
		else:
			quickfix.IntField.__init__(self, 841, data)

class DiscretionOffsetType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 842)
		else:
			quickfix.IntField.__init__(self, 842, data)

class DiscretionLimitType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 843)
		else:
			quickfix.IntField.__init__(self, 843, data)

class DiscretionRoundDirection(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 844)
		else:
			quickfix.IntField.__init__(self, 844, data)

class DiscretionPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 845)
		else:
			quickfix.DoubleField.__init__(self, 845, data)

class DiscretionScope(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 846)
		else:
			quickfix.IntField.__init__(self, 846, data)

class TargetStrategy(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 847)
		else:
			quickfix.IntField.__init__(self, 847, data)

class TargetStrategyParameters(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 848)
		else:
			quickfix.StringField.__init__(self, 848, data)

class ParticipationRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 849)
		else:
			quickfix.DoubleField.__init__(self, 849, data)

class TargetStrategyPerformance(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 850)
		else:
			quickfix.DoubleField.__init__(self, 850, data)

class LastLiquidityInd(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 851)
		else:
			quickfix.IntField.__init__(self, 851, data)

class PublishTrdIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 852)
		else:
			quickfix.BoolField.__init__(self, 852, data)

class ShortSaleReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 853)
		else:
			quickfix.IntField.__init__(self, 853, data)

class QtyType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 854)
		else:
			quickfix.IntField.__init__(self, 854, data)

class SecondaryTrdType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 855)
		else:
			quickfix.IntField.__init__(self, 855, data)

class TradeReportType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 856)
		else:
			quickfix.IntField.__init__(self, 856, data)

class AllocNoOrdersType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 857)
		else:
			quickfix.IntField.__init__(self, 857, data)

class SharedCommission(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 858)
		else:
			quickfix.DoubleField.__init__(self, 858, data)

class ConfirmReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 859)
		else:
			quickfix.StringField.__init__(self, 859, data)

class AvgParPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 860)
		else:
			quickfix.DoubleField.__init__(self, 860, data)

class ReportedPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 861)
		else:
			quickfix.DoubleField.__init__(self, 861, data)

class NoCapacities(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 862)
		else:
			quickfix.IntField.__init__(self, 862, data)

class OrderCapacityQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 863)
		else:
			quickfix.DoubleField.__init__(self, 863, data)

class NoEvents(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 864)
		else:
			quickfix.IntField.__init__(self, 864, data)

class EventType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 865)
		else:
			quickfix.IntField.__init__(self, 865, data)

class EventDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 866)
		else:
			quickfix.StringField.__init__(self, 866, data)

class EventPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 867)
		else:
			quickfix.DoubleField.__init__(self, 867, data)

class EventText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 868)
		else:
			quickfix.StringField.__init__(self, 868, data)

class PctAtRisk(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 869)
		else:
			quickfix.DoubleField.__init__(self, 869, data)

class NoInstrAttrib(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 870)
		else:
			quickfix.IntField.__init__(self, 870, data)

class InstrAttribType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 871)
		else:
			quickfix.IntField.__init__(self, 871, data)

class InstrAttribValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 872)
		else:
			quickfix.StringField.__init__(self, 872, data)

class DatedDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 873)
		else:
			quickfix.StringField.__init__(self, 873, data)

class InterestAccrualDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 874)
		else:
			quickfix.StringField.__init__(self, 874, data)

class CPProgram(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 875)
		else:
			quickfix.IntField.__init__(self, 875, data)

class CPRegType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 876)
		else:
			quickfix.StringField.__init__(self, 876, data)

class UnderlyingCPProgram(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 877)
		else:
			quickfix.StringField.__init__(self, 877, data)

class UnderlyingCPRegType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 878)
		else:
			quickfix.StringField.__init__(self, 878, data)

class UnderlyingQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 879)
		else:
			quickfix.DoubleField.__init__(self, 879, data)

class TrdMatchID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 880)
		else:
			quickfix.StringField.__init__(self, 880, data)

class SecondaryTradeReportRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 881)
		else:
			quickfix.StringField.__init__(self, 881, data)

class UnderlyingDirtyPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 882)
		else:
			quickfix.DoubleField.__init__(self, 882, data)

class UnderlyingEndPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 883)
		else:
			quickfix.DoubleField.__init__(self, 883, data)

class UnderlyingStartValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 884)
		else:
			quickfix.DoubleField.__init__(self, 884, data)

class UnderlyingCurrentValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 885)
		else:
			quickfix.DoubleField.__init__(self, 885, data)

class UnderlyingEndValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 886)
		else:
			quickfix.DoubleField.__init__(self, 886, data)

class NoUnderlyingStips(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 887)
		else:
			quickfix.IntField.__init__(self, 887, data)

class UnderlyingStipType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 888)
		else:
			quickfix.StringField.__init__(self, 888, data)

class UnderlyingStipValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 889)
		else:
			quickfix.StringField.__init__(self, 889, data)

class MaturityNetMoney(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 890)
		else:
			quickfix.DoubleField.__init__(self, 890, data)

class MiscFeeBasis(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 891)
		else:
			quickfix.IntField.__init__(self, 891, data)

class TotNoAllocs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 892)
		else:
			quickfix.IntField.__init__(self, 892, data)

class LastFragment(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 893)
		else:
			quickfix.BoolField.__init__(self, 893, data)

class CollReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 894)
		else:
			quickfix.StringField.__init__(self, 894, data)

class CollAsgnReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 895)
		else:
			quickfix.IntField.__init__(self, 895, data)

class CollInquiryQualifier(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 896)
		else:
			quickfix.IntField.__init__(self, 896, data)

class NoTrades(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 897)
		else:
			quickfix.IntField.__init__(self, 897, data)

class MarginRatio(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 898)
		else:
			quickfix.DoubleField.__init__(self, 898, data)

class MarginExcess(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 899)
		else:
			quickfix.DoubleField.__init__(self, 899, data)

class TotalNetValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 900)
		else:
			quickfix.DoubleField.__init__(self, 900, data)

class CashOutstanding(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 901)
		else:
			quickfix.DoubleField.__init__(self, 901, data)

class CollAsgnID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 902)
		else:
			quickfix.StringField.__init__(self, 902, data)

class CollAsgnTransType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 903)
		else:
			quickfix.IntField.__init__(self, 903, data)

class CollRespID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 904)
		else:
			quickfix.StringField.__init__(self, 904, data)

class CollAsgnRespType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 905)
		else:
			quickfix.IntField.__init__(self, 905, data)

class CollAsgnRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 906)
		else:
			quickfix.IntField.__init__(self, 906, data)

class CollAsgnRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 907)
		else:
			quickfix.StringField.__init__(self, 907, data)

class CollRptID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 908)
		else:
			quickfix.StringField.__init__(self, 908, data)

class CollInquiryID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 909)
		else:
			quickfix.StringField.__init__(self, 909, data)

class CollStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 910)
		else:
			quickfix.IntField.__init__(self, 910, data)

class TotNumReports(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 911)
		else:
			quickfix.IntField.__init__(self, 911, data)

class LastRptRequested(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 912)
		else:
			quickfix.BoolField.__init__(self, 912, data)

class AgreementDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 913)
		else:
			quickfix.StringField.__init__(self, 913, data)

class AgreementID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 914)
		else:
			quickfix.StringField.__init__(self, 914, data)

class AgreementDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 915)
		else:
			quickfix.StringField.__init__(self, 915, data)

class StartDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 916)
		else:
			quickfix.StringField.__init__(self, 916, data)

class EndDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 917)
		else:
			quickfix.StringField.__init__(self, 917, data)

class AgreementCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 918)
		else:
			quickfix.StringField.__init__(self, 918, data)

class DeliveryType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 919)
		else:
			quickfix.IntField.__init__(self, 919, data)

class EndAccruedInterestAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 920)
		else:
			quickfix.DoubleField.__init__(self, 920, data)

class StartCash(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 921)
		else:
			quickfix.DoubleField.__init__(self, 921, data)

class EndCash(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 922)
		else:
			quickfix.DoubleField.__init__(self, 922, data)

class UserRequestID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 923)
		else:
			quickfix.StringField.__init__(self, 923, data)

class UserRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 924)
		else:
			quickfix.IntField.__init__(self, 924, data)

class NewPassword(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 925)
		else:
			quickfix.StringField.__init__(self, 925, data)

class UserStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 926)
		else:
			quickfix.IntField.__init__(self, 926, data)

class UserStatusText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 927)
		else:
			quickfix.StringField.__init__(self, 927, data)

class StatusValue(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 928)
		else:
			quickfix.IntField.__init__(self, 928, data)

class StatusText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 929)
		else:
			quickfix.StringField.__init__(self, 929, data)

class RefCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 930)
		else:
			quickfix.StringField.__init__(self, 930, data)

class RefSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 931)
		else:
			quickfix.StringField.__init__(self, 931, data)

class NetworkResponseID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 932)
		else:
			quickfix.StringField.__init__(self, 932, data)

class NetworkRequestID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 933)
		else:
			quickfix.StringField.__init__(self, 933, data)

class LastNetworkResponseID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 934)
		else:
			quickfix.StringField.__init__(self, 934, data)

class NetworkRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 935)
		else:
			quickfix.IntField.__init__(self, 935, data)

class NoCompIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 936)
		else:
			quickfix.IntField.__init__(self, 936, data)

class NetworkStatusResponseType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 937)
		else:
			quickfix.IntField.__init__(self, 937, data)

class NoCollInquiryQualifier(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 938)
		else:
			quickfix.IntField.__init__(self, 938, data)

class TrdRptStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 939)
		else:
			quickfix.IntField.__init__(self, 939, data)

class AffirmStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 940)
		else:
			quickfix.IntField.__init__(self, 940, data)

class UnderlyingStrikeCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 941)
		else:
			quickfix.StringField.__init__(self, 941, data)

class LegStrikeCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 942)
		else:
			quickfix.StringField.__init__(self, 942, data)

class TimeBracket(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 943)
		else:
			quickfix.StringField.__init__(self, 943, data)

class CollAction(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 944)
		else:
			quickfix.IntField.__init__(self, 944, data)

class CollInquiryStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 945)
		else:
			quickfix.IntField.__init__(self, 945, data)

class CollInquiryResult(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 946)
		else:
			quickfix.IntField.__init__(self, 946, data)

class StrikeCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 947)
		else:
			quickfix.StringField.__init__(self, 947, data)

class NoNested3PartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 948)
		else:
			quickfix.IntField.__init__(self, 948, data)

class Nested3PartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 949)
		else:
			quickfix.StringField.__init__(self, 949, data)

class Nested3PartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 950)
		else:
			quickfix.CharField.__init__(self, 950, data)

class Nested3PartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 951)
		else:
			quickfix.IntField.__init__(self, 951, data)

class NoNested3PartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 952)
		else:
			quickfix.IntField.__init__(self, 952, data)

class Nested3PartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 953)
		else:
			quickfix.StringField.__init__(self, 953, data)

class Nested3PartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 954)
		else:
			quickfix.IntField.__init__(self, 954, data)

class LegContractSettlMonth(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 955)
		else:
			quickfix.StringField.__init__(self, 955, data)

class LegInterestAccrualDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 956)
		else:
			quickfix.StringField.__init__(self, 956, data)

