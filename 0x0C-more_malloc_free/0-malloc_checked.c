#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory of size int b and returns the address
 * or return an exit code of 98 if space could not be allocated
 * @b: size of memory to be allocated
 * Return: address to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);

}
