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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#if (HAVE_SSL > 0)

#include "Utility.h"

#ifndef _MSC_VER
#include <dirent.h>
#else
#include "dirent_windows.h"
#endif

#include "openssl/err.h"
#include "openssl/ssl.h" // SSL and SSL_CTX for SSL connections

#ifndef FIX_UTILITY_SSL_H
#define FIX_UTILITY_SSL_H

namespace FIX {

#if defined(_MSC_VER)

#define snprintf _snprintf

static const char *WSAErrString(int code)
/********************************************************************************
* Translate WSA error code to message string (abreviated)
* Returns: pointer to static string.
*/
{
#define expand(x)                                                              \
  { x, #x }
  static struct {
    int code;
    const char *s;
  } tab[] = { expand(WSAEINTR),
              expand(WSAEBADF),
              expand(WSAEACCES),
              expand(WSAEFAULT),
              expand(WSAEINVAL),
              expand(WSAEMFILE),
              expand(WSAEWOULDBLOCK),
              expand(WSAEINPROGRESS),
              expand(WSAEALREADY),
              expand(WSAENOTSOCK),
              expand(WSAEDESTADDRREQ),
              expand(WSAEMSGSIZE),
              expand(WSAEPROTOTYPE),
              expand(WSAENOPROTOOPT),
              expand(WSAEPROTONOSUPPORT),
              expand(WSAESOCKTNOSUPPORT),
              expand(WSAEOPNOTSUPP),
              expand(WSAEPFNOSUPPORT),
              expand(WSAEAFNOSUPPORT),
              expand(WSAEADDRINUSE),
              expand(WSAEADDRNOTAVAIL),
              expand(WSAENETDOWN),
              expand(WSAENETUNREACH),
              expand(WSAENETRESET),
              expand(WSAECONNABORTED),
              expand(WSAECONNRESET),
              expand(WSAENOBUFS),
              expand(WSAEISCONN),
              expand(WSAENOTCONN),
              expand(WSAESHUTDOWN),
              expand(WSAETOOMANYREFS),
              expand(WSAETIMEDOUT),
              expand(WSAECONNREFUSED),
              expand(WSAELOOP),
              expand(WSAENAMETOOLONG),
              expand(WSAEHOSTDOWN),
              expand(WSAEHOSTUNREACH),
              expand(WSAENOTEMPTY),
              expand(WSAEPROCLIM),
              expand(WSAEUSERS),
              expand(WSAEDQUOT),
              expand(WSAESTALE),
              expand(WSAEREMOTE),
              { -1, "" } };
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

int caListX509NameCmp(const X509_NAME * const *a, const X509_NAME * const *b);
STACK_OF(X509_NAME) * findCAList(const char *cpCAfile, const char *cpCApath);
int lookupX509Store(X509_STORE *pStore, int nType, X509_NAME *pName,
                    X509_OBJECT *pObj);
int callbackVerify(int ok, X509_STORE_CTX *ctx);
int callbackVerifyCRL(int ok, X509_STORE_CTX *ctx, X509_STORE *revStore);

char *strCat(const char *a, ...);
}

// define certificate algorithm type
#define SSL_ALGO_UNKNOWN 0
#define SSL_ALGO_RSA 1
#define SSL_ALGO_DSA 2
#define SSL_ALGO_ALL (SSL_ALGO_RSA | SSL_ALGO_DSA)

// Should always call ssl_init/ssl_term.

void ssl_init();

void ssl_term();

void ssl_socket_close(int socket, SSL *ssl);

const char *socket_error(char *tempbuf, int buflen);

int typeofSSLAlgo(X509 *pCert, EVP_PKEY *pKey);
}

#endif

#endif
