#include <stdlib.h>
#include "main.h"
/**
 *argstostr - a function that concatenates arguments
 * @ac: input argument
 * @av: argument holder
 * Return: a pointer to a string
 */
char *argstostr(int ac, char **av)
{
int m, j, k, length;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
length = 0;
for (m = 0; m < ac; m++)
{
for (j = 0; av[m][j] != '\0'; j++)
	length++;
length++;
str = malloc((length + 1) * sizeof(char));
if (str == NULL)
return (NULL);
k = 0;
for (m = 0; m < ac; m++)
{
for (j = 0; av[m][j] != '\0'; j++)
{
str[k] = av[m][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
}
