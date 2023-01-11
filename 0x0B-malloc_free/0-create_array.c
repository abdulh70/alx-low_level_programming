#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array
 * @size: array size
 * @c: - char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int k = 0;
if (size == 0)
return (NULL);
ptr = (char *) malloc(sizeof(char) * size);
if (ptr == NULL)
return (0);
while (k < size)
{
*(ptr + k) = c;
k++;
}
*(ptr + k) = '\0';
return (ptr);
}
