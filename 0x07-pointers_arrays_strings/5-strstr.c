#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
char *j, *m;
while (*haystack != '\0')
{
j = haystack;
m = needle;
while (*m != '\0' && *haystack == *m)
{
haystack++;
m++;
}
if (!*n)
return (j);
haystack++;
}
return ('\0');
}
