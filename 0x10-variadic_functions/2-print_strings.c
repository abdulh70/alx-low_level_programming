#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - a function that prints strings, followed by a new line
 *@separator: pointer to a constant
 *@n: input variables
 * Return: zero
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list p;
unsigned int index;
char *str;
va_start(p, n);
for (index = 0; index < n; index++)
{
str = va_arg(p, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (separator && index != n - 1)
printf("%s", separator);
}
va_end(p);
printf("\n");
}
