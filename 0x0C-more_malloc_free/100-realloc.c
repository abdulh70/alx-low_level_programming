#include <stdlib.h>
/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new, *pttr;
unsigned int k;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new = malloc(new_size);
if (new == NULL)
return (NULL);
free(ptr);
return (new);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new = malloc(new_size);
if (new == NULL)
return (NULL);
pttr = ptr;
for (k = 0; k < old_size; k++)
new[k] = pttr[k];
free(ptr);
return (new);
}
