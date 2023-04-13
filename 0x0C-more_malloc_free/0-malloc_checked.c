#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - a function to assign memory
 *@b: the number of bytes
 *Return: 0
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(b);
	if (!mem)
		exit(98);
	return (mem);
}
