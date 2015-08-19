# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.5
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_edr', [dirname(__file__)])
        except ImportError:
            import _edr
            return _edr
        if fp is not None:
            try:
                _mod = imp.load_module('_edr', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _edr = swig_import_helper()
    del swig_import_helper
else:
    import _edr
del version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.


def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr_nondynamic(self, class_type, name, static=1):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    if (not static):
        return object.__getattr__(self, name)
    else:
        raise AttributeError(name)

def _swig_getattr(self, class_type, name):
    return _swig_getattr_nondynamic(self, class_type, name, 0)


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object:
        pass
    _newclass = 0



def retr_edr_variance(len100, len101, len102, len103, len104, len105, len106, len200, len201, len202, len203):
    return _edr.retr_edr_variance(len100, len101, len102, len103, len104, len105, len106, len200, len201, len202, len203)
retr_edr_variance = _edr.retr_edr_variance

def retr_edr_powerspectrum(len300, len301, len302, len303, len304, len305, len306, len307, len308, len400, len401):
    return _edr.retr_edr_powerspectrum(len300, len301, len302, len303, len304, len305, len306, len307, len308, len400, len401)
retr_edr_powerspectrum = _edr.retr_edr_powerspectrum

def retr_edr_2nd_order_structure_function(len500, len501, len502, len503, len504, len505, len506, len507, len600, len601):
    return _edr.retr_edr_2nd_order_structure_function(len500, len501, len502, len503, len504, len505, len506, len507, len600, len601)
retr_edr_2nd_order_structure_function = _edr.retr_edr_2nd_order_structure_function

def retr_edr_3rd_order_structure_function(len500, len501, len502, len503, len504, len505, len506, len507, len600, len601):
    return _edr.retr_edr_3rd_order_structure_function(len500, len501, len502, len503, len504, len505, len506, len507, len600, len601)
retr_edr_3rd_order_structure_function = _edr.retr_edr_3rd_order_structure_function
# This file is compatible with both classic and new-style classes.


