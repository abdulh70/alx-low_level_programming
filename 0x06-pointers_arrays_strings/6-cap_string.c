/**
 * cap_string - capitalizes all words of a string
 * @s: character input array
 * Return: @s
 */
char *cap_string(char *s)
{
int d1 = 0;
/*iteratation*/
while (s[i] != '\0')
{
/*
 * check loweercase
 */

if (s[d1] >= 97 && s[d1] <= 122)
{
/**
 *
 */
if (d1 == 0)
{
s[d1] -= 32;
}
/**
 *
 */
if (s[d1 - 1] == 32 || s[d1 - 1] == 9 || s[d1 - 1] == 10 ||
s[d1 - 1] == 44 || s[d1 - 1] == 59 || s[d1 - 1] == 46 ||
s[d1 - 1] == 33 || s[d1 - 1] == 63 || s[d1 - 1] == 34 ||
s[d1 - 1] == 40 || s[d1 - 1] == 41 || s[d1 - 1] == 123 ||
s[d1 - 1] == 124)
{
s[d1] -= 32;
}
}
d1++;
}
return (d1)
}

