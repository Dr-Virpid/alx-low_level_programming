#include <stdio.h>

/**
 * main - prints the size of multiple data type on each computer
 * Return: returns 0 after successful completion of all printf statements
 */
int main(void)
{
char c;
int i;
float d;
long int a;
long long int b;

printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(a));
printf("Size of a long long int: %d byte(s)\n", sizeof(b));
printf("Size of a float: %d byte(s)\n", sizeof(d));
return (0);
}
