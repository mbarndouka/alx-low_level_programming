#include "main.h"
/**
 * _strlen - Return the length of the string
 *@s: the string to get the length of
 *
 *Return: return the length of @s
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
