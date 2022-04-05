#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensional array of ints mem
 * @grid: pointer to array of ints
 * @height: number of rows
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
