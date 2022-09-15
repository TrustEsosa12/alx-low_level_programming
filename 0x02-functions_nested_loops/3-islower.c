#include <stdio.h>
/**
 * islower - a function that check for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0'if otherwise
 */
int islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
