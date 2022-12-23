/**
 * _strcat - function that concatenates
 *two strings
 * @dest: destination string
 * @src: source string
 * Return: return result
 */
char *_strcat(char *dest, char *src)
{
int d1, d2;
d1 = 0;
/*dest array size*/
while (dest[d1])
d1++;
/* iterate throug the src array*/
for (d2 = 0; src[d2] ; d2++)
/*append src[c2] to dest[c] while overwritting the null byte in dest*/
dest[d1++] = src[d2];
return (dest);
}
