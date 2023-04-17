#!/bin/bash
gcc -pedantic -Werror -Wall -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
