#include "main.h"
/**
 *_strncat - concanating two strings
 *@dest: destination
 *@src: source
 *@n: bytes
 *Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count1;

	while (dest[count] != '\0')
	{
		count++;
	}
	for (count1 = 0; count1 < n && src[count1] != '\0'; count1++)
	{
		*(dest + count) = *(src + count1);
		count++;
	}
	return (dest);
}
