#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
int i, j;
char *ptr1, *ptr2;
dog_t *newdog;

newdog = malloc(sizeof(*newdog));
if (newdog == NULL || name == NULL || owner == NULL)
return (NULL);

newdog->age = age;

for (i = 0; name[i] != '\0'; i++)
;

for (j = 0; owner[j] != '\0'; j++)
;

ptr1 = malloc(i + 1);
if (ptr1 == NULL)
{
free(newdog->age);
free(newdog->name);
free(newdog->owner);
free(newdog);
return (NULL);
}

ptr2 = malloc(j + 1);
if (ptr2 == NULL)
{
free(newdog->age);
free(newdog->name);
free(newdog->owner);
free(newdog);
return (NULL);
}

strcpy(ptr1, name);
strcpy(ptr2, owner);

newdog->name = ptr1;
newdog->owner = ptr2;

return (newdog);
}
