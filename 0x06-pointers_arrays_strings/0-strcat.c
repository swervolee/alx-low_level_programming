#include "main.h"
/**
 *_strcat - entry point
 *@dest: cat destination
 *@src: cat source
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dl = 0;

	while (*(dest + dl) != '\0')
	{
		dl++;
	}
	i = 0;
	while (*(src + i) != '\0')
	{
		dest[dl + i] = src[i];
		i++;
	}
	return (dest);
}
