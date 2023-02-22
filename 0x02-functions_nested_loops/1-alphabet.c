#include <main.h>
/*
 * main - The main entry point
 * @args: no arguements passed
 *
 * Description: Print alphabets from a-z in lowercase 10 times
 * Return: 0 if successful
*/
int main(void)
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
