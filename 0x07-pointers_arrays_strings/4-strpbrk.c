#include "main.h"
/**
* _strpbrk - program that searches a string
* @s: input parameter
* @accept: input parameter
* Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
int k, m;
k = 0;
while (s[k] != '\0')
{
m = 0;
while (accept[m] != '\0')
{
if (s[k] == accept[m])
return (s + k);
m++;
}
k++;
}
return ('\0');
}
