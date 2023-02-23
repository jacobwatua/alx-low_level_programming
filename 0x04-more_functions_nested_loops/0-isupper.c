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
c = c + '0';
if (isalpha(c))
{
return (1);
}
return (0);
}

