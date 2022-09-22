#include "main.h"

/**
 * _strncpy - copy the first n characters of a string to another string
 * @dest - destination string
 * @src - source string to copy from
 * @n - number of characters to copy from source string
 * Return: address to first string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n)
{
/* if (*(dest + i) == '\0') */

*(dest + i) = *(src + i);

if (*(src + i) == '\0') 
break;

i++;
}
return (dest);
}
