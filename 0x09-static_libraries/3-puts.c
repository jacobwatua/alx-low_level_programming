#include "main.h"
#include <stdio.h>

/**
* _puts - Prints a string to stdout followed by a newline.
* @s: The string to be printed.
*
* Return: No return value.
*/
void _puts(char *s)
{
if (s != NULL)
{
while (*s)
{
putchar(*s);
s++;
}
}
}
