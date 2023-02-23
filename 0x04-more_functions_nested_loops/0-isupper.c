#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if letter is uppercase
 * @c:one arguement an integer
 *
 * Description: checks if a letter is uppercase
 * Return: 1 if true 0 if false
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
} else
{
return (0);
}
}

