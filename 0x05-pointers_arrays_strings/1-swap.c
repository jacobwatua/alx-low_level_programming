#include "main.h"
/**
 * swap_int - name of th function.
 * @a: first int arg
 * @b: second int arg
 *
 * Description: intechanges the vaues of a and b using
 * pointers
 * Return: no return value
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

