#include "main.h"
#include <string.h>

char *leet(char *str) {
int i, j;
char leet_table[128] = {0}; // initialize to 0
const char *leet_chars = "aAeEoOtTlL";
const char *leet_codes = "4433007711";

// Build the leet table
for (i = 0; i < strlen(leet_chars); i++) {
leet_table[leet_chars[i]] = leet_codes[i];
}

// Encode the string
for (i = 0; i < strlen(str); i++) {
for (j = 0; j < strlen(leet_chars); j++) {
if (str[i] == leet_chars[j]) {
str[i] = leet_codes[j];
break;
}
}
}

return str;
}

char *leet(char *str)
{
int i, j;
char leet_table[128] = {0}; // initialize to 0
const char *leet_chars = "aAeEoOtTlL";
const char *leet_codes = "4433007711";

// Build the leet table
for (i = 0; i < strlen(leet_chars); i++)
{
leet_table[leet_chars[i]] = leet_codes[i];
}

// Encode the string
for (i = 0; i < strlen(str); i++)
{
for (j = 0; j < strlen(leet_chars); j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_codes[j];
break;
}
}
}

return (str);
}

