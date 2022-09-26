#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurance
 */
char *_strpbrk(char *s, char *accept)
{
int x = 0, y;
while (s[x] != '\0')
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
{
s = &s[x];
return (s);
}
}
X++;
}
return (NULL);
}
