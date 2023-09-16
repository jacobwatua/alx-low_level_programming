#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers separated with a character eg ,
 * @separator: separation character
 * @n: number of variable arguments
 * @...: variable arguments
 *
 * Return: no return value
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
if (separator == NULL)
{
return;
}
va_start(args, n);
for (i = 0; i < n; i++)
{
int num = va_arg(args, int);
i != n - 1 ? printf("%d%c", num, *separator) : printf("%d", num);
}
printf("\n");
va_end(args);
}

