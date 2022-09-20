#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prints a string, in reverse
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int index;
	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		putchar(s[index]);
	}
	putchar('\n');
}

