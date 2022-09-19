#include "main.h"

/**
 * print_rev - print a string in reverse followed by a newline
 * @s: string literal
 * Return: none
 */
void print_rev(char *s)
{
int i = 0;

while (*(i + s) != '\0')
i++;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
