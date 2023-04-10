#include "main.h"
/**
 * create_file - a fonction creates a file
 * @filename: pointeur to name of file create
 * @text_content: ponteur to a string  to write of file
 * Return: if fonction fail -1,
 * On succes -- 1
 */
int create_file(const char *filename, char *text_content)
{
int bytes_w, fd, len = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
bytes_w = write(fd, text_content, len);
if (fd == -1 || bytes_w == -1)
return (-1);
close(fd);
return (-1);
}



