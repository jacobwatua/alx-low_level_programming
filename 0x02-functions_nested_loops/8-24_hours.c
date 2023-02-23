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
int hour_max, minute_max;
for (hour_max = 0; hour_max < 24; hour_max++)
{
for (minute_max = 0; minute_max < 60; minute_max++)
{
if (minute_max < 10 || hour_max < 10)
{
printf("0%d:0%d", hour_max, minute_max);
}
else
{
printf("%d:%d", hour_max, minute_max);
}
printf("%c", '\n');
}
}
}

