#include "main.h"
/**
 * positive_or_negative - check if the number is positive or negative
 *@i: number to be test
 *Return: nothing
 */
void positive_or_negative(int i)
{
if (i < 0)
printf("%d is negative", i);
else if (i > 0)
printf("%d is positive", i);
else
printf("%d is zero", i);
}
