#include <stdio.h>

/**
 * main - prints out all lowercase alphabet followed by uppercase
 * then a newline
 * Return: 0 after adding the newline
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}

