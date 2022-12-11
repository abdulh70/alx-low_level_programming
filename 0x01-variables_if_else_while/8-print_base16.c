#include <stdio.h>
/**
 * main -prints hexadecimal in lowercase
 * Return: Always (0)
 */
int main(void)
{
int num;
for (num = 48; num < 58; num++)
{
putchar(num);
}

char letters;
for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
return (0);





}
