#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: multidimensional array of integers.
 * @heigth: heigth of the grid.
 * Return: no return
 */
void free_grid(int **grid, int heigth)
{
if (grid != NULL && heigth != 0)
{
for (; heigth >= 0; heigth--)
free(grid[heigth]);
free(grid);
}
}

