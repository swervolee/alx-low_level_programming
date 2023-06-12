#include "main.h"

/**
 * *create_array - a function to create and innitialize an array
 *  *@size: the size of the array
 *   *@c: the character to fill array with
 *    *Return: a pointer to the array or NULL
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	if (!size)
		return (NULL);
	array = malloc((size + 1) * sizeof(char));
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	array[size] = '\0';
	return (array);
}
