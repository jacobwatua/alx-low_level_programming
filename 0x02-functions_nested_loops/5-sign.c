#include "main.h"

/**
 * print_sign- check if a number is 0, +ve or -ve
 * @n: accepts one arguement, a char
 *
 * Description: checks if a nu,ber is postive, a zero, or a negative
 * Return: 1 if positive, 0 if zero, -1 if negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}

