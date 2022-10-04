#include "main.h"

/**
 * alloc_grid - returns a pointer to a two dimensional array
 * containing zeros
 * @width: number of elements in each array
 * @height: number of arrays
 * Return: pointer to the 2d array or NULL
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **ptr;

ptr = malloc(sizeof(int *) * height);

if (ptr == NULL)
return (NULL);

for (i = 0; i < height; i++)
ptr[i] = malloc(sizeof(int) * width);

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
ptr[i][j] = 0;
}

return (ptr);
}
