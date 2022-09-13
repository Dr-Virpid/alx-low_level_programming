#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - prints from the specified number to 98
 * @n: integer to start printing from
 * Return: none
 */
void print_to_98(int n)
{
while (n < 99)
{
printf("%d, ", n);
n++;
}
_putchar('\n');
}
