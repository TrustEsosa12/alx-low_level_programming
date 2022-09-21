#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters o and O should be replaced by 0
 * Letters l and L should be replaced by 1
 * @s: pointer to string.
 * Return: pointer to s.
 */
char *leet(char *s)
{
int stringCount, leetCount;
char ;leetLetters[] = "aAeEoOtTlL";
char leetNums[] = "4433007711";
/* scan through string */
stringCount = 0;
while (s[stringCount] != '\0')
/* check whether leetLetter is found */
{
leetCount = 0;
while (leetCount < 10)
{
if (leetLetter[leetCount] == s[stringCount])
{
s[stringCount] = leetNums[leetCount];
}
leetCount++;
}
stringCount++;
}
return (s);
}

