#include <stdio.h>
/**
 * main -Entry point
 * Return: Always (0)
 */
int main(void)
{
int a, b, c;
for (a = 48; a < 58; a++)
{
	for (b = 49; b < 58; b++)
	{
		for (c = 50; b < 58; b++)
		{
			if (c > b && c > a)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56)
				{
				putchar(',');
				putchar(' ');
				}


			}
		}
	}

}
putchar('\n');
return (0);
}