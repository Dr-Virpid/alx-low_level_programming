#include <stdio.h>
#include "main.h"

/**
 * main - prints out a string
 * Return: returns 0 after completion
 */
int main(void)
{
int i = 0;
char letter[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
while (i < 8)
{
char d = letter[i];
_putchar(d);
}
return (0);
}
