#include "variadic_functions.h"


/**
 * print_all - prints out any type of datatype
 * @format: format of each datatype
 */
void print_all(const char * const format, ...)
{
int i, j;
char *str;
int num;
float flt;
char letter;
va_list args;

va_start(args, format);

i = 0;
while (format[i] != '\0')
{

j = 0;
while (typ[j] != '\0')
{

switch (format[i])
{
case "c":
letter = va_arg(args, char);
printf

}

j++;
}

i++;
}

}
