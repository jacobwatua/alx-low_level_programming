#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Function name
 * @s: arg to be printed in reverse
 *
 * Prints a string in reverse followed by a new line
 * Return: No return value
*/

void rev_string(char *s)
{
int len = strlen(s);
int i;
for (i = 0; i < len / 2; i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}

