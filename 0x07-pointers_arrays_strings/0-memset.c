#include "main.h"
/**
 *_memset - the func
 *@s: memory pointer
 *@b: the constant
 *@n: the bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
