#include <stdio.h>
/**
 * main -prints alphabet in lowercase and uppercase
 * Return: Always 0 (succes)
 */
int main(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
for (alpha = 'A'; alpha <= 'Z'; alpha++)
	putchar(alpha);
putchar('\n');
return (0);


}
