#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of given range
 *@min: the minimum value
 *@max: the max value
 *Return: a pointer to created array or NULL
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
