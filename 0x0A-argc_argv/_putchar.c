#include <stdio.h>
#include "main.h"
/**
 * _putchar - prints character c to stdout
 * @c:The output char
 * Return: 1 on success.
 * -1 on error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
