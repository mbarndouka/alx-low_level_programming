#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string.
 *@dest: input value
 *@src: input value
 *@n: input value
 *Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
int i = 0;
while (i < n && *src != '\0')
{
*ptr++ = *src++;
i++;
}
while (i < n)
{
*ptr++ = '\0';
i++;
}
return (dest);
}
