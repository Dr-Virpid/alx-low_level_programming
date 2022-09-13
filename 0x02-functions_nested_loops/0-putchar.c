#include <stdio.h>
#include "main.h"

/**
 * main - prints out a string
 * Return: returns 0 after completion
 */
int main(void)
{
int i = 0;
char letter[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
while (i < 8)
{
char d = letter[i];
_putchar(d);
i++;
}
return (0);
}
