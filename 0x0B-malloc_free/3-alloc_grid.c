#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - innitializes a two dimensional array to zero
 *@width: the row
 *@height: the column
 *Return: Null or a 2d array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j = 0;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	arr = malloc(height * sizeof(*arr));
	if (!arr)
		return (NULL);
	while (i < height)
	{
		arr[i] = malloc(width * sizeof(int));
		if (!arr[i])
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
