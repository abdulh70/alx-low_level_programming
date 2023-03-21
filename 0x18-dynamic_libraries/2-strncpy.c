/**
 * _strncpy - A function that copies a string.
 * @dest: destination
 * @src: source
 * @n: bytes of @src
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int d2;

/**
 * iterate through the  src array
 */

for (d2 = 0; d2 < n && src[d2] != '\0'; d2++)
dest[d2] = src[d2];
/**
 * where the length of source is less than n
 * add additional nullbytesso that
 * n bytes is written
 */
while (d2 < n)
{
dest[d2] = '\0';
d2++;
}
return (dest);
}
