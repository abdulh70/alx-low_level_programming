#include <stdio.h>
/**
 * main -Entry point
 * Return: Always (0)
 */
int main(void)
{

int x;
for (x = 48; x < 58; x++)
{
putchar(x);
putchar(',');
putchar('\t');
}
putchar('\n');
return (0);

}
