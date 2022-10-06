#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate the first n characters
 * of string 2 to string one and return the address of the new string
 * @s1: first string
 * @s2: second string
 * @n: number of characters in s2 to concatenate to s1
 * Return: address of the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k, l;
char *ptr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;

for (j = 0; s2[j] != '\0'; j++)
;
if (j >= n)
j = n;

ptr = malloc(j + i + 1);
if (ptr == NULL)
return (NULL);

for (k = 0; k < i; k++)
ptr[k] = s1[k];

for (l = 0; l < j; l++, k++)
ptr[k] = s2[l];

ptr[k] = '\0';

return (ptr);
}
