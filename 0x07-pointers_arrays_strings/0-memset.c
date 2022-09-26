#include "main.h"


/**
 * _memset - fills the first "n" characters of s with "b"
 * @s: pointer to the string
 * @b: character to replace with
 * @n: number of characters to replace
 * Return:
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
