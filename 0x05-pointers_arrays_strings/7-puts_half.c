#include"main.h"
/**
 * puts_half - prints half of a string
 * @str: parameter input
 * Return: zero
 */
void puts_half(char *str)
{
int k, m;
for (k = 0; str[k] != '\0'; ++k)
;
if (k % 2 == 0)
{
for (m = k / 2; str[m] != '\0'; ++m)
_putchar(str[m]);
}
else
{
for (m = ((k - 1) / 2) + 1; str[m] != '\0'; ++m)
_putchar(str[m]);
}
_putchar('\n');
}

