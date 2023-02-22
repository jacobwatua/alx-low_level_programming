#include "main.h"
/**
 * print_alphabet_x10 - print alphabets
 * @void: none
 *
 * Description: prints alphabes 10 times
 * using _putchar twice
 * Return: no return value
*/
void print_alphabet_x10(void)
{
int count;
char start;
for (count = 0 ; count < 10 ; count++)
{
for (start = 'a' ;  start <= 'z' ; start++)
{
_putchar(start);
}
_putchar('\n');
}
}

