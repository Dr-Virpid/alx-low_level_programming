#include "main.h"

/**
 * print_diagonal
 * @n: number of times to print character "\"
 * Return: none
 */
void print_diagonal(int n)
{
if (n > 0)
{
while(n--)
_putchar('\\');
}
_putchar('\n');
}
