#include "main.h"

/**
 * print_number - Prints an int using only _putchar
 * @n: The int to be printed
 *
 * Return: void
 */
void print_number(int n)
{
unsigned int absolute_value = n;

if (n < 0)
{
_putchar('-');
absolute_value = n * -1;
}

if (absolute_value > 9)
{
print_number(absolute_value / 10);
}

_putchar(absolute_value % 10 + '0');
}

