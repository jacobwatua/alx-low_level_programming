#include "main.h"

/**
 * print_line - Draws a straight line in the terminal using the underscore character.
 *
 * @n: The number of times the underscore character should be printed.
 *
 * This function prints a line of underscores in the terminal n number of times.
 * After printing the line, it adds a newline character to the end.
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
_putchar('_');

_putchar('\n');
}

