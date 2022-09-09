#include <stdio.h>

/**
 * main - prints 2 unique digits from between 00 and 99
 * i.e 01 is the same as 10 so don't put 10
 * Return: 0 always
 */
int main(void)
{
int first = 48;
int second = 48;

while (first < 58)
{
while (second < 58)
{
if (first != second && first < second)
{
putchar(first);
putchar(second);
if (first == 57 && second == 56)
{
break;
}
putchar(',');
putchar(' ');
}

second++;
}
first++
}
return (0);
}
