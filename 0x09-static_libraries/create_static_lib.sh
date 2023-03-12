#!/bin/bash
gcc -c *.c | ar cr liball.a *.o
ar -rc liball.a *.o
ranlib liball.a
