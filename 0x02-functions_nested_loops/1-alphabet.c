#include <stdio.h>
/**
 * main - Entry point
 * Description: Write a function that prints the alphabet, in lowercase 
 * Return: Always 0 (sucess)
 */
void print_alphabet(void)
{
int n;
for (n =  'a'; n <= 'z'; n++)
{
putchar(n);
}
putchar('\n');
}  
