#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - checks if the random number generated is greater,less
 * or equal to zero
 * Return: 0 after successful completion of the if blocks
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
