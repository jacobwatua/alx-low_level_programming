#include "main.h"
#include <string.h>
#include <unistd.h>
/**
* main - The main Entry point
* @args - accepts no arguements
*
* Description: prints _putchar
* Return: 0 if successful
*/
int main(void)
{
char str[] = "_putchar";
int i;
int len = strlen(str);
for (i = 0; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
