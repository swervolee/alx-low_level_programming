#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
char *_strncat(char *dest, char *src, int n);

#endif
