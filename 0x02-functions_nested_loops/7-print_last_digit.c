#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - get the last digit in a number
 * @c: - accepts one argument, a number
 *
 * Descrtiption: Gets the last digit of the number
 * Return: the last digit of the number
*/
int print_last_digit(int c)
{
int last_digit = abs(c % 10);
_putchar(last_digit + '0');
return (last_digit);
}

