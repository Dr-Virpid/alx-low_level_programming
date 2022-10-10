#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - removes the allocated space in memory of a struct
 * @d: struct pointer
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(dog_t->name);
free(dog_t->owner);
free(dog_t);
}

}
