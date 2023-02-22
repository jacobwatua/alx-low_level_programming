#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if letter is lowercase
 * @c:one arguement an integer
 *
 * Description: checks for lowercase letters
 * Return: no return value
*/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
return (0);
}

