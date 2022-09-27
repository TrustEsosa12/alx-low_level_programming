#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print the chessboard, 2D array
 * @a: 2D array of chars
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring variables*/
int i, j;
i = 0;
while (i < 8) /*number repetitions*/
{
j = 0;
while (j < 8)
{
putchar(a[i][j]);
j++;
}
putchar ('\n'); /*print new line*/
i++; /*add +1*/
}
}
