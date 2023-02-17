#include <stdio.h>
#include <stdlib.h>
/**
 * main - The entry point
 * @args - nor arguents passed
 *
 * Description: prints an alphabet in lower case using putchar
 * Return: 0 if successful
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
