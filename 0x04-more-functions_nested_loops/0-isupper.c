#include "main.h"
#include <ctype.h>
/**
 * _isupper - name of the function
 * @c: accepts one arguement an integer c
 *
 * Descritption: Checks if c if an uppercase letter or not
 * Return: 1 if true o if false
*/
int _isupper(int c)
{
c = c + '0';
if isalpha(c)
{
return (1);
}
return (0);
}

