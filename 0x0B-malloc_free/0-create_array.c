#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *create_array - a function to create an array of chatacters
 *@size: the size of the array
 *@c: the character
 *Return: a pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (arr != NULL)
	{
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
	}

	return (arr);
}
