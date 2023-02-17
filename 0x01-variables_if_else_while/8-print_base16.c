#include <stdio.h>
/**
 * main - The entry point
 * @args - nor arguents passed
 *
 * prints all the numbers of base 16 in lowercase
 * in reverse order
 * Return: 0 if successful
*/
int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
printf("%x", i);
}
printf("\n");
return (0);
}
