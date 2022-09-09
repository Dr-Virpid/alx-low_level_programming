#include <stdio.h>

/**
 * main - prints out all lowercase alphabet followed by a newline
 * Return: 0 after adding the newline
 */
int main(void)
{
char lowercase = 'a';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
putchar('\n');
return (0);
}
