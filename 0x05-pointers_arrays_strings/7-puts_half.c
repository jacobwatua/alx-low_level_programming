#include <stdio.h>
#include <string.h>
/**
 * puts_half - name of the function
 * @str: str arg passed
 *
 * Prints half the sting passed
 * Return: No return value
*/
void puts_half(char *str)
{
int length = strlen(str);
int half_length = (length + 1) / 2;
int i;

for (i = half_length; i < length; i++)
{
printf("%c", str[i]);
}
printf("\n");
}

