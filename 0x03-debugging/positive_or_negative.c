#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
* main - The ebtry poin
* @args - no arguemants passed to the function (void function)
*
* Description: Checks if a number is a positive, negative or zero
* Return: 0 if successful
*/

void positive_or_negative(int i)

{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}

