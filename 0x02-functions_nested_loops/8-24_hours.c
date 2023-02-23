#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every single ninute of the day
 * @void: no parameters accepted
 *
 * Description: prints every minute and hiur of a tough day
 * Return: no return value
*/
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", hour, minute);
}
}
}

