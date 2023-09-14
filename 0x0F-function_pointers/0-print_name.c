#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: stirng to be printed
 * @f: print name callback function
 *
 * Return: no return value
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
