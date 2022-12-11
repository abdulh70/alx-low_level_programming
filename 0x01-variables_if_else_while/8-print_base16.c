#include <stdio.h>
/**
 * main -prints hexadecimal in lowercase
 * Return: Always (0)
 */
int main(void)
{
int num;
char letters;
for (num = 48; num < 58; num++)
{
putchar(num);
}
for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);





}
