#include <stdlib.h>
#include <time.h>

/**
 * main - checks if the last digit of a number is greater than
 * 6, equals to zero or less than 5. Negative number included.
 * Return: 0 after the checks
 */
int main(void)
{
int n;
int d;

srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10
if (d > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, d);
}
else if (d == 0)
{
printf("last digit of %d is %d and is 0\n", n, d);
}
else if (d < 6)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, d);
}
return (0);
}
