#include <stddef.h>
#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: pointer
 *@size: array size
 *@cmp: pointer
 *Return: zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int k;
bool y;
if (array != NULL && size > 0 && cmp != NULL)
{
if (size <= 0)
return (-1);
for (k = 0; k < size; k++)
{
y = cmp(array[k]);
if (y == TRUE)
return (k);
}
}
return (-1);
}
