#include "main.h"
/**
 * print_line - name of the function
 * @n: number of times to print '_'
 *
 * Return: no retun value
*/
void print_line(int n)
{
if (n == 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0 ; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}

