#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers starting from
 * min and ends with max
 * @min: first number of the array
 * @max: last number of the array
 * Return: address to the allocated array
 */
int *array_range(int min, int max)
{
int i, j;
int *ptr;

if (min > max)
return (NULL);

ptr = malloc(sizeof(*ptr) * (max - min + 1));
if (ptr == NULL)
return (NULL);

j = 0;
for (i = min; i <= max; i++, j++)
ptr[j] = i;

return (ptr);

}
