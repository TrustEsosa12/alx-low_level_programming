#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{  int a = 'a';
while (a <= 'z')
{  putchar(a);
 a++;
}  a = 'A';
while (a <= 'z')
{ putchar(a);
a++;
} putchar('\n');
return (0);
}
