#include "main.h"
/**
 *_islower - checks for lowercase character
 *@c: the charater to be check
 *Return: 1 for  lower case and 0 for anything else
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
