#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer.
 * only using the putchar function.
 * noarrays and pointers.
 * @n: interger to be printed.
 * Return: void.
 */
void print_number(int n)
{
unsigned int num;
/*check if number is nagative*/
num = n;
if (n < 0)
{ 
putchar(45);
num = -n;
}
/* print number by recursion */
if (num / 10)
{
print_number(num / 10);
}
putchar((num / 10) + '0');
}
