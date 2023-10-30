#include "main.h"
/**
* append_text_to_file - To append a text
* @filename: file to append text
* @text_content: Content of file to be appended
*
* Return: Return 1 on success or 0 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
ssize_t fd, _write;

if (filename == NULL)
	return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
	return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}
_write = write(fd, text_content, strlen(text_content));
if (_write == -1)
	return (-1);
close(fd);
return (1);
}
