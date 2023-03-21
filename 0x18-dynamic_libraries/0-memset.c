#include "main.h"
/**
* _memset -function which fills a memory with a standard value
* @s: starting input value of memory to be filled
* @b: required value
* @n: number of bytes to be filled
*
* Return: returned array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int k = 0;
for (; n > 0; k++)
{
s[k] = b;
n--;

}
return (s);

}
