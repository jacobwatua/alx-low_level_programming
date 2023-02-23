#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *@void: no arguments passed
 * Description: print_times_table,
 * This function prints a multiplication table for the numbers 0 through 9,
 * showing the result of multiplying each pair of numbers. The output is
 * formatted as a grid of two-digit numbers separated by commas and spaces.
 *
 * Return: void
*/
void times_table(void)
{
int multiplier, multiplicand, product;

for (multiplier = 0; multiplier < 10; multiplier++)
{
for (multiplicand = 0; multiplicand < 10; multiplicand++)
{
product = multiplier * multiplicand;
if (multiplicand == 0)
{
_putchar('0');
}
else if (product < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
}
_putchar('\n');
}
}

