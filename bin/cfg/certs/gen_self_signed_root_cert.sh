#!/bin/sh

# https://help.ubuntu.com/10.04/serverguide/certificates-and-security.html

openssl req -new -x509 -extensions v3_ca -keyout cakey.pem -out cacert.pem -days 3650
