#include "main.h"

/**
 * _strspn - calculates the length of the initial
 * segment of s which consists
 * only of bytes from accept
 *
 * @s: the string to be checked
 * @accept: the string containing the characters
 * to be checked against
 *
 * Return: the number of bytes in the initial
 * segment of s which consist only * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (!accept[j])
{
return (i);
}
}
return (i);
}

