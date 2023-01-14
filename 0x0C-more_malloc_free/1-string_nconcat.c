#include <stdlib.h>
/**
 * string_nconcat -function that concatenates two strings
 * @s1: input string 1
 * @s2:input string 2
 * @n: input
 * Return: new pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b, i, j;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
a = b = 0;
while (s1[a] != '\0')
a++;
while (s2[b] != '\0')
b++;
if (n >= b)
n = b;
str = (char *) malloc((a + n + 1) * sizeof(char));
if (str == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; j < n && s2[j] != '\0'; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';
return (str);
}
