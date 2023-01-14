#include <stdlib.h>
/**
 *array_range -function creates array of integers
 * @min: input element
 * @max: max input element
 *Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
int k, *ptr;
if (min > max)
return (NULL);
ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
return (NULL);
for (k = 0; min <= max; k++)
{
ptr[k] = min;
min++;
}
return (ptr);
}
