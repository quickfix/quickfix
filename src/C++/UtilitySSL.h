/* Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* ====================================================================
 * Copyright (c) 1998-2006 Ralf S. Engelschall. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials
 *    provided with the distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by
 *     Ralf S. Engelschall <rse@engelschall.com> for use in the
 *     mod_ssl project (http://www.modssl.org/)."
 *
 * 4. The names "mod_ssl" must not be used to endorse or promote
 *    products derived from this software without prior written
 *    permission. For written permission, please contact
 *    rse@engelschall.com.
 *
 * 5. Products derived from this software may not be called "mod_ssl"
 *    nor may "mod_ssl" appear in their names without prior
 *    written permission of Ralf S. Engelschall.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by
 *     Ralf S. Engelschall <rse@engelschall.com> for use in the
 *     mod_ssl project (http://www.modssl.org/)."
 *
 * THIS SOFTWARE IS PROVIDED BY RALF S. ENGELSCHALL ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL RALF S. ENGELSCHALL OR
 * HIS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 */

/* ====================================================================
 * Copyright (c) 1995-1999 Ben Laurie. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by Ben Laurie
 *    for use in the Apache-SSL HTTP server project."
 *
 * 4. The name "Apache-SSL Server" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission.
 *
 * 5. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by Ben Laurie
 *    for use in the Apache-SSL HTTP server project."
 *
 * THIS SOFTWARE IS PROVIDED BY BEN LAURIE ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL BEN LAURIE OR
 * HIS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 */

#ifndef FIX_UTILITY_SSL_H
#define FIX_UTILITY_SSL_H

#if (HAVE_SSL > 0)

#include "Log.h"
#include "SessionSettings.h"
#include "Utility.h"

#ifndef _MSC_VER
#include <dirent.h>
#else
#ifndef HAVE_ACE_DIRENT
#include "dirent_windows.h"
#else
#include "ace/OS_NS_dirent.h"
#endif
#endif

#include "openssl/err.h"
#include "openssl/ssl.h" // SSL and SSL_CTX for SSL connections

