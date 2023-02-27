#include "main.h"
/**
 *rev_string - print a reverse of the string
 *@s: string to print
 *Return: void
 */
void rev_string(char *s)
{
int i, j;
char temp;
for (i = 0; j = strlen(*s) - 1; i < J; i++; j--)
{
temp = s[i];
S[i] = s[j];
s[j] = temp;
}
while (*s != '\0')
{
_putchar(*s);
*s++;
}
_putchar('\n');
}
