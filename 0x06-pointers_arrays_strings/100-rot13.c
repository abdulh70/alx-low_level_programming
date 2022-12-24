#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
int d1;
int k;
char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datar[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (d1 = 0; s[d1] != '\0'; d1++)
{
for (k = 0; k < 52; k++)
{
if (s[d1] == data[k])
{
s[d1] = datar[k];
break;
}
}
}
return (s);
}



