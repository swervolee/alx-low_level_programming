#include "main.h"
/**
 *_memset - pointer function name
 *@s: mem pointer
 *@b: the bytes
 *@n: integer
 *Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
