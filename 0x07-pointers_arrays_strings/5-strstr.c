#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search within
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the
 * located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
size_t needle_len = strlen(needle);
size_t haystack_len = strlen(haystack);
size_t i;
if (needle_len == 0)
{
return (haystack);
}

if (needle_len > haystack_len)
{
return ('\0');
}

for (i = 0; i <= haystack_len - needle_len; i++)
{
if (haystack[i] == needle[0] && memcmp(&haystack[i], needle, needle_len) == 0)
{
return (&haystack[i]);
}
}

return ('\0');
}

