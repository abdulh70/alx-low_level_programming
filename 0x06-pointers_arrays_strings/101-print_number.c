#include "main.h"
/**
 * print_number - print numbers in characters
 * @n: integer parameters
 * Return: 0
 */
void print_number(int n)
{
unsigned int k1;
k1 = n;
if (n < 0)
{
_putchar('-');
k1 = -n;
}
if (k1 / 10 != 0)
{
print_number(k1 / 10);
}
_putchar((k1 % 10) + '0');
}
