#include  <stdio.h>
/**
 * main - The entry point
 * @args - nor arguents passed
 *
 * Description: prints an alphabet in lower case using putchar except q and e
 * Return: 0 if successful
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if ((ch == 'e') || (ch == 'q'))
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}
