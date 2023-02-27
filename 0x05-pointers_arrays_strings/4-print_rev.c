#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Function name
 * @s: arg to be printed
 *
 * Prints a string in reverse followed by a new line
 * Return: No return value
*/
void print_rev(char *s)
{
int len = strlen(s);
int i;
for (i = len - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}

