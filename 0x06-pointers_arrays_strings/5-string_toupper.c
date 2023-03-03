#include <stdio.h>
#include <ctype.h>
/**
 * string_toupper - function name
 * @str: string to be converted to uppercase
 *
 * Return: str in uppercase
*/
char *string_toupper(char *str)
{
char *p = str;
while (*p != '\0')
{
if (islower(*p))
{
*p = toupper(*p);
}
p++;
}
return (str);
}

