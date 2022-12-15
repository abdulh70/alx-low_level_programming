#include "main.h"
/**
 * print_alphabet_x10 - prints ten times
 */
void print_alphabet_x10(void)
{
char h;
int i;
i = 0;
while (i < 10)
{

h = 'a';

while  (h <= 'z')
{

_putchar(h);
h++;
}
_putchar('\n');
i++;
}


}
