#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the grid
 * @grid: 2d
 * @height: height
 * Description:clears memory of grid
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
