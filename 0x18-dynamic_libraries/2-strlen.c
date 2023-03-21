/**
 * _strlen -program that reurns length of
 * a string
 * @s: -parameter
 * Return: length of a string
 */
int _strlen(char *s)
{

int count;
for (count = 0; *s != '\0'; ++s)
	++count;
return (count);
}
