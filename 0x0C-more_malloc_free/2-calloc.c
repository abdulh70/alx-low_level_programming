#include <stdlib.h>
/**
 *_memset -function allocates memory
 *@s: input pointer
 *@b: character input
 *@n: number of bytes
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
s[j] = b;
return (s);
}
/**
 *_calloc - a function that allocates memory
 * @nmemb: array size
 *@size: size of each element
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
_memset(p, 0, nmemb * size);
return (p);
}
