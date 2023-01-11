#include <stdlib.h>
#include "main.h"
/**
 *_strdup - copies the string given as parameter
 *@str: string to duplicate
 *Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
unsigned int k, len;
char *d;
k = 0;
len = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
d = malloc(sizeof(char) * (len + 1));
if (d == NULL)
return (NULL);
while ((d[k] = str[k]) != '\0')
k++;
return (d);
}

