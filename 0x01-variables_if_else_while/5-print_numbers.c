#include <stdio.h>
/*
 * main - entry point
 *
 * Description:  Print numbers with base 10
 * Return: 0 if successful
*/
int main(void)
{
int s = 0;
do {
printf("%d", s);
s++;
} while (s < 10);
printf("\n");
return (0);
}
