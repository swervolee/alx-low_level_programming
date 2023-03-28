#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 **_strcpy - the function to perform copying
 *@dest: the copy destination
 *@src: the copy source
 *Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int p = strlen(src);

	while (dest[i] !=  '\0')
	{

		dest[i++] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < p; i++)
		dest[i] = '\0';
	dest[i + 1] = '\0';
	return (dest);
}
