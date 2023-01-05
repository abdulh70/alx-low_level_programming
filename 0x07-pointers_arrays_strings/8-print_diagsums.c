#include <stdio.h>
void print_diagsums(int *a, int size)
{
int k, m, n;
m = 0;
n = 0;
for (k = 0; k < (size * size); k++)
{
if (k % (size + 1) == 0)
m += a[k];
if (k % (size - 1) == 0 && k != 0 && k < size * size - 1)
n += a[k];
}
printf("%d, %d\n", m, n);
}
