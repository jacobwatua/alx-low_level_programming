#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if letter is uppercase
 * @c:one arguement an integer
 *
 * Description: checks if a letter is uppercase
 * Return: 1 if true 0 if false
*/
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
return (0);
}

