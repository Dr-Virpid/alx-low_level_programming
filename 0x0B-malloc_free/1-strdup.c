#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates string passed to it, returns address of the duplicate
 * @str: string passed to it
 * Return: address of the string or NULL if space could not be allocated or
 * value of the string is NULl
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	int i = 0;
	int j = 0;
	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
