#!/bin/sh

# https://help.ubuntu.com/lts/serverguide/certificates-and-security.html

base_name="server";

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

# create the self-signed certificate
openssl x509 -req -days 365 -in $base_name.csr -signkey $base_name.key -out $base_name.crt

# convert to pem format, if in binary
#openssl x509 -inform DER -outform PEM -in $base_name.crt -out $base_name.crt.pem
#openssl rsa -inform DER -outform PEM -in $base_name.key -out $base_name.key.pem

# combine cert and key into one pem file (note: change names if converted to PEM format)
cat $base_name.crt $base_name.key > $base_name.includesprivatekey.pem
