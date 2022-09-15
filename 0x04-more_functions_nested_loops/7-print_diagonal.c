#include "main.h"

/**
 * print_diagonal
 * @n: number of times to print character "\"
 * Return: none
 */
void print_diagonal(int n)
{
int i = n;
int d;
if (n > 0)
{
while (n--)
{
for (d = i - n; d > 0; d--)
_putchar(' ');
_putchar('\\');
}
_putchar('\n');
}
