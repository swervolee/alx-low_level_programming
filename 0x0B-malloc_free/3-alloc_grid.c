#include "main.h"

/**
 * *alloc_grid - allocates memory for a 2d array
 *  *@width: the width of the 2d
 *   *@height: the height of the array
 *    *Return: 2d array innitialized with zeroes
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (!width || !height)
		return (NULL);
	array = malloc(height * sizeof(int *));

	if (!array)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
