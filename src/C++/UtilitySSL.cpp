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

#include <iostream>
#include <vector>

#include "UtilitySSL.h"
#include "Mutex.h"

//#include "openssl/applink.c" // To prevent crashing (see the OpenSSL FAQ)

#include "openssl/bio.h" // BIO objects for I/O
#include "openssl/err.h" // Error reporting
#include "openssl/crypto.h"
#include "openssl/rand.h"
#ifndef OPENSSL_NO_DH
# include <openssl/dh.h>
#endif

#ifdef _MSC_VER

#if !defined(strcasecmp )
#define strcasecmp  _stricmp
#endif

# if !defined(strncasecmp)
#define strncasecmp  _strnicmp
#endif

#endif

namespace FIX {

#ifndef OPENSSL_NO_DH
static unsigned char dh2048_p[] = {
  0xF6,0x42,0x57,0xB7,0x08,0x7F,0x08,0x17,0x72,0xA2,0xBA,0xD6,
  0xA9,0x42,0xF3,0x05,0xE8,0xF9,0x53,0x11,0x39,0x4F,0xB6,0xF1,
  0x6E,0xB9,0x4B,0x38,0x20,0xDA,0x01,0xA7,0x56,0xA3,0x14,0xE9,
  0x8F,0x40,0x55,0xF3,0xD0,0x07,0xC6,0xCB,0x43,0xA9,0x94,0xAD,
  0xF7,0x4C,0x64,0x86,0x49,0xF8,0x0C,0x83,0xBD,0x65,0xE9,0x17,
  0xD4,0xA1,0xD3,0x50,0xF8,0xF5,0x59,0x5F,0xDC,0x76,0x52,0x4F,
  0x3D,0x3D,0x8D,0xDB,0xCE,0x99,0xE1,0x57,0x92,0x59,0xCD,0xFD,
  0xB8,0xAE,0x74,0x4F,0xC5,0xFC,0x76,0xBC,0x83,0xC5,0x47,0x30,
  0x61,0xCE,0x7C,0xC9,0x66,0xFF,0x15,0xF9,0xBB,0xFD,0x91,0x5E,
  0xC7,0x01,0xAA,0xD3,0x5B,0x9E,0x8D,0xA0,0xA5,0x72,0x3A,0xD4,
  0x1A,0xF0,0xBF,0x46,0x00,0x58,0x2B,0xE5,0xF4,0x88,0xFD,0x58,
  0x4E,0x49,0xDB,0xCD,0x20,0xB4,0x9D,0xE4,0x91,0x07,0x36,0x6B,
  0x33,0x6C,0x38,0x0D,0x45,0x1D,0x0F,0x7C,0x88,0xB3,0x1C,0x7C,
  0x5B,0x2D,0x8E,0xF6,0xF3,0xC9,0x23,0xC0,0x43,0xF0,0xA5,0x5B,
  0x18,0x8D,0x8E,0xBB,0x55,0x8C,0xB8,0x5D,0x38,0xD3,0x34,0xFD,
  0x7C,0x17,0x57,0x43,0xA3,0x1D,0x18,0x6C,0xDE,0x33,0x21,0x2C,
  0xB5,0x2A,0xFF,0x3C,0xE1,0xB1,0x29,0x40,0x18,0x11,0x8D,0x7C,
  0x84,0xA7,0x0A,0x72,0xD6,0x86,0xC4,0x03,0x19,0xC8,0x07,0x29,
  0x7A,0xCA,0x95,0x0C,0xD9,0x96,0x9F,0xAB,0xD0,0x0A,0x50,0x9B,
  0x02,0x46,0xD3,0x08,0x3D,0x66,0xA4,0x5D,0x41,0x9F,0x9C,0x7C,
  0xBD,0x89,0x4B,0x22,0x19,0x26,0xBA,0xAB,0xA2,0x5E,0xC3,0x55,
  0xE9,0x32,0x0B,0x3B,
};

static unsigned char dh2048_g[] = {
  0x02,
};

DH *get_dh2048()
{
  DH *dh;

  if ((dh = DH_new()) == NULL)
    return NULL;
  dh->p=BN_bin2bn(dh2048_p, sizeof(dh2048_p), NULL);
  dh->g=BN_bin2bn(dh2048_g, sizeof(dh2048_g), NULL);
  if (dh->p == NULL || dh->g == NULL) {
    DH_free(dh);
    return NULL;
  }
  return dh;
}

static DH *load_dh_param(const char *dhfile)
{
  DH *ret = NULL;
  BIO *bio;

  if ((bio = BIO_new_file(dhfile, "r")) == NULL)
    goto err;
  ret = PEM_read_bio_DHparams(bio, NULL, NULL, NULL);
err:
  if (bio != NULL)
    BIO_free(bio);
  return (ret);
}
#endif

/* Mutex to protect ssl init and terminate */
static Mutex ssl_mutex;
/* Reference count of ssl users. Should always call ssl_init/ssl_term */
static int ssl_users = 0;
static int ssl_initialized = 0;
/* This array will store all of the mutexes available to OpenSSL. */
#ifdef _MSC_VER
static HANDLE *lock_cs = 0;
#else
static pthread_mutex_t *lock_cs = 0;
#endif

static void thread_setup(void); // For thread safety.
static void thread_cleanup(void);
static void ssl_rand_seed(void);

void ssl_init() {

  Locker locker(ssl_mutex);
  ++ssl_users;

  thread_setup();

  if (ssl_initialized)
    return;

  CRYPTO_malloc_init();     // Initialize malloc, free, etc for OpenSSL's use
  SSL_library_init();       // Initialize OpenSSL's SSL libraries
  SSL_load_error_strings(); // Load SSL error strings
  ERR_load_BIO_strings();   // Load BIO error strings
  OpenSSL_add_all_algorithms(); // Load all available encryption algorithms

  ssl_rand_seed();

  ssl_initialized = 1;

  return;
}

void ssl_term() {

  Locker locker(ssl_mutex);
  --ssl_users;

  if (ssl_users > 0)
    return;

  thread_cleanup();
}

void ssl_socket_close(int socket, SSL *ssl) {

  if (ssl == 0) {
    socket_close(socket);
    return;
  }

  int i;
  int rc = 0;

  for (i = 0; i < 4; i++) {
    if ((rc = SSL_shutdown(ssl)) == 1)
      break;
  }
}

static void locking_callback(int mode, int type, const char *file, int line) {
#ifdef _MSC_VER
  if (mode & CRYPTO_LOCK)
    WaitForSingleObject(lock_cs[type], INFINITE);
  else
    ReleaseMutex(lock_cs[type]);
#else
  if (mode & CRYPTO_LOCK)
    pthread_mutex_lock(&(lock_cs[type]));
  else
    pthread_mutex_unlock(&(lock_cs[type]));
#endif
}

static unsigned long thread_id_func() {
#ifdef _MSC_VER
  return (unsigned)GetCurrentThread();
#else
  return (unsigned long)pthread_self();
#endif
}

static void thread_setup(void) {

  if (lock_cs != 0)
    return;

  int i;
#ifdef _MSC_VER
  lock_cs = (HANDLE *)OPENSSL_malloc(CRYPTO_num_locks() * sizeof(HANDLE));
  for (i = 0; i < CRYPTO_num_locks(); i++)
    lock_cs[i] = CreateMutex(0, FALSE, 0);
#else
  lock_cs = (pthread_mutex_t *)OPENSSL_malloc(CRYPTO_num_locks() *
                                              sizeof(pthread_mutex_t));
  for (i = 0; i < CRYPTO_num_locks(); i++) {
    pthread_mutex_init(&(lock_cs[i]), 0);
  }
#endif

#ifndef _MSC_VER
  CRYPTO_set_id_callback((unsigned long (*)(void))thread_id_func);
#endif
  CRYPTO_set_locking_callback(
      (void (*)(int, int, const char *, int))locking_callback);
}

static void thread_cleanup(void) {

  if (lock_cs == 0)
    return;

#ifndef _MSC_VER
  CRYPTO_set_id_callback(0);
#endif
  CRYPTO_set_locking_callback(0);

  int i;
#ifdef _MSC_VER
  for (i = 0; i < CRYPTO_num_locks(); i++)
    CloseHandle(lock_cs[i]);
  OPENSSL_free(lock_cs);
#else
  for (i = 0; i < CRYPTO_num_locks(); i++)
    pthread_mutex_destroy(&(lock_cs[i]));
  OPENSSL_free(lock_cs);
#endif

  lock_cs = 0;
}

static int ssl_rand_choose_num(int l, int h) {
  int i;
  char buf[50];

  srand((unsigned int)time(0));
  snprintf(buf, sizeof(buf), "%.0f",
           (((double)(rand() % RAND_MAX) / RAND_MAX) * (h - l)));
  buf[sizeof(buf) - 1] = 0;
  i = atoi(buf) + 1;
  if (i < l)
    i = l;
  if (i > h)
    i = h;
  return i;
}

static void ssl_rand_seed(void) {
#ifdef _MSC_VER
  int pid;
#else
  pid_t pid;
#endif
  int n, l;
  unsigned char stackdata[256];
  time_t t = time(0);

  /*
  * seed in the current time (usually just 4 bytes)
  */
  l = sizeof(time_t);
  RAND_seed((unsigned char *)&t, l);
  /*
  * seed in the current process id (usually just 4 bytes)
  */
  pid = getpid();
  l = sizeof(pid);
  RAND_seed((unsigned char *)&pid, l);
  /*
  * seed in some current state of the run-time stack (128 bytes)
  */
  n = ssl_rand_choose_num(0, sizeof(stackdata) - 128 - 1);
  RAND_seed(stackdata + n, 128);
}

const char *socket_error(char *tempbuf, int buflen) {
#ifdef _MSC_VER
  int code = WSAGetLastError();
  snprintf(tempbuf, buflen, "%s(%d)", WSAErrString(code), code);
#else /* UNIX */
  snprintf(tempbuf, buflen, "%s(errno=%d)", strerror(errno), errno);
#endif
  tempbuf[buflen - 1] = 0;

  return tempbuf;
}

int caListX509NameCmp(const X509_NAME *const *a, const X509_NAME *const *b) {
  return (X509_NAME_cmp(*a, *b));
}

int lookupX509Store(X509_STORE *pStore, int nType, X509_NAME *pName,
                    X509_OBJECT *pObj) {
  X509_STORE_CTX pStoreCtx;
  int rc;

  X509_STORE_CTX_init(&pStoreCtx, pStore, 0, 0);
  rc = X509_STORE_get_by_subject(&pStoreCtx, nType, pName, pObj);
  X509_STORE_CTX_cleanup(&pStoreCtx);
  return rc;
}

int callbackVerifyCRL(int ok, X509_STORE_CTX *ctx, X509_STORE *revStore) {
  X509_OBJECT obj;
  X509_NAME *subject;
  X509_NAME *issuer;
  X509 *xs;
  X509_CRL *crl;
  X509_REVOKED *revoked;
  long serial;
  BIO *bio;
  int i, n, rc;
  char *cp;
  char *cp2;

  if (revStore == 0)
    return ok;

  /*
   * Determine certificate ingredients in advance
   */
  xs = X509_STORE_CTX_get_current_cert(ctx);
  subject = X509_get_subject_name(xs);
  issuer = X509_get_issuer_name(xs);

  /*
   * Try to retrieve a CRL corresponding to the _subject_ of
   * the current certificate in order to verify it's integrity.
   */
  memset((char *)&obj, 0, sizeof(obj));
  rc = lookupX509Store(revStore, X509_LU_CRL, subject, &obj);
  crl = obj.data.crl;
  if (rc > 0 && crl != 0) {
    bio = BIO_new(BIO_s_mem());
    BIO_printf(bio, "lastUpdate: ");
    ASN1_UTCTIME_print(bio, X509_CRL_get_lastUpdate(crl));
    BIO_printf(bio, ", nextUpdate: ");
    ASN1_UTCTIME_print(bio, X509_CRL_get_nextUpdate(crl));
    n = BIO_pending(bio);
    cp = (char *)malloc(n + 1);
    n = BIO_read(bio, cp, n);
    cp[n] = 0;
    BIO_free(bio);
    cp2 = X509_NAME_oneline(subject, NULL, 0);
    printf("CA CRL: Issuer: %s, %s\n", cp2, cp);
    free(cp2);
    free(cp);

    /*
     * Verify the signature on this CRL
     */
    if (X509_CRL_verify(crl, X509_get_pubkey(xs)) <= 0) {
      printf("Invalid signature on CRL\n");
      X509_STORE_CTX_set_error(ctx, X509_V_ERR_CRL_SIGNATURE_FAILURE);
      X509_OBJECT_free_contents(&obj);
      return 0;
    }

    /*
     * Check date of CRL to make sure it's not expired
     */
    i = X509_cmp_current_time(X509_CRL_get_nextUpdate(crl));
    if (i == 0) {
      printf("Found CRL has invalid nextUpdate field\n");
      X509_STORE_CTX_set_error(ctx, X509_V_ERR_ERROR_IN_CRL_NEXT_UPDATE_FIELD);
      X509_OBJECT_free_contents(&obj);
      return 0;
    }
    if (i < 0) {
      printf("Found CRL is expired - revoking all certificates until you get "
             "updated CRL\n");
      X509_STORE_CTX_set_error(ctx, X509_V_ERR_CRL_HAS_EXPIRED);
      X509_OBJECT_free_contents(&obj);
      return false;
    }
    X509_OBJECT_free_contents(&obj);
  }

  /*
   * Try to retrieve a CRL corresponding to the _issuer_ of
   * the current certificate in order to check for revocation.
   */
  memset((char *)&obj, 0, sizeof(obj));
  rc = lookupX509Store(revStore, X509_LU_CRL, issuer, &obj);
  crl = obj.data.crl;
  if (rc > 0 && crl != NULL) {
    /*
     * Check if the current certificate is revoked by this CRL
     */
    n = sk_X509_REVOKED_num(X509_CRL_get_REVOKED(crl));
    for (i = 0; i < n; i++) {
      revoked = sk_X509_REVOKED_value(X509_CRL_get_REVOKED(crl), i);
      if (ASN1_INTEGER_cmp(revoked->serialNumber, X509_get_serialNumber(xs)) ==
          0) {
        serial = ASN1_INTEGER_get(revoked->serialNumber);
        cp = X509_NAME_oneline(issuer, NULL, 0);
        printf("Certificate with serial %ld (0x%lX) revoked per CRL from "
               "issuer %s\n",
               serial, serial, cp);
        free(cp);
        X509_STORE_CTX_set_error(ctx, X509_V_ERR_CERT_REVOKED);
        X509_OBJECT_free_contents(&obj);
        return 0;
      }
    }
    X509_OBJECT_free_contents(&obj);
  }
  return ok;
}

int callbackVerify(int ok, X509_STORE_CTX *ctx) {
  X509 *xs;
  int errnum;
  int errdepth;
  char *cp;
  char *cp2;

  /*
   * Get verify ingredients
   */
  xs = X509_STORE_CTX_get_current_cert(ctx);
  errnum = X509_STORE_CTX_get_error(ctx);
  errdepth = X509_STORE_CTX_get_error_depth(ctx);

  /*
   * Log verification information
   */
  cp = X509_NAME_oneline(X509_get_subject_name(xs), NULL, 0);
  cp2 = X509_NAME_oneline(X509_get_issuer_name(xs), NULL, 0);
  printf("Certificate Verification: depth: %d, subject: %s, issuer: %s\n",
         errdepth, cp != NULL ? cp : "-unknown-",
         cp2 != NULL ? cp2 : "-unknown");

  if (cp)
    free(cp);
  if (cp2)
    free(cp2);

  /*
   * Additionally perform CRL-based revocation checks
   */
  if (ok) {
    SSL *ssl = (SSL *)X509_STORE_CTX_get_app_data(ctx);
    X509_STORE *revStore = (X509_STORE *)SSL_get_app_data(ssl);
    ok = callbackVerifyCRL(ok, ctx, revStore);
    if (!ok)
      errnum = X509_STORE_CTX_get_error(ctx);
  }

  /*
   * If we already know it's not ok, log the real reason
   */
  if (!ok) {
    printf("Certificate Verification: Error (%d): %s\n", errnum,
           X509_verify_cert_error_string(errnum));
    ERR_print_errors_fp(stderr);
  }

  return (ok);
}

int typeofSSLAlgo(X509 *pCert, EVP_PKEY *pKey) {

  int t;

  t = SSL_ALGO_UNKNOWN;
  if (pCert != 0)
    pKey = X509_get_pubkey(pCert);
  if (pKey != 0) {
    switch (EVP_PKEY_type(pKey->type)) {
    case EVP_PKEY_RSA:
      t = SSL_ALGO_RSA;
      break;
    case EVP_PKEY_DSA:
      t = SSL_ALGO_DSA;
      break;
    default:
      break;
    }
  }
  return t;
}

STACK_OF(X509_NAME) * findCAList(const char *cpCAfile, const char *cpCApath) {
  STACK_OF(X509_NAME) * skCAList;
  STACK_OF(X509_NAME) * sk;
  DIR *dir;
  struct dirent *direntry;
  char *cp;
  int n;

  /*
   * Start with a empty stack/list where new
   * entries get added in sorted order.
   */
  skCAList = sk_X509_NAME_new(caListX509NameCmp);

  /*
   * Process CA certificate bundle file
   */
  if (cpCAfile != 0) {
    sk = SSL_load_client_CA_file(cpCAfile);
    for (n = 0; sk != 0 && n < sk_X509_NAME_num(sk); n++) {
      // TODO getLog()->onEvent(std::string("CA certificate: ") +
      // X509_NAME_oneline(sk_X509_NAME_value(sk, n), 0, 0));
      if (sk_X509_NAME_find(skCAList, sk_X509_NAME_value(sk, n)) < 0)
        sk_X509_NAME_push(skCAList, sk_X509_NAME_value(sk, n));
    }
  }

  /*
   * Process CA certificate path files
   */
  if (cpCApath != 0) {
    dir = opendir(cpCApath);
    while ((direntry = readdir(dir)) != 0) {
      cp = strCat(cpCApath, SLASH, direntry->d_name, 0);
      sk = SSL_load_client_CA_file(cp);
      for (n = 0; sk != 0 && n < sk_X509_NAME_num(sk); n++) {
        // TODO getLog()->onEvent(std::string("CA certificate: %s") +
        //           X509_NAME_oneline(sk_X509_NAME_value(sk, n), 0, 0));
        if (sk_X509_NAME_find(skCAList, sk_X509_NAME_value(sk, n)) < 0)
          sk_X509_NAME_push(skCAList, sk_X509_NAME_value(sk, n));
      }
    }
    closedir(dir);
  }

  /*
   * Cleanup
   */
  sk_X509_NAME_set_cmp_func(skCAList, 0);
  return skCAList;
}

char *strCat(const char *a, ...) {
  char *cp, *argp, *res;

  /* Pass one --- find length of required string */

  int len = 0;
  va_list adummy;

  if (a == 0)
    return 0;

  va_start(adummy, a);

  len = strlen(a);
  while ((cp = va_arg(adummy, char *)) != 0)
    len += strlen(cp);

  va_end(adummy);

  /* Allocate the required string */

  res = new char[len + 1];
  cp = res;
  *cp = '\0';

  /* Pass two --- copy the argument strings into the result space */

  va_start(adummy, a);

  strcpy(cp, a);
  cp += strlen(a);
  while ((argp = va_arg(adummy, char *)) != 0) {
    strcpy(cp, argp);
    cp += strlen(argp);
  }

  va_end(adummy);

  /* Return the result string */

  return res;
}

long protocolOptions(const char *opt) {
  long options = SSL_PROTOCOL_NONE, thisopt;
  char action;
  const char *w, *e;

  if (*opt) {
    w = opt;
    e = w + strlen(w);
    while (w && (w < e)) {
      action = '\0';
      while ((*w == ' ') || (*w == '\t'))
        w++;
      if (*w == '+' || *w == '-')
        action = *(w++);

      if (!strncasecmp(w, "SSLv2", 5 /* strlen("SSLv2") */)) {
        thisopt = SSL_PROTOCOL_SSLV2;
        w += 5 /* strlen("SSLv2")*/;
      } else if (!strncasecmp(w, "SSLv3", 5 /* strlen("SSLv3") */)) {
        thisopt = SSL_PROTOCOL_SSLV3;
        w += 5 /*strlen("SSLv3") */;
      } else if (!strncasecmp(w, "TLSv1_1", 7 /* strlen("TLSv1_1") */)) {
        thisopt = SSL_PROTOCOL_TLSV1_1;
        w += 7 /* strlen("TLSv1_1") */;
      } else if (!strncasecmp(w, "TLSv1_2", 7 /* strlen("TLSv1_2") */)) {
        thisopt = SSL_PROTOCOL_TLSV1_2;
        w += 7 /* strlen("TLSv1_2") */;
      } else if (!strncasecmp(w, "TLSv1", 5 /* strlen("TLSv1") */)) {
        thisopt = SSL_PROTOCOL_TLSV1;
        w += 5 /* strlen("TLSv1") */;
      } else if (!strncasecmp(w, "all", 3 /* strlen("all") */)) {
        thisopt = SSL_PROTOCOL_ALL;
        w += 3 /* strlen("all") */;
      } else
        return -1;

      if (action == '-')
        options &= ~thisopt;
      else if (action == '+')
        options |= thisopt;
      else
        options = thisopt;
    }
  } else { /* default all except SSLv2 */
    options = SSL_PROTOCOL_ALL;
    thisopt = SSL_PROTOCOL_SSLV2;
    options &= ~thisopt;
  }

  return options;
}

void setCtxOptions(SSL_CTX *ctx, const char *opt) {
  long options = protocolOptions(opt);

  SSL_CTX_set_options(ctx, SSL_OP_ALL);
  if (!(options & SSL_PROTOCOL_SSLV2))
    SSL_CTX_set_options(ctx, SSL_OP_NO_SSLv2);
  if (!(options & SSL_PROTOCOL_SSLV3))
    SSL_CTX_set_options(ctx, SSL_OP_NO_SSLv3);
  if (!(options & SSL_PROTOCOL_TLSV1))
    SSL_CTX_set_options(ctx, SSL_OP_NO_TLSv1);
  if (!(options & SSL_PROTOCOL_TLSV1_1))
    SSL_CTX_set_options(ctx, SSL_OP_NO_TLSv1_1);
  if (!(options & SSL_PROTOCOL_TLSV1_2))
    SSL_CTX_set_options(ctx, SSL_OP_NO_TLSv1_2);
}

int enable_DH_ECDH(SSL_CTX * ctx, const char * certFile) {
#ifndef OPENSSL_NO_DH
            int no_dhe = 0;
            if (!no_dhe) {
              DH *dh = NULL;

              if (certFile)
                dh = load_dh_param(certFile);

              if (dh != NULL) {
              } else {
                dh = get_dh2048();
                if (dh == NULL) {
                  //ERR_print_errors(bio_err);
                  return 1;
                }
              }
              //(void)BIO_flush(bio_s_out);

              SSL_CTX_set_tmp_dh(ctx, dh);

              DH_free(dh);
            }
#endif

#ifndef OPENSSL_NO_ECDH
    EC_KEY  *ecdh;
    ecdh = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
    if (ecdh == NULL) {
      return 2;
    }
    SSL_CTX_set_tmp_ecdh(ctx, ecdh);
    EC_KEY_free(ecdh);
#endif

    return 0;
}
}

#endif
