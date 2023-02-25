#include "main.h"
/**
 * print_diagonal - function name
 * @n: int arg, number of times
 *
 * Description: Print char diagonally
 * Return: no return value
*/
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}

