#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - frees a grid previously created
 * @grid: input pointer to grid
 * @height: height of arrray
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
