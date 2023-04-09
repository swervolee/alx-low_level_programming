#include "main.h"

/**
 *_memcpy - copies memory from src to dest
 *@dest: the destination memory
 *@src: the source memory
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
