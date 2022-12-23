/**
 * string_toupper - a program that changes
 * lowercase letters to uppercase
 * @s : input
 * Return: @s
 */
char *string_toupper(char *s)
{
int d1 = 0;
while (s[d1] != '\0')
{
if (s[d1] >= 97 && s[d1] <= 122)
s[d1] = s[d1] - 32;
d1++;
}
return (s);
}

