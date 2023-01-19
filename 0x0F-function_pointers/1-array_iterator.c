#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator -function that executes a function given as a
 *a parameter on each  element
 *@array: array
 *@size: size
 *@action: pointer
 *Return: empty if @array and @action is NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int k;
if (!array || !action)
return;
for (k = 0; k < size; k++)
action(array[k]);
}
