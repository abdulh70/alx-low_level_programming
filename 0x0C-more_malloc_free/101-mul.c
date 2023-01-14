#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memset - function that fills memory
 *@s:input pointer
 * @b: character
 * @n: byte
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int k = 0;
while (k < n)
{
s[k] = b;
k++;
}
return (s);
}
/**
 *_calloc - function that allocates memory
 * @nmemb: array size
 * @size: element size
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pttr;
if (nmemb == 0 || size == 0)
return (NULL);
pttr = malloc(nmemb * size);
if (pttr == NULL)
return (NULL);
_memset(pttr, 0, nmemb * size);
return (pttr);
}
/**
 * multiply - initialize array with 0 byte
 *@s1: string input 1
 * @s2: string input 2
 *Return: zero
 */
void multiply(char *s1, char *s2)
{
int k, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
char *ptr;
l1 = _length(s1);
l2 = _length(s2);
tmp = l2;
total_l = l1 + l2;
ptr = _calloc(sizeof(int), total_l);
temp = ptr;
for (l1--; l1 >= 0; l1--)
{
f_digit = s1[l1] - '0';
res = 0;
l2 = tmp;
for (l2--; l2 >= 0; l2--)
{
s_digit = s2[l2] - '0';
res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
ptr[l1 + l2 + 1] = res % 10;
res /= 10;
}
if (res)
ptr[l1 + l2 + 1] = res % 10;
}
while (*ptr == 0)
{
ptr++;
total_l--;
}
for (k = 0; k < total_l; k++)
printf("%i", ptr[k]);
printf("\n");
free(temp);
}
/**
 *main - Entry point
 * Description: a program that multiplies two positive numbers
 * @argc: arguments
 * @argv: arguments array
 *Return: 0 on success 98 on faliure
 */
int main(int argc, char *argv[])
{
char *n1 = argv[1];
char *n2 = argv[2];
if (argc != 3 || check_number(n1) || check_number(n2))
error_exit();
if (*n1 == '0' || *n2 == '0')
{
_putchar('0');
_putchar('\n');
}
else
multiply(n1, n2);
return (0);
}
















