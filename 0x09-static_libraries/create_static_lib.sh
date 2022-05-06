#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball *.o
# ar -t liball.o # list all library object files.
ranlib liball.a
