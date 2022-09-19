#include "main.h"

/**
 * _strlen - finds the length of a string by accessing it with the pointer
 * @s: a pointer for array of characters(string)
 * Return: length of the string
 */
int _strlen(char *s)
{
int i, n;
i = *s;
n = sizeof(i) / sizeof(i[0]);
return (n);
}
