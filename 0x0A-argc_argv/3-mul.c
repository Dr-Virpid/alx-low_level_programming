#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two inputs together
 * @argc: number of command line arguments
 * @argv: array that stores command line arguments
 * Return: 0 after completion or 1 if two numbers are not given
 */
int main(int argc, int *argv[])
{

if (argc == 3)
{
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

printf("Error\n");
return (1);
}
