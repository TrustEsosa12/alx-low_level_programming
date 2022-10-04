#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array.
 * @heigth: height of the array.
 * Return: pointer of the array of integers
 */
int **alloc_grid(int width, int heigth)
{
int **gridout;
int i, j;
if (width < 1 || heigth < 1)
return (NULL);
gridout = malloc(heigth * sizeof(int *));
if (gridout == NULL)
{
free(gridout);
return (NULL);
}
for (i = 0; i < heigth; i++)
{
gridout[i] = malloc(width * sizeof(int));
if (gridout[i] == NULL)
{
for (i--; i >= 0; i--)
free(gridout[i]);
free(gridout);
return (NULL);
}
}
for (i = 0; i < heigth; i++)
for (j = 0; j < width; j++)
gridout[i][j] = 0;
return (gridout);
}
