#include "variadic_functions.h"


/**
 * print_all - prints out any type of datatype
 * @format: format of each datatype
 */
void print_all(const char * const format, ...)
{
int i, j = 0, count = 0;
char *str;
int num;
double flt;
int letter;
va_list args;

va_start(args, format);

while (format[j] != '\0')
j++;

i = 0;
while (format[i] != '\0' && format)
{

switch (format[i])
{
case 'c':
letter = va_arg(args, int);
printf("%c", letter);
count = 1;
break;

case 'i':
num = va_arg(args, int);
printf("%d", num);
count = 1;
break;

case 'f':
flt = va_arg(args, double);
printf("%f", flt);
count = 1;
break;

case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
count = 1;
break;
}
printf("%s", str);
count = 1;
break;
}

if (count && i < j - 1)
printf(", ");

i++;
}
printf("\n");
}
