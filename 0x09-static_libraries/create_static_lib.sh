#!/bin/bash

lib_name = "liball.a"

gcc -Wall -pedantic -Werror -Wextra -c *.c

ar -rcs liball.a *.o

ranlib liball.a
