#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free struct pointer
 * @d: pointe
 * Return: zero
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
