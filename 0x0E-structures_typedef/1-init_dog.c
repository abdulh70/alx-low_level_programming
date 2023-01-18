#include "dog.h"
/**
 * init_dog - function  dog struct
 * @d: input pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: zero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
