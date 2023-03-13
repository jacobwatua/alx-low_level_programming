#include "main.h"
/**
 * _strchr - Locates the first occurrence of character c in string s
 * @s: Pointer to the string to be searched
 * @c: Character to be located
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
*/
char *_strchr(char *s, char c)
{
int	i;

i = 0;
while (s[i])
{
if (s[i] == (char)c)
return ((char *) &s[i]);
i++;
}
if ((char) !c)
return ((char *) &s[i]);
	return (0);
}

