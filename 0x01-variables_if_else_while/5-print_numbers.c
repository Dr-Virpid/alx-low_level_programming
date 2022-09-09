#include <stdio.h>

/**
 * main - prints all single digit base 10 numbers
 * Return: 0 after successful completion
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
printf("%d", num);
}
putchar('\n');
return (0);
}