namespace FIX
{

#if defined(_MSC_VER)

#define snprintf _snprintf

static const char *WSAErrString(int code)
/********************************************************************************
* Translate WSA error code to message string (abreviated)
* Returns: pointer to static string.
*/
{
#define expand(x)                                                              \
  {                                                                            \
    x, #x                                                                      \
  }
  static struct
  {
    int code;
    const char *s;
  } tab[] = {expand(WSAEINTR),           expand(WSAEBADF),
             expand(WSAEACCES),          expand(WSAEFAULT),
             expand(WSAEINVAL),          expand(WSAEMFILE),
             expand(WSAEWOULDBLOCK),     expand(WSAEINPROGRESS),
             expand(WSAEALREADY),        expand(WSAENOTSOCK),
             expand(WSAEDESTADDRREQ),    expand(WSAEMSGSIZE),
             expand(WSAEPROTOTYPE),      expand(WSAENOPROTOOPT),
             expand(WSAEPROTONOSUPPORT), expand(WSAESOCKTNOSUPPORT),
             expand(WSAEOPNOTSUPP),      expand(WSAEPFNOSUPPORT),
             expand(WSAEAFNOSUPPORT),    expand(WSAEADDRINUSE),
             expand(WSAEADDRNOTAVAIL),   expand(WSAENETDOWN),
             expand(WSAENETUNREACH),     expand(WSAENETRESET),
             expand(WSAECONNABORTED),    expand(WSAECONNRESET),
             expand(WSAENOBUFS),         expand(WSAEISCONN),
             expand(WSAENOTCONN),        expand(WSAESHUTDOWN),
             expand(WSAETOOMANYREFS),    expand(WSAETIMEDOUT),
             expand(WSAECONNREFUSED),    expand(WSAELOOP),
             expand(WSAENAMETOOLONG),    expand(WSAEHOSTDOWN),
             expand(WSAEHOSTUNREACH),    expand(WSAENOTEMPTY),
             expand(WSAEPROCLIM),        expand(WSAEUSERS),
             expand(WSAEDQUOT),          expand(WSAESTALE),
             expand(WSAEREMOTE),         {-1, ""}};
  int i;

  for (i = 0; tab[i].code > 0; i++)
    if (code == tab[i].code)
      return tab[i].s;

  return "Unknown error code";
}

#define SLASH "\\"
#define SUFFIX "*"

#else

#define SLASH "/"

#endif

// Callback functions
extern "C" {
typedef int (*passPhraseHandleCallbackType)(char *, int, int, void *);

int caListX509NameCmp(const X509_NAME *const *a, const X509_NAME *const *b);
STACK_OF(X509_NAME) * findCAList(const char *cpCAfile, const char *cpCApath);
int lookupX509Store(X509_STORE *pStore, int nType, X509_NAME *pName,
                    X509_OBJECT *pObj);
int callbackVerify(int ok, X509_STORE_CTX *ctx);
int callbackVerifyCRL(int ok, X509_STORE_CTX *ctx, X509_STORE *revStore);
X509_STORE *createX509Store(const char *cpFile, const char *cpPath);
X509 *readX509(FILE *fp, X509 **x509, passPhraseHandleCallbackType cb);
EVP_PKEY *readPrivateKey(FILE *fp, EVP_PKEY **key,
                         passPhraseHandleCallbackType cb);

char *strCat(const char *a, ...);
}

int setSocketNonBlocking(socket_handle pSocket);

// define certificate algorithm type
#define SSL_ALGO_UNKNOWN 0
#define SSL_ALGO_RSA 1
#define SSL_ALGO_DSA 2
#define SSL_ALGO_ALL (SSL_ALGO_RSA | SSL_ALGO_DSA)

/*
 * Define the SSL Protocol options
 */
#define SSL_PROTOCOL_NONE (0)
#define SSL_PROTOCOL_SSLV2 (1 << 0)
#define SSL_PROTOCOL_SSLV3 (1 << 1)
#define SSL_PROTOCOL_TLSV1 (1 << 2)
#define SSL_PROTOCOL_TLSV1_1 (1 << 3)
#define SSL_PROTOCOL_TLSV1_2 (1 << 4)
#define SSL_PROTOCOL_ALL                                                       \
  (SSL_PROTOCOL_SSLV2 | SSL_PROTOCOL_SSLV3 | SSL_PROTOCOL_TLSV1 |              \
   SSL_PROTOCOL_TLSV1_1 | SSL_PROTOCOL_TLSV1_2)

typedef enum {
  SSL_CLIENT_VERIFY_NONE = 0,
  SSL_CLIENT_VERIFY_REQUIRE = 1,
  SSL_CLIENT_VERIFY_OPTIONAL = 2,
  SSL_CLIENT_VERIFY_NOTSET = 3
} SSLVerifyClient;

// Should always call ssl_init/ssl_term.

void ssl_init();

void ssl_term();

void ssl_socket_close(socket_handle socket, SSL *ssl);

const char *socket_error(char *tempbuf, int buflen);

int typeofSSLAlgo(X509 *pCert, EVP_PKEY *pKey);

long protocolOptions(const char *opt);

void setCtxOptions(SSL_CTX *ctx, long options);

int enable_DH_ECDH(SSL_CTX *ctx, const char *certFile);

SSL_CTX *createSSLContext(bool server, const SessionSettings &settings,
                          std::string &errStr);

bool loadSSLCert(SSL_CTX *ctx, bool server, const SessionSettings &settings,
                 Log *log, passPhraseHandleCallbackType cb, void* passwordCallbackParam,
                 std::string &errStr);

bool loadCAInfo(SSL_CTX *ctx, bool server, const SessionSettings &settings,
                Log *log, std::string &errStr, int &verifyLevel);

X509_STORE *loadCRLInfo(SSL_CTX *ctx, const SessionSettings &settings, Log *log,
                        std::string &errStr);

int acceptSSLConnection(socket_handle socket, SSL * ssl, Log * log, int verify);
}

#endif

#endif
