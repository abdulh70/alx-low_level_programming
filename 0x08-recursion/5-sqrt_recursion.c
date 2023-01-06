#include "main.h"
/**
* power_operation - function that returns square root of a number.
* _sqrt_recursion - functio description
* @n: input
* @n: input parameter
* @c: iterato
* Return: square root
*/
int power_operation(int n, int c)
{
if (c % (n / c) == 0)
{
if (c * (n / c) == n)
return (c);
else
return (-1);
}
return (0 + power_operation(n, c + 1));
}
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
if (n == 1)
return (1);
return (power_operation(n, 2));
}

