#include "main.h"

/**
 *_strncpy - opies n bytes from source to destination
 *@dest: the destination
 *@src: the source
 *@n: the limit
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && *(src + count) != '\0'; count++)
	{
		*(dest + count) = *(src + count);
	}

	for (; count < n; count++)
		dest[count] = '\0';

	return (dest);
}
