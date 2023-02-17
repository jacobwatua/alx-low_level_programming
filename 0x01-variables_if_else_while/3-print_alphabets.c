#include <stdio.h>
#include <stdlib.h>
/**
 * main - The entry point
 * @args - nor arguents passed
 *
 * Description: prints an alphabet in lower and upper cases using putchar in a for loop
 * Return: 0 if successful
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
