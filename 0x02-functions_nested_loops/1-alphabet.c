#include "main.h"
/*
 * print_alphabet - The entry point
 *
 * Description: Prints all the alphabets,
 * in lower case
 * Return: no return value
*/
void print_alphabet(void)
{
char start;
for (start = 'a';  start <= 'z' ; start++)
{
_putchar(start);
}
_putchar('\n');
}
