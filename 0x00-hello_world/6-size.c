#include <stdio.h>
/*
* main-Entry point
*
* Return: 0 if successful
*/
int main(void) {
printf("Size of char: %lu bytes\n", sizeof(char));
printf("Size of short: %lu bytes\n", sizeof(short));
printf("Size of int: %lu bytes\n", sizeof(int));
printf("Size of long: %lu bytes\n", sizeof(long));
printf("Size of long long: %lu bytes\n", sizeof(long long));
printf("Size of float: %lu bytes\n", sizeof(float));
printf("Size of double: %lu bytes\n", sizeof(double));
printf("Size of long double: %lu bytes\n", sizeof(long double));
printf("Size of void*: %lu bytes\n", sizeof(void*));
return (0);
}
