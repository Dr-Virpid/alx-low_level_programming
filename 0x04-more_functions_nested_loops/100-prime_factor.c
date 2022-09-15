#include <stdio.h>

int prime(int a);

/**
 * main - finds the highest prime factor of a number
 * Return: none
 */
int main(void)
{
long int i, j;
int k;
i = 612852475143;
for (k = 2; k <= (i / 2); k++)
{
if (i % k == 0 && prime(k) == 0)
j = k;
}
printf("%li\n", j);
return (0);
}

/**
 * prime - checks if a number is a prime number
 * @a: number to be checked
 * Return 0 if its a prime number and 1 otherwise
 */
int prime(int a)
{
int i;
for (i = 2; i < a; i++)
{
if (a % i == 0)
return (1);
}
return (0);
}
