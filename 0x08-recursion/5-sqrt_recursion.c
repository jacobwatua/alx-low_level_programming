#include "main.h"

/**
 * _sqrt_recursion - returns the natural,
 * square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_helper(n, 1, n));
}
}

/**
 * _sqrt_helper - recursively searches for the square
 * root of a number within a range
 * @n: the number to find the square root of
 * @start: the lower bound of the range to search
 * @end: the upper bound of the range to search
 *
 * Return: the natural square root of n
 * within the given range, or -1 if not found
 */
int _sqrt_helper(int n, int start, int end)
{
int mid = (start + end) / 2;

if (mid * mid == n)
{
return (mid);
}
else if (mid * mid < n)
{
if (mid + 1 > n / (mid + 1))
{
return (mid);
}
else
{
return (_sqrt_helper(n, mid + 1, end));
}
}
else
{
return (_sqrt_helper(n, start, mid - 1));
}
}
