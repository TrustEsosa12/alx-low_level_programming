#include <stdio.h>
#include <unisted.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{ 
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
a = 'A';
while (a <= 'z')
{ putchar(a);
a++;
}
putchar('\n');
return (0);
}
