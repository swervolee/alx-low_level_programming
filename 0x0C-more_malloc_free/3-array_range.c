#include "main.h"
/**
 *array_range - creates an array of given range
 *@min: the min range
 *@max: the max range
 *Return: pointer with range values
 */

int *array_range(int min, int max)
{
	int i, count = 0;
	int *array = NULL, trace = min;

	if (min > max)
		return (NULL);
	for (i = 0; trace <= max; i++)
		count++, trace++;
	array = malloc(sizeof(int) * count);
	if (!array)
		return (NULL);
	for (i = 0; min <= max; i++)
		array[i] = min, min++;
	return (array);
}
