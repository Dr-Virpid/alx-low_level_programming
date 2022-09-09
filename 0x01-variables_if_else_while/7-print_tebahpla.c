#include <stdio.h>

/**
 * main - prints out all single base 10 numbers using
 * putchar and without declaring a type char
 * Return: 0 after successful completion
 */
int main(void)
{
int a;

for (a = 122; a >= 97; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}

