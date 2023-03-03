#include "main.h"
#include <string.h>
/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *str)
{
int i;
/* The set of characters that separate words */
const char *delimiters = " \t\n,;.!?\"(){}";

/* Capitalize the first letter of the string */
if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= 'a' - 'A';

/* Capitalize the first letter of each word */
for (i = 1; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
/* Check if the previous character is a delimiter */
if (strchr(delimiters, str[i - 1]) != NULL)
{
str[i] -= 'a' - 'A';
}
}
}

return (str);
}

