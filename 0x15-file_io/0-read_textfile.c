#include "main.h"


/**
 * read_textfile - reads the content of a text file and
 * display it on the standard output
 * @filename: name of the file to read
 * @letters: number of characters in the file to write to stdout
 *
 * Return: the number of characters written
 * or -1 if error occur
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
int fd;
ssize_t nwrite, nread;

if (!filename)
return (0);

buff = malloc(letters + 1);
if (buff == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

nread = read(fd, buff, letters);
buff[letters] = '\0';

nwrite = write(STDOUT_FILENO, buff, nread);

free(buff);
close(fd);

return (nwrite);
}
