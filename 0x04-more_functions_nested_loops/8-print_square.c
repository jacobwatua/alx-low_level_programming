#include "main.h"
/**
 * print_square - function name
 * @size: size of the square to be printed
 *
 * This function prints square using # sign
 * Return: no return value
*/
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}

