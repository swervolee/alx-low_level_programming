#include "main.h"
/**
 *_realloc - reallocates memory of a pointer
 *@ptr: ponter to reallocate
 *@old_size: size of ptr
 *@new_size:size of new ptr
 *Return: reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i, min_size;
	unsigned char *old_ptr = (unsigned char *)ptr;
	unsigned char *tmp_ptr;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr != NULL)
	{
		tmp_ptr = (unsigned char *)new_ptr;
		min_size = old_size < new_size ? old_size : new_size;
		for (i = 0; i < min_size; i++)
			tmp_ptr[i] = old_ptr[i];
		free(ptr);
	}
	return (new_ptr);
}
