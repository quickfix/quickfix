#!/bin/sh

psql -U $1 -d quickfix -f user.sql

