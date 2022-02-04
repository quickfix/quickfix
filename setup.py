from __future__ import print_function

from distutils.core import setup
from distutils.core import Extension
from distutils.command.build_ext import build_ext

import glob


class build_ext_subclass( build_ext ):
    def build_extensions(self):
        print("Testing for std::tr1::shared_ptr...")
        try:
            self.compiler.compile(['test_std_tr1_shared_ptr.cpp'])
            self.compiler.define_macro("HAVE_STD_TR1_SHARED_PTR")
            print("...found")
        except:
            print(" ...not found")

        print("Testing for std::shared_ptr...")
        try:
            self.compiler.compile(['test_std_shared_ptr.cpp'],
                                  extra_preargs=['-std=c++0x']),
            self.compiler.define_macro("HAVE_STD_SHARED_PTR")
            print("...found")
        except:
            print("...not found")

        build_ext.build_extensions(self)

long_description = ''
with open('LICENSE') as fp:
    quickfix_license = fp.read()

setup(name='quickfix-ssl',
      version='1.14.3',
      py_modules=['quickfix',],
      data_files=[('share/quickfix', glob.glob('spec/FIX*.xml'))],
      author='Oren Miller',
      author_email='oren@quickfixengine.org',
      maintainer='Oren Miller',
      maintainer_email='oren@quickfixengine.org',
      description="FIX (Financial Information eXchange) protocol implementation",
      url='http://www.quickfixengine.org',
      download_url='http://www.quickfixengine.org',
      license=quickfix_license,
      cmdclass={'build_ext': build_ext_subclass},
      ext_modules=[Extension('_quickfix', glob.glob('C++/*.cpp'), include_dirs=["C++"], extra_compile_args=['-std=c++0x', '-Wno-deprecated', '-Wno-unused-variable', '-Wno-deprecated-declarations', '-Wno-maybe-uninitialized'])],
)
