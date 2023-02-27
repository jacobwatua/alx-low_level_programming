#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a newline character
 *
 * @str: the null-terminated string to print
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
printf("%c", str[i]);
i += 2;
}
printf("\n");
}

