/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: most number of bytes from @src
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int d1, d2;
d1 = 0;
/*dest array size*/
while (dest[d1])
d1++;
/**
* src no need to be null terminated
* if it contains n or more bytes
*/

for (d2 = 0; d2 < n && src[d2] != '\0'; d2++)
dest[d1 + d2] = src[d2];
/*null terminate dest*/
dest[d1 + d2] = '\0';
return (dest);
}
