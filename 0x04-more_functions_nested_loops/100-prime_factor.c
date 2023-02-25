#include <stdio.h>
#include "main.h"

/**
 * largest_prime_factor - Finds and prints the largest
 *  prime factor of a given number
 * @number: The number whose largest prime factor is to be found
 *
 * Description:
 *      - A factor is a number that can be evenly
 *        divided into another number.
 *        For example, the factors of 6 are 1, 2, 3, and 6.
 *      - A prime factor is a factor that is also a prime number, which means
 *        it can only be divided by 1 and itself. For example, the prime
 *        factors of 6 are 2 and 3.
 *
 * Return: The largest prime factor of the given number
 */
long int largest_prime_factor(long int number)
{
long int i, largest_factor;

largest_factor = 2;

for (i = 2; i <= number / 2; i++)
{
if (number % i == 0)
{
largest_factor = i;
number /= i;
i--;
}
}

if (number > largest_factor)
largest_factor = number;

return (largest_factor);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long int number = 612852475143;
long int largest_factor = largest_prime_factor(number);

printf("%ld\n", largest_factor);

return (0);
}

