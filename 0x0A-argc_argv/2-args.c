#include <stdio.h>

/**
 * main - prints out all command line arguments
 * @argc: number of command line arguments
 * @argv: array that stores command line arguments
 * Return: 0 after completion
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
