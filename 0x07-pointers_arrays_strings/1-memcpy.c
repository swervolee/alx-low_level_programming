#include "main.h"
/**
 *_memcpy - the function
 *@dest: the destination
 *@src: the source
 *@n: the number
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
