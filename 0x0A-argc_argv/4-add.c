#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive number
 * @argc: number of commands form command line
 * @argv: array
 * Return: -0
 */
int main(int argc, char *argv[])
{
int k, l, add = 0;
for (k = 1; k < argc; k++)
{
for (l = 0; argv[k][l] != '\0'; l++)
{
if (!isdigit(argv[k][l]))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[k]);
}
printf("%d\n", add);
return (0);
}
