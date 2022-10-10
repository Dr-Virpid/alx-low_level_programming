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
int i, j, k, l;
dog_t *newdog;

newdog = malloc(sizeof(*newdog));
if (newdog == NULL || name == NULL || owner == NULL)
return (NULL);

for (i = 0; name[i] != '\0'; i++)
;

for (j = 0; owner[j] != '\0'; j++)
;

newdog->name = malloc(i + 1);
newdog->owner = malloc(j + 1);

if (newdog->name == NULL || newdog->owner == NULL)
{
free(newdog->name);
free(newdog->owner);
free(newdog);
return (NULL);
}

for (k = 0; k < i; k++)
newdog->name[k] = name[k];
newdog->name[k] = '\0';

newdog->age = age;

for (l = 0; l < j; l++)
newdog->owner[l] = owner[l];
newdog->owner[l] = '\0';

return (newdog);
}
