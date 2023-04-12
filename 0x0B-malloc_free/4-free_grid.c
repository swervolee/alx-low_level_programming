#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees a memory
 *@grid: the 2d array
 *@height: the columns
 *Return: 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
