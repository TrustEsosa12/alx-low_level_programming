#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - matches any character specified
 *@s: This is the c string to be scanned
 *@accept: character in str1 that matches one of the charactes in str2
 *Return: string s that matches any character specified in accept
 **/
char *_strpbrk(char *s, char *accept)
{
int j;
while (*s != '\0') /*Declaring WHILE*/
{
j = 0;
while (accept[j] != '\0') /*Evaluating *accept*/
{
if (*s == accept[j])
{
return (s);
}
j++; /*add j+1*/
}
s++; /*add s+1*/
}
return (0);
}

