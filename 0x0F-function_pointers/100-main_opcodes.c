#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: A program that prints the opcodes
 * @argc: argument
 * @argv: argument
 * Return: Always Successful
 */
int main(int argc, char *argv[])
{
int i, n;
char *ptr = (char *) main;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < n; i++)
{
printf("%02x", ptr[i] & 0xFF);
if (i != n - 1)
printf(" ");
}
printf("\n");
return (0);
}
