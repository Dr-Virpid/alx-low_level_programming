#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text to end of a file
 * @filename: file to append to
 * @text_content: text to append to file
 *
 * Return: 1 if successful or -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
size_t len;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (!text_content)
text_content = "";

len = strlen(text_content);

if (write(fd, text_content, len) == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
