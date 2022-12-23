/**
 * reverse_array - a program that reverses integer array
 * @a: array of type int
 * @n: number elements to swap
 * Return: zero
 */
void reverse_array(int *a, int n)
{
int t, d1, e;
d1 = 0;
e = n - 1;
/**
 * set array value a to  t
 */
while (d1 < e)
{
t = a[d1];
a[d1] = a[e];
a[e] = t;
d1++;
e--;
}
}

