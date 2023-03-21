/**
 * _strcpy - copies a string from one pointer to another
 * @src: source
 * @dest: destination of string
 *Return: pointer to dest input parameter
 */
char *_strcpy(char *dest, char *src)
{
int m, b = 0;
for (m = 0; src[m] != '\0'; ++m)
{
dest[b] = src[m];
++b;
}
dest[b] = '\0';
return (dest);
}

