#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: pointer to string s
 */

char *cap_string(char *str)
{
int len = strlen(str);
int i;

for (i = 0; i < len; i++)
{

if (i == 0 || isspace(str[i - 1]) || str[i - 1] == ','
|| str[i - 1] == ';' || str[i - 1] == '.'
|| str[i - 1] == '!' || str[i - 1] == '?'
|| str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
|| str[i - 1] == '{' || str[i - 1] == '}')
{
str[i] = toupper(str[i]);
}

else
{
str[i] = tolower(str[i]);
}
}

return (str);
}


