#include <stdarg.h>
/**
 *sum_them_all - adds all its parameters
 * @n: start of input variables
 *Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list p;
unsigned int param, sum = 0;
va_start(p, n);
for (param = 0; param < n; param++)
sum += va_arg(p, int);
va_end(p);
return (sum);
}
