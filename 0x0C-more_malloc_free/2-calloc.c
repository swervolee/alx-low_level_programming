#include "main.h"
#include <stdlib.h>

/**
 *_calloc - a function to allocate memory for an array
 *@nmemb: the number of elements
 *@size: the size of the elements
 *Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (!nmemb)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		str[i] = 0;
	return (str);
}
