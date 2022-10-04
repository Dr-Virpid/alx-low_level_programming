#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of character ini+tialized with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: address of array or NULL if size is zero
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;
	
	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
	
}
