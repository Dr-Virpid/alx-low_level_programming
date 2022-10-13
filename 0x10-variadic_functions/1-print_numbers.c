#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_numbers - prints out all the numbers separated by the separator char
 * @seperator: separator character(s)
 * @n: number of integers to print out
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
if (separator == NULL)
printf("%d", va_arg(args, int));
else if (i == n - 1)
printf("%d\n", va_arg(args, int));
else
printf("%d%s", va_arg(args, int), separator);
}

}
