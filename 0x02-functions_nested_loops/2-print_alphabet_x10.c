#include "main.h"
/*
 * print_alphabet_x10 - print alphabets 
 * @args: none
 *
 * Description: Print a-z 10 times
 * Return: no return value
*/
void print_alphabet_x10 (void)
{
int count;
char start;
for (count = 0 ; count < 10 ; count++)
{
for (start = 'a';  start <= 'z' ; start++)
{
_putchar(start);
}
_putchar('\n');
}
}
