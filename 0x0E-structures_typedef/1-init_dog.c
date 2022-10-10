#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct variable with passed arguments
 * @d: struct variable
 * @name: element to be initialized in struct var
 * @age: element to be initialized in struct var
 * @owner: element to be initialized in struct var
 *
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
