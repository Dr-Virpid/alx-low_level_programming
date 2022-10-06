#include "main.h"
#include <stdlib.h>

/**
 * _realloc - expands the memory allocated previously by malloc and returns
 * the address to the expanded memory
 * @ptr: address of the allocated memory
 * @old_size: size of memory allocated to the address
 * @new_size: size of memory to expand to
 * Return: address of the expanded memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
nptr = malloc(new_size);
return (nptr);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}


}
