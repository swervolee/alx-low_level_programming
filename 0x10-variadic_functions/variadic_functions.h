#ifndef VARIADIC_FUCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif/* VARIADIC_FUNCTIONS_H*/
