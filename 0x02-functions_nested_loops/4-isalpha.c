#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 *@c: the character to be check
 *Return: 1 for alphabetic character and 0 for anything else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
