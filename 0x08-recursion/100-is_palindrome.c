#include "main.h"
/**
* _strlen_recursion -function returns length of a string.
* @s: string parameter
* Return: length of a string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
/**
* operator - compares each character of the string.
* @s: string
* @n1: smallest iterator.
* @n2: largest iterator.
* Return: .
*/
int operator(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + operator(s, n1 + 1, n2 - 1));
}
return (0);
}
/**
* is_palindrome - checks if a string is a palindrome.
* @s: string parameter.
* Return: 1 if s is a palindrome, 0 if not.
*/
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (operator(s, 0, _strlen_recursion(s) - 1));
}
