from distutils.core import setup
from distutils.core import Extension
from distutils.command.install import install
from distutils.command.build import build
from distutils.command.build_ext import build_ext
from distutils.sysconfig import get_config_vars

import subprocess
import shutil
import glob
import os
import sys

class build_ext_subclass( build_ext ):
    def build_extensions(self):
        self.compiler.define_macro("PYTHON_MAJOR_VERSION", sys.version_info[0])
        build_ext.build_extensions(self)

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
      py_modules=['quickfix', 'quickfix-ssl',],
      data_files=[('share/quickfix', glob.glob('spec/FIX*.xml'))],
      author='Oren Miller',
      author_email='oren@quickfixengine.org',
      maintainer='Oren Miller',
      maintainer_email='oren@quickfixengine.org',
      description="FIX (Financial Information eXchange) protocol implementation",
      url='http://www.quickfixengine.org',
      download_url='http://www.quickfixengine.org',
      license=license,
      include_dirs=['C++'],
      cmdclass = {'build_ext': build_ext_subclass },
      ext_modules=[Extension('_quickfix', glob.glob('C++/*.cpp'), extra_compile_args=['-std=c++0x', '-Wno-deprecated', '-Wno-unused-variable', '-Wno-deprecated-declarations', '-Wno-maybe-uninitialized'])],
)