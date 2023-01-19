/**
 *function that prints a name
 *@name: input variable
 *@f:pointer
 *Return:zero
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
