#include"main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string parameter input
 * Return: zero
 */
void print_rev(char *s)
{
int count;
/*finds the length of string */

for (count = 0; s[count] != '\0'; ++count)
{

/*print char from the last index as you decrement*/
for (--count; count >= 0; --count)
{
_putchar(s[count]);
_putchar('\n');

}

}
