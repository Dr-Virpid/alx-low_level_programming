#include <stdio.h>

/**
 * main - prints out the number of arguments passed to the program
 * @argc: number of command line arguments
 * @argv: array that stores command line arguments
 * Return: 0 after completion
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", --argc);
return (0);
}
