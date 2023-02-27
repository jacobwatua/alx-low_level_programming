#include <stdio.h>
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: pointer to the string
 *
 * Return: none
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
printf("%c", str[i]);
}
printf("\n");
}

