#include <stdio.h>
/**
 * islower - Entry point
 * Description: check is a character is lowercase
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0'if otherwise
 */
int islower(int c)
{
int i = 'a';
for (i = 'a'; i <= 'z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
