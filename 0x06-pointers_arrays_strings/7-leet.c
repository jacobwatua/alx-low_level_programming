#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
int i, j;
char *decoded = "aAeEoOtTlL";
char *encode = "4433007711";

for (i = 0; s[i]; i++)
{
for (j = 0; decoded[j]; j++)
if (s[i] == decoded[j])
s[i] = encode[j];
}

return (s);
}

