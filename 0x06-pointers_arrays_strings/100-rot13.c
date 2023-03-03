#include <string.h>
/**
 * rot13 - function name
 * @s: string srg
 *
 * Description: takes a null-terminated string as input,
 * and applies the ROT13 cipher to it
 * Return: Ciphered sting
*/
char *rot13(char *s)
{
char *p = s;
while (*p)
{
if (*p >= 'A' && *p <= 'Z')
{
*p = (*p - 'A' + 13) % 26 + 'A';
}
else if (*p >= 'a' && *p <= 'z')
{
*p = (*p - 'a' + 13) % 26 + 'a';
}
p++;
}
return (s);
}

