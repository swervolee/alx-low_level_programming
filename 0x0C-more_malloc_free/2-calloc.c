#include "main.h"

/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elemets in an array
 *@size: size of each element
 *Return: malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_memory;
	unsigned int i;
	unsigned int total_size;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;

	allocated_memory = malloc(total_size);
	if (allocated_memory == NULL)
		return (NULL);
	ptr = allocated_memory;
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;
	return (allocated_memory);
}
