------------
INTRODUCTION
------------

This document describes the rudimentary SSL functionality available in QuickFIX. OpenSSL (https://www.openssl.org/) has been used to provide the SSL functionality. The QuickFIX library can be built with OpenSSL or it can be built without OpenSSL support and the classes (files) related to the SSL functionality used directly in the user project.

--------------------------------------
BUILDING QUICKFIX WITH OPENSSL SUPPORT
--------------------------------------

1. Unix

$ ./configure --with-openssl="path to openssl install"

"path to openssl install" dir should have include/openssl and lib directories with appropriate files. If no path is specified, then the default openssl installation is used.

$ make

2. Windows

The Visual Studio project will have to be configured to find the OpenSSL headers and libs.

#define HAVE_SSL 1

will be required in src/config_windows.h

--------------------------------------------------------------
USING SSL FILES WITHOUT BUILDING QUICKFIX WITH OPENSSL SUPPORT
--------------------------------------------------------------

The SSL functionality is contained in the files

ThreadedSSLSocketAcceptor.h
ThreadedSSLSocketAcceptor.cpp
ThreadedSSLSocketInitiator.h
ThreadedSSLSocketInitiator.cpp
ThreadedSSLSocketConnection.h
ThreadedSSLSocketConnection.cpp
UtilitySSL.h
UtilitySSL.cpp

These files can be directly incorporated in the a project. HAVE_SSL will have to be defined in addition to other OpenSSL related configuration.

--------------
SSL PARAMETERS
--------------

Parameters have to be defined in the DEFAULT section of the ini file.

SSL config for acceptor:

[DEFAULT]

#This directive points to the PEM-encoded Certificate file and
#optionally also to the corresponding RSA or DSA Private Key file for it
#(contained in the same file).

ServerCertificateFile=

#This directive points to the PEM-encoded Private Key file. If
#the Private Key is not combined with the Certificate in the
#server certificate file, use this additional directive to point to the file with
#the stand-alone Private Key.

ServerCertificateKeyFile=

#This directive sets the Certificate verification level. It applies to the authentication process used in the
#standard SSL handshake when a connection is established. 0 implies do not verify. 1 implies verify.

VerifyLevel=

#This directive sets the all-in-one file where you can assemble the
#Certificates of Certification Authorities (CA) whose clients you deal with.

CertificationAuthoritiesFile=

#This directive sets the directory where you keep the Certificates of
#Certification Authorities (CAs) whose clients you deal with.

CertificationAuthoritiesDirectory=

#This directive sets the all-in-one file where you can assemble the
#Certificate Revocation Lists (CRL) of Certification Authorities (CA) whose
#clients you deal with.

CertificateRevocationListFile=

#This directive sets the directory where you keep the Certificate Revocation
#Lists (CRL) of Certification Authorities (CAs) whose clients you deal with.

CertificateRevocationListDirectory=


SSL config for initiator:

[DEFAULT]

#This directive points to the PEM-encoded Certificate file and
#optionally also to the corresponding RSA or DSA Private Key file for it
#(contained in the same file).

ClientCertificateFile=

#This directive points to the PEM-encoded Private Key file. If
#the Private Key is not combined with the Certificate in the
#server certificate file, use this additional directive to point to the file with
#the stand-alone Private Key.

ClientCertificateKeyFile=

#This directive sets the Certificate verification level. It applies to the authentication process used in the
#standard SSL handshake when a connection is established. 0 implies do not verify. 1 implies verify.

VerifyLevel=

#This directive sets the all-in-one file where you can assemble the
#Certificates of Certification Authorities (CA) whose clients you deal with.

CertificationAuthoritiesFile=

#This directive sets the directory where you keep the Certificates of
#Certification Authorities (CAs) whose clients you deal with.

CertificationAuthoritiesDirectory=

#This directive sets the all-in-one file where you can assemble the
#Certificate Revocation Lists (CRL) of Certification Authorities (CA) whose
#clients you deal with.

CertificateRevocationListFile=

#This directive sets the directory where you keep the Certificate Revocation
#Lists (CRL) of Certification Authorities (CAs) whose clients you deal with.

CertificateRevocationListDirectory=

# This directive can be used to control the SSL protocol flavors the application
# should use when establishing its environment.
#
# The available (case-insensitive) protocols are:
#
# SSLv2
#
#  This is the Secure Sockets Layer (SSL) protocol, version 2.0. It is the
#  original SSL protocol as designed by Netscape Corporation.
#
# SSLv3
#
#  This is the Secure Sockets Layer (SSL) protocol, version 3.0. It is the
#  successor to SSLv2 and the currently (as of February 1999) de-facto
#  standardized SSL protocol from Netscape Corporation. It's supported by
#  almost all popular browsers.
#
# TLSv1
#
#  This is the Transport Layer Security (TLS) protocol, version 1.0.
#
# TLSv1_1
#
#  This is the Transport Layer Security (TLS) protocol, version 1.1.
#
# TLSv1_2
#
#  This is the Transport Layer Security (TLS) protocol, version 1.2.
#
# all
#
#  This is a shortcut for `+SSLv2 +SSLv3 +TLSv1 +TLSv1_1 +TLSv1_2' and a convenient way for
#  enabling all protocols except one when used in combination with the minus
#  sign on a protocol as the example above shows.
#
# Example:
#
#  enable all but not SSLv2
#  SSLProtocol = all -SSLv2
#
# `all -SSLv2` is the default value when the parameter is not specified.

SSLProtocol=

# This complex directive uses a colon-separated cipher-spec string consisting
# of OpenSSL cipher specifications to configure the Cipher Suite the client is
# permitted to negotiate in the SSL handshake phase. Notice that this directive
# can be used both in per-server and per-directory context. In per-server
# context it applies to the standard SSL handshake when a connection is
# established. In per-directory context it forces a SSL renegotation with the
# reconfigured Cipher Suite after the HTTP request was read but before the HTTP
# response is sent.
#
# An SSL cipher specification in cipher-spec is composed of 4 major attributes
# plus a few extra minor ones:
#
# Key Exchange Algorithm:
#  RSA or Diffie-Hellman variants.
#
# Authentication Algorithm:
#  RSA, Diffie-Hellman, DSS or none.
#
# Cipher/Encryption Algorithm:
#  DES, Triple-DES, RC4, RC2, IDEA or none.
#
# MAC Digest Algorithm:
#  MD5, SHA or SHA1.
#
# For more details refer to mod_ssl documentation.
#
# Example: RC4+RSA:+HIGH:

SSLCipherSuite=

-------------
EXAMPLE USAGE
-------------

Acceptor:

  try
  {
    FIX::SessionSettings settings( file );

    Application application;
    FIX::FileStoreFactory storeFactory( settings );
    FIX::ScreenLogFactory logFactory( settings );
    FIX::ThreadedSSLSocketAcceptor acceptor( application, storeFactory, settings, logFactory );

    acceptor.start();
    wait();
    acceptor.stop();
    return 0;
  }
  catch (const std::exception & e )
  {
    std::cout << e.what() << std::endl;
    return 1;
  }
  
Initiator:

  try
  {
    FIX::SessionSettings settings( file );

    Application application;
    FIX::FileStoreFactory storeFactory( settings );
    FIX::ScreenLogFactory logFactory( settings );
    FIX::ThreadedSSLSocketInitiator initiator( application, storeFactory, settings, logFactory );

    initiator.start();
    application.run();
    initiator.stop();
    
    return 0;
  }
  catch ( std::exception & e )
  {
    std::cout << e.what();
    return 1;
  }
  

If the server or client certficate key is password protected, than the password can be set by the method

  void setPassword(const std::string & pwd);
  
There are sample SSL certificates in the sub-directory bin/cfg/certs/.
  
----------
CONCLUSION
----------

Since this is the first implementation of OpenSSL support the users are requested to let the developer know about bugs/problems and missing implementation.
