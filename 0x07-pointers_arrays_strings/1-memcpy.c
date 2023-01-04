#include "main.h"
/**
 * _memcpy - function to copy memory
 *
 * @dest: buffer to copy to
 * @src: what we are to copy
 * @n: n bytes of @src
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
return (dest);
}
