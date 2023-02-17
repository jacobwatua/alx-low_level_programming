#include <stdio.h>
/**
 * main - entry point
 *
 * Description:  Print numbers with base 10,
 * using putchar function
 * Return: 0 if successful
*/
int main(void)
{
int f = 0;
for (f = 0; f < 10 ; f++)
{
putchar(f + '0');
}
putchar('\n');
}
