#include "main.h"

/**
 * print_last_digit - returns the last digit of an integer
 * @c: integer input
 * Return: the last digit of the input
 */
int print_last_digit(int c)
{
if (c < 0)
{
c *= -1;
c = c % 10;
}
else if (c > 100)
c = c % 100;
else if (c > 0)
c = c % 10;
else if (c == 0)
c = 00;
return (c);
}
