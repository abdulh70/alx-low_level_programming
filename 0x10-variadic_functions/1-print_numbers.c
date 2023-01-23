#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - a function that print numbers, followed by a new line
 *@separator: pointer to constant
 * @n:input variables
 * Return: zero
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list p;
unsigned int index;
va_start(p, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(p, int));
if (separator && index != n - 1)
printf("%s", separator);
}
va_end(p);
printf("\n");
}
