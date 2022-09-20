#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line
 * @a: This is the input array
 * @n: This is the length of the array
 * Return: Always 0 (success)
 */
void print_array(int *a, int n)
{
int index;
for (index = 0; index < n; index++)
{
printf("%d", a[index]);
if (index != (n - 1))
{
printf(", ");
}
}
putchar('\n');
}
