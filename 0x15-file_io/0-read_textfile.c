#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: is a  file contain text to be read
 * @letters: number  of letters to be  read
 * Return: bytes_written actual number
 * of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fd;
ssize_t bytes_w;
ssize_t bytes_r;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * (letters + 1));
bytes_r = read(fd, buffer, letters);
bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
free(buffer);
close(fd);
return (bytes_w);
}
