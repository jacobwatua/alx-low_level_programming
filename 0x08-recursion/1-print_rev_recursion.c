#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev - helper function to print string in reverse recursively
 * @s: string to be printed in reverse
 * @len: length of string
 *
 * Return: no return value
 */
void rev(char *s, int len)
{
if (len == 0)
{
return;
}
printf("%c", s[len - 1]);
len -= 1;
rev(s, len);
}

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: string to be printed in reverse
 *
 * Return: no return value
 */
void _print_rev_recursion(char *s)
{
int len = strlen(s);
rev(s, len);
}
