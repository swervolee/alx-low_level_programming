#!/bin/bash
lib_name = "liball.a"

gcc -c *c

ar -rcs ${lib_name} *o
