#include "main.h"
#include <stdlib.h>
/**
 *_realloc - a program to allocate new memory
 *@ptr: a pointer to the currently allocated memory
 *@old_size: the size of the old memory
 *@new_size: the new size of memory to be allocated
 *Return: a pointer with new size of allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *p = ptr;
	char *q;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	q = new_ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		q[i] = p[i];
	free(ptr);
	return (new_ptr);
}