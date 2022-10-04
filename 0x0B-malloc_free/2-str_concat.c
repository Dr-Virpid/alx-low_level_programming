#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string and return the address of the
 * new string
 * @s1: first string
 * @s2: second string
 * Return: address of the new string or NULL if it failed
 */
char *str_concat(char *s1, char *s2)
{
int i, j, k, l;
char *ptr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (k = 0; s1[k] != '\0'; k++);

for (l = 0; s1[l] != '\0'; l++);

ptr = malloc(sizeof(char) * (k + l + 1));
if (ptr == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];

for (j = 0; s2[j] != '\0'; j++, i++)
ptr[i] = s2[j];

ptr[i] = '\0';

return (ptr);
}
