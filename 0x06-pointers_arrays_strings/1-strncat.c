#include "main.h"

/**
 * _strncat - Concatenates two strings, limiting the copy to the first `n` bytes
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate
 *
 * Return: Pointer to the resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
int i, k;

for (i = 0; dest[i]; i++)
;
for (k = 0; src[k] && k < n; k++)
dest[i + k] = src[k];
dest[i + k] = '\0';
return (dest);
}

