#include "main.h"

void error_file(int from_fd, int to_fd, char *argv[]);

/**
 * main - copies the content of a file to a new file
 * argc - argument count
 * argv - argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
int from_fd, to_fd, nclose;
ssize_t nread, nwrite;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

from_fd = open(argv[1], O_RDONLY);
to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(from_fd, to_fd, argv);

nread = 1024;
while (nread == 1024)
{
nread = read(from_fd, buff, 1024);
if (nread == -1)
error_file(-1, 0, argv);
nwrite = write(to_fd, buff, nread);
if (nwrite == -1)
error_file(0, -1, argv);
}

nclose = close(from_fd);
if (nclose == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
exit(100);
}

nclose = close(to_fd);
if (nclose == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
exit(100);
}
return (0);
}
