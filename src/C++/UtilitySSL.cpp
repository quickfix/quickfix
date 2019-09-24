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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#if (HAVE_SSL > 0)

#include <vector>

#include "Mutex.h"
#include "UtilitySSL.h"

//#include "openssl/applink.c" // To prevent crashing (see the OpenSSL FAQ)

#include "openssl/bio.h" // BIO objects for I/O
#include "openssl/bn.h"
#include "openssl/crypto.h"
#include "openssl/err.h" // Error reporting
#include "openssl/rand.h"
#ifndef OPENSSL_NO_DH
#include "openssl/dh.h"
#endif

#ifdef _MSC_VER

#if !defined(strcasecmp)
#define strcasecmp _stricmp
#endif

#if !defined(strncasecmp)
#define strncasecmp _strnicmp
#endif

#endif

namespace FIX
{

#ifndef OPENSSL_NO_DH
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

#if (OPENSSL_VERSION_NUMBER < 0x10100000L)
/* OpenSSL Pre-1.1.0 compatibility */
/* Taken from OpenSSL 1.1.0 snapshot 20160410 */
static int DH_set0_pqg(DH *dh, BIGNUM *p, BIGNUM *q, BIGNUM *g)
{
  /* q is optional */
  if (p == NULL || g == NULL)
    return 0;
  BN_free(dh->p);
  BN_free(dh->q);
  BN_free(dh->g);
  dh->p = p;
  dh->q = q;
  dh->g = g;

  if (q != NULL)
  {
    dh->length = BN_num_bits(q);
  }

  return 1;
}
#endif

/*
 * Grab well-defined DH parameters from OpenSSL, see the BN_get_rfc*
 * functions in <openssl/bn.h> for all available primes.
 */
static DH *make_dh_params(BIGNUM *(*prime)(BIGNUM *))
{
  DH *dh = DH_new();
  BIGNUM *p, *g;

  if (!dh)
  {
    return NULL;
  }
  p = prime(NULL);
  g = BN_new();
  if (g != NULL)
  {
    BN_set_word(g, 2);
  }
  if (!p || !g || !DH_set0_pqg(dh, p, NULL, g))
  {
    DH_free(dh);
    BN_free(p);
    BN_free(g);
    return NULL;
  }
  return dh;
}

/* Storage and initialization for DH parameters. */
static struct dhparam
{
  BIGNUM *(*const prime)(BIGNUM *); /* function to generate... */
  DH *dh;                           /* ...this, used for keys.... */
  const unsigned int min;           /* ...of length >= this. */
} dhparams[] = {
    {get_rfc3526_prime_8192, NULL, 6145}, {get_rfc3526_prime_6144, NULL, 4097},
    {get_rfc3526_prime_4096, NULL, 3073}, {get_rfc3526_prime_3072, NULL, 2049},
    {get_rfc3526_prime_2048, NULL, 1025}, {get_rfc2409_prime_1024, NULL, 0}};

static void init_dh_params(void)
{
  unsigned n;

  for (n = 0; n < sizeof(dhparams) / sizeof(dhparams[0]); n++)
    dhparams[n].dh = make_dh_params(dhparams[n].prime);
}

static void free_dh_params(void)
{
  unsigned n;

  /* DH_free() is a noop for a NULL parameter, so these are harmless
   * in the (unexpected) case where these variables are already
   * NULL. */
  for (n = 0; n < sizeof(dhparams) / sizeof(dhparams[0]); n++)
  {
    DH_free(dhparams[n].dh);
    dhparams[n].dh = NULL;
  }
}

/* Hand out the same DH structure though once generated as we leak
 * memory otherwise and freeing the structure up after use would be
 * hard to track and in fact is not needed at all as it is safe to
 * use the same parameters over and over again security wise (in
 * contrast to the keys itself) and code safe as the returned structure
 * is duplicated by OpenSSL anyway. Hence no modification happens
 * to our copy. */
DH *modssl_get_dh_params(unsigned keylen)
{
  unsigned n;

  for (n = 0; n < sizeof(dhparams) / sizeof(dhparams[0]); n++)
    if (keylen >= dhparams[n].min)
      return dhparams[n].dh;

  return NULL; /* impossible to reach. */
}

/*
 * Hand out standard DH parameters, based on the authentication strength
 */
DH *ssl_callback_TmpDH(SSL *ssl, int exportvar, int keylen)
{
  EVP_PKEY *pkey;
  int type;

  pkey = SSL_get_privatekey(ssl);
#if OPENSSL_VERSION_NUMBER < 0x10100000L
  type = pkey ? EVP_PKEY_type(pkey->type) : EVP_PKEY_NONE;
#else
  type = pkey ? EVP_PKEY_base_id(pkey) : EVP_PKEY_NONE;
#endif

  /*
   * OpenSSL will call us with either keylen == 512 or keylen == 1024
   * (see the definition of SSL_EXPORT_PKEYLENGTH in ssl_locl.h).
   * Adjust the DH parameter length according to the size of the
   * RSA/DSA private key used for the current connection, and always
   * use at least 1024-bit parameters.
   * Note: This may cause interoperability issues with implementations
   * which limit their DH support to 1024 bit - e.g. Java 7 and earlier.
   * In this case, SSLCertificateFile can be used to specify fixed
   * 1024-bit DH parameters (with the effect that OpenSSL skips this
   * callback).
   */
  if ((type == EVP_PKEY_RSA) || (type == EVP_PKEY_DSA))
  {
    keylen = EVP_PKEY_bits(pkey);
  }

  return modssl_get_dh_params(keylen);
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

void ssl_init()
{

  Locker locker(ssl_mutex);
  ++ssl_users;

  thread_setup();

  if (ssl_initialized)
    return;

#if (OPENSSL_VERSION_NUMBER < 0x10100000L)
  CRYPTO_malloc_init();     // Initialize malloc, free, etc for OpenSSL's use
#else
  OPENSSL_malloc_init();
#endif
  SSL_library_init();       // Initialize OpenSSL's SSL libraries
  SSL_load_error_strings(); // Load SSL error strings
  ERR_load_BIO_strings();   // Load BIO error strings
  OpenSSL_add_all_algorithms(); // Load all available encryption algorithms

  ssl_rand_seed();

  ssl_initialized = 1;

#ifndef OPENSSL_NO_DH
  init_dh_params();
#endif

  return;
}

void ssl_term()
{

  Locker locker(ssl_mutex);
  --ssl_users;

  if (ssl_users > 0)
    return;

  thread_cleanup();

#ifndef OPENSSL_NO_DH
  free_dh_params();
#endif
}

void ssl_socket_close(socket_handle socket, SSL *ssl)
{

  if (ssl == 0)
  {
    socket_close(socket);
    return;
  }

  int i;
  int rc = 0;

  for (i = 0; i < 4; i++)
  {
    if ((rc = SSL_shutdown(ssl)) == 1)
      break;
  }
}

static void locking_callback(int mode, int type, const char *file, int line)
{
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

static unsigned long thread_id_func()
{
#ifdef _MSC_VER
  return (unsigned)GetCurrentThreadId();
#else
  return (unsigned long)pthread_self();
#endif
}

static void thread_setup(void)
{

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
  for (i = 0; i < CRYPTO_num_locks(); i++)
  {
    pthread_mutex_init(&(lock_cs[i]), 0);
  }
#endif

#ifndef _MSC_VER
  CRYPTO_set_id_callback((unsigned long (*)(void))thread_id_func);
#endif
  CRYPTO_set_locking_callback(
      (void (*)(int, int, const char *, int))locking_callback);
}

static void thread_cleanup(void)
{

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

static int ssl_rand_choose_num(int l, int h)
{
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

static void ssl_rand_seed(void)
{
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

const char *socket_error(char *tempbuf, int buflen)
{
#ifdef _MSC_VER
  int code = WSAGetLastError();
  snprintf(tempbuf, buflen, "%s(%d)", WSAErrString(code), code);
#else /* UNIX */
  snprintf(tempbuf, buflen, "%s(errno=%d)", strerror(errno), errno);
#endif
  tempbuf[buflen - 1] = 0;

  return tempbuf;
}

int caListX509NameCmp(const X509_NAME *const *a, const X509_NAME *const *b)
{
  return (X509_NAME_cmp(*a, *b));
}

#if (OPENSSL_VERSION_NUMBER < 0x10100000L)
int lookupX509Store(X509_STORE *pStore, int nType, X509_NAME *pName,
                    X509_OBJECT *pObj)
{
  X509_STORE_CTX pStoreCtx;
  int rc;

  X509_STORE_CTX_init(&pStoreCtx, pStore, 0, 0);
  rc = X509_STORE_get_by_subject(&pStoreCtx, nType, pName, pObj);
  X509_STORE_CTX_cleanup(&pStoreCtx);
  return rc;
}

int callbackVerifyCRL(int ok, X509_STORE_CTX *ctx, X509_STORE *revStore)
{
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
  if (rc > 0 && crl != 0)
  {
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
    if (X509_CRL_verify(crl, X509_get_pubkey(xs)) <= 0)
    {
      printf("Invalid signature on CRL\n");
      X509_STORE_CTX_set_error(ctx, X509_V_ERR_CRL_SIGNATURE_FAILURE);
      X509_OBJECT_free_contents(&obj);
      return 0;
    }

    /*
     * Check date of CRL to make sure it's not expired
     */
    i = X509_cmp_current_time(X509_CRL_get_nextUpdate(crl));
    if (i == 0)
    {
      printf("Found CRL has invalid nextUpdate field\n");
      X509_STORE_CTX_set_error(ctx, X509_V_ERR_ERROR_IN_CRL_NEXT_UPDATE_FIELD);
      X509_OBJECT_free_contents(&obj);
      return 0;
    }
    if (i < 0)
    {
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
  if (rc > 0 && crl != NULL)
  {
    /*
     * Check if the current certificate is revoked by this CRL
     */
    n = sk_X509_REVOKED_num(X509_CRL_get_REVOKED(crl));
    for (i = 0; i < n; i++)
    {
      revoked = sk_X509_REVOKED_value(X509_CRL_get_REVOKED(crl), i);
      if (ASN1_INTEGER_cmp(revoked->serialNumber, X509_get_serialNumber(xs)) ==
          0)
      {
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
#endif

int callbackVerify(int ok, X509_STORE_CTX *ctx)
{
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

#if (OPENSSL_VERSION_NUMBER < 0x10100000L)
  /*
   * Additionally perform CRL-based revocation checks
   */
  if (ok)
  {
    SSL *ssl = (SSL *)X509_STORE_CTX_get_app_data(ctx);
    X509_STORE *revStore = (X509_STORE *)SSL_get_app_data(ssl);
    ok = callbackVerifyCRL(ok, ctx, revStore);
    if (!ok)
      errnum = X509_STORE_CTX_get_error(ctx);
  }
#endif

  /*
   * If we already know it's not ok, log the real reason
   */
  if (!ok)
  {
    printf("Certificate Verification: Error (%d): %s\n", errnum,
           X509_verify_cert_error_string(errnum));
    ERR_print_errors_fp(stderr);
  }

  return (ok);
}

int typeofSSLAlgo(X509 *pCert, EVP_PKEY *pKey)
{

  int t;

  t = SSL_ALGO_UNKNOWN;
  if (pCert != 0)
    pKey = X509_get_pubkey(pCert);
  if (pKey != 0)
  {
 #if OPENSSL_VERSION_NUMBER < 0x10100000L
    switch (EVP_PKEY_type(pKey->type))
#else
    switch (EVP_PKEY_base_id(pKey))
#endif
    {
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

STACK_OF(X509_NAME) * findCAList(const char *cpCAfile, const char *cpCApath)
{
  STACK_OF(X509_NAME) * skCAList;
  STACK_OF(X509_NAME) * sk;
#ifndef HAVE_ACE_DIRENT
  DIR *dir;
  struct dirent *direntry;
#else
  ACE_DIR *dir;
  struct ACE_DIRENT *direntry;
#endif
  char *cp;
  int n;

/*
 * Start with a empty stack/list where new
 * entries get added in sorted order.
 */
#ifndef __SUNPRO_CC
  skCAList = sk_X509_NAME_new(caListX509NameCmp);
#else
  skCAList =
      sk_X509_NAME_new((int (*)(const X509_name_st *const *,
                                const X509_name_st *const *))caListX509NameCmp);
#endif

  /*
   * Process CA certificate bundle file
   */
  if (cpCAfile != 0)
  {
    sk = SSL_load_client_CA_file(cpCAfile);
    for (n = 0; sk != 0 && n < sk_X509_NAME_num(sk); n++)
    {
      // TODO log->onEvent(std::string("CA certificate: ") +
      // X509_NAME_oneline(sk_X509_NAME_value(sk, n), 0, 0));
      if (sk_X509_NAME_find(skCAList, sk_X509_NAME_value(sk, n)) < 0)
        sk_X509_NAME_push(skCAList, sk_X509_NAME_value(sk, n));
    }
  }

  /*
   * Process CA certificate path files
   */
  if (cpCApath != 0)
  {
#ifndef HAVE_ACE_DIRENT
    dir = opendir(cpCApath);
#else
    dir = ACE_OS::opendir(cpCApath);
#endif

#ifndef HAVE_ACE_DIRENT
    while ((direntry = readdir(dir)) != 0)
    {
#else
    while ((direntry = ACE_OS::readdir(dir)) != 0)
    {
#endif
      cp = strCat(cpCApath, SLASH, direntry->d_name, 0);
      sk = SSL_load_client_CA_file(cp);
      for (n = 0; sk != 0 && n < sk_X509_NAME_num(sk); n++)
      {
        // TODO log->onEvent(std::string("CA certificate: %s") +
        //           X509_NAME_oneline(sk_X509_NAME_value(sk, n), 0, 0));
        if (sk_X509_NAME_find(skCAList, sk_X509_NAME_value(sk, n)) < 0)
          sk_X509_NAME_push(skCAList, sk_X509_NAME_value(sk, n));
      }
    }
#ifndef HAVE_ACE_DIRENT
    closedir(dir);
#else
    ACE_OS::closedir(dir);
#endif
  }

  /*
   * Cleanup
   */
  sk_X509_NAME_set_cmp_func(skCAList, 0);
  return skCAList;
}

X509_STORE *createX509Store(const char *cpFile, const char *cpPath)
{
  X509_STORE *pStore;
  X509_LOOKUP *pLookup;

  if (cpFile == 0 && cpPath == 0)
    return 0;
  if ((pStore = X509_STORE_new()) == 0)
    return 0;
  if (cpFile != 0)
  {
    if ((pLookup = X509_STORE_add_lookup(pStore, X509_LOOKUP_file())) == 0)
    {
      X509_STORE_free(pStore);
      return 0;
    }
    X509_LOOKUP_load_file(pLookup, cpFile, X509_FILETYPE_PEM);
  }
  if (cpPath != 0)
  {
    if ((pLookup = X509_STORE_add_lookup(pStore, X509_LOOKUP_hash_dir())) == 0)
    {
      X509_STORE_free(pStore);
      return 0;
    }
    X509_LOOKUP_add_dir(pLookup, cpPath, X509_FILETYPE_PEM);
  }
  return pStore;
}
X509 *readX509(FILE *fp, X509 **x509, passPhraseHandleCallbackType cb)
{
  X509 *rc;
  BIO *bioS;
  BIO *bioF;

  rc = PEM_read_X509(fp, x509, cb, 0);
  if (rc == 0)
  {
    /* 2. try DER+Base64 */
    fseek(fp, 0L, SEEK_SET);
    if ((bioS = BIO_new(BIO_s_fd())) == 0)
      return 0;
    BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
    if ((bioF = BIO_new(BIO_f_base64())) == 0)
    {
      BIO_free(bioS);
      return 0;
    }
    bioS = BIO_push(bioF, bioS);
    rc = d2i_X509_bio(bioS, 0);
    BIO_free_all(bioS);
    if (rc == 0)
    {
      /* 3. try plain DER */
      fseek(fp, 0L, SEEK_SET);
      if ((bioS = BIO_new(BIO_s_fd())) == 0)
        return 0;
      BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
      rc = d2i_X509_bio(bioS, 0);
      BIO_free(bioS);
    }
  }
  if (rc != 0 && x509 != 0)
  {
    if (*x509 != 0)
      X509_free(*x509);
    *x509 = rc;
  }
  return rc;
}

EVP_PKEY *readPrivateKey(FILE *fp, EVP_PKEY **key,
                         passPhraseHandleCallbackType cb)
{
  EVP_PKEY *rc;
  BIO *bioS;
  BIO *bioF;

  rc = PEM_read_PrivateKey(fp, key, cb, 0);
  if (rc == 0)
  {
    /* 2. try DER+Base64 */
    fseek(fp, 0L, SEEK_SET);
    if ((bioS = BIO_new(BIO_s_fd())) == 0)
      return 0;
    BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
    if ((bioF = BIO_new(BIO_f_base64())) == 0)
    {
      BIO_free(bioS);
      return 0;
    }
    bioS = BIO_push(bioF, bioS);
    rc = d2i_PrivateKey_bio(bioS, 0);
    BIO_free_all(bioS);
    if (rc == 0)
    {
      fseek(fp, 0L, SEEK_SET);
      if ((bioS = BIO_new(BIO_s_fd())) == 0)
        return 0;
      BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
      rc = d2i_PrivateKey_bio(bioS, 0);
      BIO_free(bioS);
    }
  }
  if (rc != 0 && key != 0)
  {
    if (*key != 0)
      EVP_PKEY_free(*key);
    *key = rc;
  }
  return rc;
}

char *strCat(const char *a, ...)
{
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
  while ((argp = va_arg(adummy, char *)) != 0)
  {
    strcpy(cp, argp);
    cp += strlen(argp);
  }

  va_end(adummy);

  /* Return the result string */

  return res;
}

int setSocketNonBlocking(socket_handle pSocket)
/********************************************************************************
* switch socket to non-blocking mode
* Returns: 0 in the case of success, -1 in the case of error
*
*/
{
#ifdef _MSC_VER
  {
    unsigned long arg = 1; /* ie enable non-blocking mode */

    if (ioctlsocket(pSocket, FIONBIO, &arg) == SOCKET_ERROR)
    {
      int ecode = WSAGetLastError();

      /* EINVAL returned when an attempt is made to set non-blocking a socket
       * accepted on a non-blocking listen socket.  dont know why */

      if (ecode != WSAEINVAL)
      {
        // TODO LogEvent(
        //  ERROR_ID,
        //"SetSocketNonBlocking:ioctlsocket(%d,FIONBIO,0) failed: %s(%d)",
        // pSocket, WSAErrString(ecode), ecode);
        return -1;
      }
    }
    return 0;
  }

#else /* unix */
  {
    int f = fcntl(pSocket, F_GETFL);

    if (f == -1)
      // TODO LogEvent(ERROR_ID,
      //       "SetSocketNonBlocking: fcntl(%d,F_GETFL) failed: %s(errno=%d)",
      //     pSocket, strerror(errno), errno);

      f |= O_NONBLOCK;
    if (fcntl(pSocket, F_SETFL, f) == -1)
    {
      // TODO LogEvent(ERROR_ID,
      //"SetSocketNonBlocking: fcntl(%d,F_SETFL) failed: %s(errno=%d)",
      // pSocket, strerror(errno), errno);
      return -1;
    }
    return 0;
  }
#endif
}

long protocolOptions(const char *opt)
{
  long options = SSL_PROTOCOL_NONE, thisopt;
  char action;
  const char *w, *e;

  if (*opt)
  {
    w = opt;
    e = w + strlen(w);
    while (w && (w < e))
    {
      action = '\0';
      while ((*w == ' ') || (*w == '\t'))
        w++;
      if (*w == '+' || *w == '-')
        action = *(w++);

      if (!strncasecmp(w, "SSLv2", 5 /* strlen("SSLv2") */))
      {
        thisopt = SSL_PROTOCOL_SSLV2;
        w += 5 /* strlen("SSLv2")*/;
      }
      else if (!strncasecmp(w, "SSLv3", 5 /* strlen("SSLv3") */))
      {
        thisopt = SSL_PROTOCOL_SSLV3;
        w += 5 /*strlen("SSLv3") */;
      }
      else if (!strncasecmp(w, "TLSv1_1", 7 /* strlen("TLSv1_1") */))
      {
        thisopt = SSL_PROTOCOL_TLSV1_1;
        w += 7 /* strlen("TLSv1_1") */;
      }
      else if (!strncasecmp(w, "TLSv1_2", 7 /* strlen("TLSv1_2") */))
      {
        thisopt = SSL_PROTOCOL_TLSV1_2;
        w += 7 /* strlen("TLSv1_2") */;
      }
      else if (!strncasecmp(w, "TLSv1", 5 /* strlen("TLSv1") */))
      {
        thisopt = SSL_PROTOCOL_TLSV1;
        w += 5 /* strlen("TLSv1") */;
      }
      else if (!strncasecmp(w, "all", 3 /* strlen("all") */))
      {
        thisopt = SSL_PROTOCOL_ALL;
        w += 3 /* strlen("all") */;
      }
      else
        return -1;

      if (action == '-')
        options &= ~thisopt;
      else if (action == '+')
        options |= thisopt;
      else
        options = thisopt;
    }
  }
  else
  { /* default all except SSLv2 */
    options = SSL_PROTOCOL_ALL;
    thisopt = SSL_PROTOCOL_SSLV2;
    options &= ~thisopt;
  }

  return options;
}

void setCtxOptions(SSL_CTX *ctx, long options)
{
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

int enable_DH_ECDH(SSL_CTX *ctx, const char *certFile)
{
#ifndef OPENSSL_NO_DH
  int no_dhe = 0;
  if (!no_dhe)
  {
    DH *dh = NULL;

    if (certFile)
      dh = load_dh_param(certFile);

    if (dh != NULL)
    {
      SSL_CTX_set_tmp_dh(ctx, dh);

      DH_free(dh);
    }
    else
    {
      SSL_CTX_set_tmp_dh_callback(ctx, ssl_callback_TmpDH);
    }
    //(void)BIO_flush(bio_s_out);
  }
#endif

#ifndef OPENSSL_NO_ECDH
  EC_KEY *ecdh;
  ecdh = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
  if (ecdh == NULL)
  {
    return 2;
  }
  SSL_CTX_set_tmp_ecdh(ctx, ecdh);
  EC_KEY_free(ecdh);
#endif

  return 0;
}

SSL_CTX *createSSLContext(bool server, const SessionSettings &settings,
                          std::string &errStr)
{
  errStr.erase();

  SSL_CTX *ctx = 0;

  std::string strOptions;
  if (settings.get().has(SSL_PROTOCOL))
  {
    strOptions = settings.get().getString(SSL_PROTOCOL);
  }

  long options = protocolOptions(strOptions.c_str());

  /* set up the application context */
#if (OPENSSL_VERSION_NUMBER >= 0x10100000L)
  if (server)
  {
     ctx = SSL_CTX_new(TLS_server_method());
  }
  else
  {
     ctx = SSL_CTX_new(TLS_client_method());
  }
#else
  if (server)
  {
    ctx = SSL_CTX_new(SSLv23_server_method());
  }
  else
  {
    ctx = SSL_CTX_new(SSLv23_client_method());
  }
#endif

  if (ctx == 0)
  {
    errStr.append("Unable to get context");
    return ctx;
  }

  setCtxOptions(ctx, options);

  SSL_CTX_set_options(ctx, SSL_OP_SINGLE_DH_USE);
  if (server)
  {
    SSL_CTX_set_session_cache_mode(ctx, SSL_SESS_CACHE_SERVER);
  }

  SSL_CTX_set_mode(ctx, SSL_MODE_ENABLE_PARTIAL_WRITE |
                            SSL_MODE_ACCEPT_MOVING_WRITE_BUFFER);

  if (settings.get().has(SSL_CIPHER_SUITE))
  {
    std::string strCipherSuite = settings.get().getString(SSL_CIPHER_SUITE);

    if (!strCipherSuite.empty() &&
        !SSL_CTX_set_cipher_list(ctx, strCipherSuite.c_str()))
    {
      errStr.append("Unable to configure permitted SSL ciphers");
      SSL_CTX_free(ctx);
      return 0;
    }
  }

  return ctx;
}

bool loadSSLCert(SSL_CTX *ctx, bool server, const SessionSettings &settings,
                 Log *log, passPhraseHandleCallbackType cb, void* passwordCallbackParam, std::string &errStr)
{
  errStr.erase();

  log->onEvent("Loading SSL certificate");

  std::string cert;
  std::string key;

  if (server)
  {
    if (!settings.get().has(SERVER_CERT_FILE))
    {
      errStr.assign(SERVER_CERT_FILE);
      errStr.append(" parameter not found");
      return false;
    }

    cert.assign(settings.get().getString(SERVER_CERT_FILE));

    if (settings.get().has(SERVER_CERT_KEY_FILE))
      key.assign(settings.get().getString(SERVER_CERT_KEY_FILE));
    else
      key.assign(cert);
  }
  else
  {
    if (!settings.get().has(CLIENT_CERT_FILE))
    {
      log->onEvent("No SSL certificate configured for client.");

      int ret = enable_DH_ECDH(ctx, 0);
      if (ret != 0)
      {
        if (ret == 1)
          errStr.assign("Could not enable DH");
        else if (ret == 2)
          errStr.assign("Could not enable ECDH");
        else
          errStr.assign("Unknown error enabling DH, ECDH");

        return false;
      }

      return true;
    }

    cert.assign(settings.get().getString(CLIENT_CERT_FILE));

    if (settings.get().has(CLIENT_CERT_KEY_FILE))
      key.assign(settings.get().getString(CLIENT_CERT_KEY_FILE));
    else
      key.assign(cert);
  }

#if (OPENSSL_VERSION_NUMBER >= 0x10100000L) && !defined(LIBRESSL_VERSION_NUMBER)
  ::SSL_CTX_set_default_passwd_cb_userdata(ctx, passwordCallbackParam);
#else
  ctx->default_passwd_callback_userdata = passwordCallbackParam;
#endif

  SSL_CTX_set_default_passwd_cb(ctx, cb);

  FILE *fp;

  if ((fp = fopen(cert.c_str(), "r")) == 0)
  {
    errStr.assign(cert);
    errStr.append(" file could not be opened");
    return false;
  }

  X509 *X509Cert = readX509(fp, 0, 0);

  fclose(fp);

  if (X509Cert == 0)
  {
    errStr.assign(cert);
    errStr.append(" readX509 failed");
    return false;
  }

  switch (typeofSSLAlgo(X509Cert, 0))
  {
  case SSL_ALGO_RSA:
    log->onEvent("Configuring RSA client certificate");

    if (SSL_CTX_use_certificate(ctx, X509Cert) <= 0)
    {
      errStr.assign("Unable to configure RSA client certificate");
      return false;
    }
    break;

  case SSL_ALGO_DSA:
    log->onEvent("Configuring DSA client certificate");
    if (SSL_CTX_use_certificate(ctx, X509Cert) <= 0)
    {
      errStr.assign("Unable to configure DSA client certificate");
      return false;
    }
    break;

  default:
    errStr.assign("Unable to configure client certificate");
    return false;
    break;
  }
  X509_free(X509Cert);

  if ((fp = fopen(key.c_str(), "r")) == 0)
  {
    errStr.assign(key);
    errStr.append(" file could not be opened");
    return false;
  }

  EVP_PKEY *privateKey = readPrivateKey(fp, 0, cb);

  fclose(fp);

  if (privateKey == 0)
  {
    errStr.assign(key);
    errStr.append(" readPrivateKey failed");
    return false;
  }

  switch (typeofSSLAlgo(0, privateKey))
  {
  case SSL_ALGO_RSA:
    log->onEvent("Configuring RSA client private key");
    if (SSL_CTX_use_PrivateKey(ctx, privateKey) <= 0)
    {
      errStr.assign("Unable to configure RSA server private key");
      return false;
    }
    break;

  case SSL_ALGO_DSA:
    log->onEvent("Configuring DSA client private key");
    if (SSL_CTX_use_PrivateKey(ctx, privateKey) <= 0)
    {
      errStr.assign("Unable to configure DSA server private key");
      return false;
    }
    break;
  default:

    errStr.assign("Unable to configure client certificate");
    return false;
    break;
  }
  EVP_PKEY_free(privateKey);

  /* Now we know that a key and cert have been set against
   * the SSL context */
  if (!SSL_CTX_check_private_key(ctx))
  {
    errStr.assign("Private key does not match the certificate public key");
    return false;
  }

  int ret = enable_DH_ECDH(ctx, cert.c_str());
  if (ret != 0)
  {
    if (ret == 1)
      errStr.assign("Could not enable DH");
    else if (ret == 2)
      errStr.assign("Could not enable ECDH");
    else
      errStr.assign("Unknown error enabling DH, ECDH");

    return false;
  }

  return true;
  ;
}

bool loadCAInfo(SSL_CTX *ctx, bool server, const SessionSettings &settings,
                Log *log, std::string &errStr, int &verifyLevel)
{
  errStr.erase();

  log->onEvent("Loading CA info");

  std::string caFile;
  if (settings.get().has(CERT_AUTH_FILE))
    caFile.assign(settings.get().getString(CERT_AUTH_FILE));

  std::string caDir;
  if (settings.get().has(CERT_AUTH_DIR))
    caDir.assign(settings.get().getString(CERT_AUTH_DIR));

  if (caFile.empty() && caDir.empty())
    return true;

  if (!SSL_CTX_load_verify_locations(ctx, caFile.empty() ? 0 : caFile.c_str(),
                                     caDir.empty() ? 0 : caDir.c_str()) ||
      !SSL_CTX_set_default_verify_paths(ctx))
  {
    errStr.assign(
        "Unable to configure verify locations for client authentication");
    return false;
  }

  STACK_OF(X509_NAME) * caList;
  if ((caList = findCAList(caFile.empty() ? 0 : caFile.c_str(),
                           caDir.empty() ? 0 : caDir.c_str())) == 0)
  {
    errStr.assign("Unable to determine list of available CA certificates "
                  "for client authentication");
    return false;
  }
  SSL_CTX_set_client_CA_list(ctx, caList);

  if (server)
  {
    if (settings.get().has(VERIFY_LEVEL))
      verifyLevel = (settings.get().getInt(VERIFY_LEVEL));

    if (verifyLevel != SSL_CLIENT_VERIFY_NOTSET)
    {
      /* configure new state */
      int cVerify = SSL_VERIFY_NONE;
      if (verifyLevel == SSL_CLIENT_VERIFY_REQUIRE)
        cVerify |= SSL_VERIFY_PEER | SSL_VERIFY_FAIL_IF_NO_PEER_CERT;
      else if (verifyLevel == SSL_CLIENT_VERIFY_OPTIONAL)
        cVerify |= SSL_VERIFY_PEER;

      SSL_CTX_set_verify(ctx, cVerify, callbackVerify);
    }
  }
  else
  {
    /* Set the certificate verification callback */
    SSL_CTX_set_verify(ctx, SSL_VERIFY_PEER, callbackVerify);
  }

  return true;
}

X509_STORE *loadCRLInfo(SSL_CTX *ctx, const SessionSettings &settings, Log *log,
                        std::string &errStr)
{
  errStr.erase();

  X509_STORE *revocationStore = 0;

  log->onEvent("Loading CRL information");

  errStr.erase();

  std::string crlFile;
  if (settings.get().has(CRL_FILE))
    crlFile.assign(settings.get().getString(CRL_FILE));

  std::string crlDir;
  if (settings.get().has(CRL_DIR))
    crlDir.assign(settings.get().getString(CRL_DIR));

  if (crlFile.empty() && crlDir.empty())
    return revocationStore;

#if (OPENSSL_VERSION_NUMBER < 0x10100000L)
  revocationStore =
      createX509Store(crlFile.c_str(), crlDir.empty() ? 0 : crlDir.c_str());
  if (revocationStore == 0)
  {
    errStr.assign("Unable to create revocation store");
  }
#else
  X509_STORE *store = SSL_CTX_get_cert_store(ctx);
  if (!store || !X509_STORE_load_locations(store, crlFile.c_str(),
                                           crlDir.c_str()))
  {
    errStr.assign("Unable to create revocation store");
    return 0;
  }
  X509_STORE_set_flags(store, X509_V_FLAG_CRL_CHECK|X509_V_FLAG_CRL_CHECK_ALL);
#endif

  return revocationStore;
}

int doAccept(SSL *ssl, int &result)
{
  int rc = SSL_accept(ssl);
  if (rc <= 0)
  {
    result = SSL_get_error(ssl, rc);
  }

  return rc;
}

int acceptSSLConnection(socket_handle socket, SSL *ssl, Log *log, int verify)
{
  int rc;
  int result = -1;
  char *subjName = 0;
  time_t timeout = time(0) + 10;
#ifdef __TOS_AIX__
  int retries = 0;
#endif
  /*
   * Now enter the SSL Handshake Phase
   */
  while (!SSL_is_init_finished(ssl))
  {
    ERR_clear_error();
    while ((rc = doAccept(ssl, result)) <= 0)
    {

      if (result == SSL_ERROR_WANT_READ)
        ;
      else if (result == SSL_ERROR_WANT_WRITE)
        ;
      else if (result == SSL_ERROR_ZERO_RETURN)
      {
        /*
         * The case where the connection was closed before any data
         * was transferred. That's not a real error and can occur
         * sporadically with some clients.
         */
        if (log)
          log->onEvent("SSL handshake stopped: connection was closed");
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      }
      else if (ERR_GET_REASON(ERR_peek_error()) == SSL_R_HTTP_REQUEST)
      {
        /*
         * The case where OpenSSL has recognized a HTTP request:
         * This means the client speaks plain HTTP on our HTTPS
         * port. Hmmmm...  At least for this error we can be more friendly
         * and try to provide him with a HTML error page. We have only one
         * problem: OpenSSL has already read some bytes from the HTTP
         * request. So we have to skip the request line manually and
         * instead provide a faked one in order to continue the internal
         * Apache processing.
         *
         */
        char ca[2];
        int rv;

        /* log the situation */
        if (log)
          log->onEvent("SSL handshake failed: HTTP spoken on HTTPS port");

        /* first: skip the remaining bytes of the request line */
        do
        {
#ifndef _MSC_VER // Unix
          do
          {
            rv = read(socket, ca, 1);
          } while (rv == -1 && errno == EINTR);
#else // Windows
          do
          {
            rv = recv(socket, ca, 1, 0);
          } while (rv == -1 && errno == EINTR);
#endif
        } while (rv > 0 && ca[0] != '\012' /*LF*/);

        SSL_set_shutdown(ssl, SSL_SENT_SHUTDOWN | SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        ;
        return result;
      }
      else if (result == SSL_ERROR_SYSCALL)
      {
#ifdef __TOS_AIX__
        if (errno == EINTR)
          continue;
        else if (errno == EAGAIN)
        {
          // Please refer:
          // http://community.emailogy.com/scripts/wa-COMMUNITY.exe?A2=ind0303&L=lstsrv-l&O=A&P=19558
          // http://mirt.net/pipermail/stunnel-users/2007-May/001570.html
          ++retries;
          if (retries <= 100)
          {
            if (log)
              log->onEvent(
                  "EAGAIN received during SSL handshake, trying again");
            process_sleep(0.005);
            continue;
          }
        }
        if (errno > 0)
        {
          if (log)
            log->onEvent(
                std::string("SSL handshake interrupted by system, errno " +
                            IntConvertor::convert(errno)));
        }
        else if (log)
          log->onEvent("Spurious SSL handshake interrupt");
#elif defined(_MSC_VER)
        // MS Windows will not set errno, but WSEGetLastError() must be queried
        int lastSocketError = WSAGetLastError();
        if ((lastSocketError == WSAEINTR) ||
            (lastSocketError == WSAEWOULDBLOCK))
          continue;
        if (log)
          log->onEvent(
              std::string(
                  "SSL handshake interrupted by system, system error ") +
              IntConvertor::convert(lastSocketError) + " socket " +
              std::to_string(socket));

#else
        if (errno == EINTR)
          continue;
        if (errno > 0)
        {
          if (log)
            log->onEvent(
                std::string("SSL handshake interrupted by system, errno ") +
                IntConvertor::convert(errno));
        }
        else if (log)
          log->onEvent("Spurious SSL handshake interrupt");
#endif
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      }
      else
      {
        /*
         * Ok, anything else is a fatal error
         */
        unsigned long err = ERR_get_error();
        if (log)
          log->onEvent("SSL handshake failed");

        while (err)
        {
          if (log)
            log->onEvent(std::string("SSL failure reason: ") +
                         ERR_reason_error_string(err));
          err = ERR_get_error();
        }

        /*
         * try to gracefully shutdown the connection:
         * - send an own shutdown message (be gracefully)
         * - don't wait for peer's shutdown message (deadloop)
         * - kick away the SSL stuff immediately
         */
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      }
      if (time(0) > timeout)
      {
        if (log)
          log->onEvent("SSL handshake stopped: connection was closed");
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      }
      process_sleep(0.01);
    }

    X509 *xs = 0;

    /*
     * Check for failed client authentication
     */
    if ((result = SSL_get_verify_result(ssl)) != X509_V_OK)
    {
      if (log)
        log->onEvent("SSL client authentication failed: ");
      SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
      ssl_socket_close(socket, ssl);
      return result;
    }
    else
    {
      if ((xs = SSL_get_peer_certificate(ssl)) != 0)
      {
        subjName = X509_NAME_oneline(X509_get_subject_name(xs), 0, 0);
      }
    }
  }

  if ((verify == SSL_CLIENT_VERIFY_REQUIRE) && subjName == 0)
  {
    if (log)
      log->onEvent("No acceptable peer certificate available");
    SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
    ssl_socket_close(socket, ssl);
    result = 2;
  }

  if (subjName)
    free(subjName);

  return result;
}
}

#endif
