#include "main.h"
#include <stdio.h>

/**
 *_strcmp - function that compares two strings.
 *@s1: input value
 *@s2: input value
 *Return: void
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
