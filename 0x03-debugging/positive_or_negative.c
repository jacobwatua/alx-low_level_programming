#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* positive_or_negative - The ebtry poin
* @i: accepts one arguement, an integer
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

