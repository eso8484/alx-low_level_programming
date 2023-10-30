#include "main.h"
/**
* create_file - to create file
* @text_content: content of file
* @filename: name of file
*
* Return: Return 1 on success or 0 on failure
*/

int create_file(const char *filename, char *text_content)
{
ssize_t fd, _write, counter = 0;

if (filename == NULL)
	return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
	return (-1);
if (text_content)
{
while (text_content[counter])
	counter++;
_write = write(fd, text_content, counter);
}

if (_write == -1)
	return (-1);
close(fd);
return (1);
}
