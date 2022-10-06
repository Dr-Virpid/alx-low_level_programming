#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements
 * each element with a size of <size>
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 * Return: address of the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int memsize;
char *ptr;

memsize = nmemb * size;
if (memsize == 0)
return (NULL);

ptr = malloc(memsize);
if (ptr == NULL)
return (NULL);

for (i = 0; i < memsize; i++)
*(ptr + i) = 0;

return (ptr);
}
