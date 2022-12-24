/**
 * leet - a function that encodes a string into 1337
 * @s: string input
 *Return: @s
 */
char *leet(char *s)
{
int i, d = 0;
int sl[] = {97, 101, 111, 116, 108};
int ul[] = {65, 69, 79, 84, 76};
int n[] = {52, 51, 48, 55, 49};
/*iteratation */
while (s[d] != '\0')
{
/**
 * looping five times through array
 */
for (i = 0; i < 5; i++)
{
if (s[d] == sl[i] || s[d] == ul[i])
{
s[d] = n[i];
break;
}
}
d++;
}
return (s);
}
