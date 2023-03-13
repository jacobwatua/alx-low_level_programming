#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 */
char* _strpbrk(char *s, char *accept) {
char *p;
while (*s != '\0') {
for (p = accept; *p != '\0'; ++p) {
if (*s == *p) {
return s;
}
}
++s;
}
return ('\0');
}

