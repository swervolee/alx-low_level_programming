#include "main.h"
/**
 *_strncat - concanates two strings
 *@dest: the string destination
 *@src: the source string
 *@n: the number of bytes
 *Return: the concanated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count1 = 0;

	while (*(dest + count) != '\0')
		count++;

	while (count1 < n && *(src + count1) != '\0')
	{
		*(dest + count + count1) = *(src + count1);
		count1++;
	}

	*(dest + count + count1) = '\0';
	return (dest);
}
