#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a line followed by a new line
 * @s: pointer to string that is to be printed
 *
 * Return:  no return value
*/
void _puts_recursion(char *s)
{
printf("%s", s);
printf("%c", '\n');
}