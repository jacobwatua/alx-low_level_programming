#include "main.h"
/**
* print_alphabet - The main Entry point
* @args - accepts no arguements
*
* Description: prints _putchar
* Return: 0 if successful
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
