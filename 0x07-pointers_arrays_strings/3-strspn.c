#include "main.h"
/**
* _strspn - Function getss length of substring
* @s: input parameter
* @accept: input parameter
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
int k, j, m;
k = 0;
while (s[k] != '\0')
{
j = 0;
m = 1;
while (accept[j] != '\0')
{
if (s[k] == accept[j])
{
m = 0;
break;
}
j++;
}
if (m == 1)
break;
k++;
}
return (k);
}
