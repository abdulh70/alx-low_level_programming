#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program generating random
 * passwords
 * Return: Always 0
 */
int main(void)
int j, total, m;
sum = 0;
srand(time(NULL));
for (j = 0; j < 100; j++)
{
pass[j] = rand() % 78;
total += (pass[j] + '0');
putchar(pass[j] + '0');
if ((2772 - total) -'0' < 78)
{
m = 2772 - total - '0';
total += m;
putchar(m + '0');
break;
}
}
return (0);
}
