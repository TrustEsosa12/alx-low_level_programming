#include "main.h"
#include <stdlib.h>
/**
 * array_rang - creates an array of integers.
 * @min: minimun value.
 * @max: maximum value.
 * Return: pointer to the newly created array.
 * if man > max, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_rang(int min, int max)
{
int *ar;
int i;
if (min > max)
return (NULL);
ar = malloc(sizeof(*ar) * ((max - min) + 1));
if (ar == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
ar[i] = min;
return (ar);
}

