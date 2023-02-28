#include "main.h"
#include <string.h>
/**
 *rev_string - print a reverse of the string
 *@s: string to print
 *Return: void
 */
void rev_string(char *s)
{
int len = 0, index = 0;
char temp;

while (s[index])
len++;

for (index = len -1; index >= len / 2; index--)
{
temp = s[index];
s[index] = s[len - index -1];
s[len - index -1] = temp;
}
}
