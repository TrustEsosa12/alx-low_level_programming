#include "holberton.h"
#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverses a string
 *@s: this is the pointer that point to the string
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
int a, len;
char *begin, *end = s;
for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
{
end++;
}
len = a + 1;
begin = s;
for (a = 0; a < len / 2; a++)
{
char x;
x = *end;
*end = *begin;
*begin = x;
begin++;
end--;
}
end[len + 1] = '\0';
}
