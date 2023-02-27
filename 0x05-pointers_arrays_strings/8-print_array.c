#include <stdio.h>
#include "main.h"

/**
 * print_array - function name
 * @a: array
 *
 * Prints array elements
 * ReturnL No return value
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n-1)
{
printf(", ");
}
}
printf("\n");
}

