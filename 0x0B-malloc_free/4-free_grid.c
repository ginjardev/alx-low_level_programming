#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - concatenates all the arguments
 * @grid: Pointer to grid
 * @height: Height parameter
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
