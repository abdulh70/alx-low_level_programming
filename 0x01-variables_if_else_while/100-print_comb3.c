#include <stdio.h>
/**
 * main -Entry point
 * Return: Always (0)
 */
int main(void)
{
char a;
char b;
for (a = 48; a < 56; a++)
{
	for (b = 49; b < 57; b++)
	{
		if (a != b)
		{
		putchar(a);
		putchar(b);
		putchar(',');
		putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
