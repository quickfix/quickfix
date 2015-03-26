#!/bin/sh

# https://help.ubuntu.com/10.04/serverguide/certificates-and-security.html

base_name="test_cert";

if [ ! -z $1 ]; then
  base_name=$1
fi

echo "base name for certificate <$base_name>"

# generate the keys for the Certificate Signing Request (CSR)
openssl genrsa -des3 -out $base_name.key 2048

# now create the insecure key, the one without a passphrase, and shuffle the key names
openssl rsa -in $base_name.key -out $base_name.key.insecure
mv $base_name.key $base_name.key.secure
mv $base_name.key.insecure $base_name.key

# create the CSR
openssl req -new -key $base_name.key -out $base_name.csr

# generate a certificate signed by the CA
openssl ca -in $base_name.csr -config ./conf/openssl.cnf

