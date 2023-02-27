#include <stdio.h>
#include "main.h"

/**
 * print_array - function name
 * @a: array
 * @n: number of elements
 *
 * Prints array elements
 * Return: No return value
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}

