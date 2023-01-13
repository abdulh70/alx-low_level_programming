#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - nested loop to make grid
 * @width: width parameter
 * @height: height input parameter
 * Return: pointer
 *or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
int **x;
int k, j;
if (height <= 0 || width <= 0)
return (NULL);
x = (int **) malloc(sizeof(int *) * height);
if (x == NULL)
return (NULL);
for (k = 0; k < height; k++)
{
x[k] = (int *) malloc(sizeof(int) * width);
if (x[k] == NULL)
{
free(x);
for (j = 0; j <= k; j++)
free(x[j]);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (j = 0; j < width; j++)
{
x[k][j] = 0;
}
}
return (x);
}
