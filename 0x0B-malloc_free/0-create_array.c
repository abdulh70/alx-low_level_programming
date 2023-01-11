#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- creates an array of chars
 * @size: -size of the array
 * @c: -char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int k = 0;
if (size == 0)
{
return (NULL);
}
ptr = (char *)malloc(size * sizeof(char));
if (ptr == NULL)
return (0);
while (k < size)
{
*(ptr + k) = c;
k++;
}
*(p + k) = "\0";
return (p);


}
