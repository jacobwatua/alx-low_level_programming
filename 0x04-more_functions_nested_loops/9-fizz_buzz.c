#include <stdio.h>
/**
 * main - entry point
 *
 * Print fizz and buzz for common divisers of 3 and 5
 * Return: no return value
*/
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("%s", "FizzBuzz ");
continue;
}
if (i % 3 == 0 && i % 5 != 0)
{
printf("%s", "Fizz ");
continue;
}
if (i % 3 != 0 && i % 5 == 0)
{
printf("%s", "Buzz ");
continue;
}
printf("%d ",  i);
}
printf("%c", '\n');
return (0);
}

