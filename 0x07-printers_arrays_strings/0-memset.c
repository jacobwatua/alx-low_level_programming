#include "main.h"
/**
 * _memset - Function name
 * @s: Pointer
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to string s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
