#include "main.h"

/**
 * is_prime_number - Checks if the given integer is a prime number
 * @n: The integer to check
 *
 * Return: 1 if @n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
int i;
if (n == 1)
{
return (0);
}
for (i = 2; i < n; i++)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}
