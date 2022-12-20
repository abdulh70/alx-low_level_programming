#include"main.h"
/**
 * print_array - prints n elements of an array of integers
 * @n: elements parameter input
 * @a: string parameter inpuT
 * Return: ZERO
 */
void print_array(int *a, int n)
{
int z;
for (z = 0; z < n; ++z)
{
if (z != (n - 1))
printf("%d, ", a[z]);
else
printf("%d", a[z]);
}
printf("\n");
}
