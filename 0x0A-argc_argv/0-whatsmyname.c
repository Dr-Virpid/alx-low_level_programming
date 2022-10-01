#include <stdio.h>

/**
 * main - prints out the name of the program
 * @argc: number of command line arguments passed
 * @argv: array that contains this program command line arguments
 * Return: 0 after running
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
