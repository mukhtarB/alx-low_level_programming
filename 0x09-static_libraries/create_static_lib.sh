#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
ar -t liball.a # list all library object files.
ranlib liball.a
