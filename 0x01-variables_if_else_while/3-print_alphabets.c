#include <stdio.h>
/**
 * main - Entry point
 * Description: prints alphabets in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{ char a = 'a';
while (a <= 'z')
{ putchar(a);
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
