from distutils.core import setup, Extension

module1 = Extension('summy',
                    sources = ['summy.c'])

setup (name = 'SummY',
       version = '1.0',
       description = 'This is a demo package',
       ext_modules = [module1])

