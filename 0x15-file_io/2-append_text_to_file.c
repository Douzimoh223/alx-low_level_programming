#include "main.h"
/**
 * append_text_to_file -  a function that appends
 * text at the end of a file
 * @filename: a pointeur of a file append
 * @text_content: The string to add to the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int bytes_w, a, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
a = open(filename, O_WRONLY | O_APPEND);
bytes_w = write(a, text_content, len);
if (a == -1 || bytes_w == -1)
return (-1);
close(a);
return (1);
}
