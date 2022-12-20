/**
 * swap_int - swaps the values of two integers
 * using two input parameters
 * @a: input parameter
 * @b: input parameter
 * Return: zero
 */
void swap_int(int *a, int *b)
{

int swap;
swap = *a;
*a = *b;
*b = swap;
}
