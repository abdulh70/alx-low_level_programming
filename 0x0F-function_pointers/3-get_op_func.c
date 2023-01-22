#include "3-calc.h"
#include <stddef.h>
/**
 *get_op_func - get ops function pointer of type char array
 * @s: a character pointer pointing to a symbol from the program argument
 * Return: one of the operator functions to perform calculationis
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int k = 0;
while (k < 5)
{
if (*s == *ops[k].op)
return (ops[k].f);
k++;
}
return (NULL);
}
