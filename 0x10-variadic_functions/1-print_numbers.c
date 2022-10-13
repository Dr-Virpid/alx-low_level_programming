#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints out all the numbers separated by the separator char
 * @separator: separator character(s)
 * @n: number of integers to print out
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

if (n <= 0)
return;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (i < n-1 && sep)
printf("%s", separator);

}
printf("\n");
va_end(args);
}
