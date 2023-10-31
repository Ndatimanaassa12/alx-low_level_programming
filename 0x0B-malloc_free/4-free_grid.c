#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free a 2-dimensional array created by alloc_grid
 * @grid: a pointer to the first clumn
 * @height: the number of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
