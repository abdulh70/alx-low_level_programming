/**
 * _strcmp - a function that compares two string
 * @s1: string 1
 * @s2: against this other string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int d1 = 0, d2;
/**
 * iterate through src and
 * compare it with dest
 */
while (s1[d1] != '\0' && s2[d1] != '\0')
{
/**
 * if they differ by a single character
 * don't iterate further
 */
if (s1[d1] != s2[d1])
{
/*
 * return the difference between
 *the two characters
 */
d2 = s1[d1] - s2[d1];
break;
}
else
{
d2 = s1[d1] - s2[d1];
}
d1++;
}
return (d2);
}

