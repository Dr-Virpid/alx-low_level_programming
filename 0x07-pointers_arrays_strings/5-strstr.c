#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring in another string
 * @haystack: string to search inside
 * @needle: substring to search for
 * Return: address of the first occurence or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
	if (haystack[i] == needle[0])
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
					return ('\0');
		}
		return (haystack + i);
	}
}
return ('\0');
}
