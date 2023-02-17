#include <stdio.h>
#include <stdlib.h>
/**
 * main - The entry point
 * @args - nor arguents passed
 *
 * Description: prints an alphabet in lower cas,
 * using putchar, and,
 * in reverse order
 * Return: 0 if successful
*/
int main(void)
{
char ch;
for (ch = 'z'; ch <= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
