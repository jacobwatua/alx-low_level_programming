#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src,
 * including the terminating null byte, to the buffer,
 * pointed to by dest.
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;
while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return (original_dest);
}

