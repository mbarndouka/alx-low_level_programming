#include "main.h"

/**
 *print alphabet - print all the alphabet in lowercase
 *
 *Retrun: success
*/

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar (letter);

_putchar ('\n');
}
