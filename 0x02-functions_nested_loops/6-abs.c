#include "main.h"
/**
 *_abs - computes the absolute value of a number
 *@c: the number to be computed
 *Return: the absolute number or zero
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
