#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a struct of type dog_t and initialize
 * the age owner and name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: address of the initialized struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;

newdog = malloc(sizeof(*newdog));
if (newdog == NULL || name == NULL || owner == NULL)
return (NULL);


newdog->name = name;
newdog->age = age;
newdog->owner = owner;

return (newdog);
}
