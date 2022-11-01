#include "main.h"
#include "string.h"

/**
 * create_file - creates a new file with a filename and content
 * @filename: name of file
 * @text_content: content to write into file
 *
 * Return: 1 on succes or -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
int fd;
size_t len;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (!text_content)
{
write(fd, "", 1);
close(fd);
return (1);
}

len = strlen(text_content);

if (write(fd, text_content, len) == -1)
return (-1);

close(fd);
return (1);

}
