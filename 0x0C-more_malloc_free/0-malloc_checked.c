#include "main.h"

/**
 *maloc_checked - allocates memory
 *@b: amount of memory
 *Return: malloc
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);
	return (memory);
}
