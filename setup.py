from distutils.core import setup
from distutils.core import Extension
from distutils.sysconfig import get_config_vars

import glob
import sys


# Remove the "-Wstrict-prototypes" compiler option, which isn't valid for C++.
import distutils.sysconfig
cfg_vars = distutils.sysconfig.get_config_vars()
for key, value in cfg_vars.items():
    if type(value) == str:
        cfg_vars[key] = value.replace("-Wstrict-prototypes", "")
        
long_description=''
with open('LICENSE') as file:
    license = file.read();

setup(name='quickfix-ssl',
      version='1.15.1',
      py_modules=['src/python/quickfix',],
      data_files=[('share/quickfix', glob.glob('spec/FIX*.xml'))],
      author='Oren Miller',
      author_email='oren@quickfixengine.org',
      maintainer='Oren Miller',
      maintainer_email='oren@quickfixengine.org',
      description="FIX (Financial Information eXchange) protocol implementation",
      url='http://www.quickfixengine.org',
      download_url='http://www.quickfixengine.org',
      license=license,
      include_dirs=['src/C++', 'src/python', 'src/python2', 'src/python3'],
      ext_modules=[Extension('_quickfix', glob.glob('src/C++/*.cpp'), extra_compile_args=['-std=c++0x', '-Wno-deprecated', '-Wno-unused-variable', '-Wno-deprecated-declarations', '-Wno-maybe-uninitialized'])],
)
