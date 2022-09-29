#include "main.h"

long int _sqrt(long int, long int);

/**
 * _sqrt_recursion - checks the input to see if its has a natural square root
 * @n: number input
 * Return: square root of the number or -1 if it doesn't have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
if (n > 0)
return (-1 * _sqrt(n, n));
return (-1);
}

/**
 * _sqrt - finds if a number has a natural square root
 * @n: number to check
 * @y: counter that reduces by one with each function call
 * Return: a number
 */
long int _sqrt(long int n, long int y)
{
if (y * y == n)
return (-y);
else if (y <= 1)
return (1);
else
return (1 * _sqrt(n, y - 1));
}
