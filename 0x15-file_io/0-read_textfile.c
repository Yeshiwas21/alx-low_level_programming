#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t op, rd, wr;
char *buffer_size;

if (filename == NULL)
	return (0);
buffer_size = malloc(sizeof(char) * letters);
if (buffer_size == NULL)
	return (0);
op = open(filename, O_RDONLY);
rd = read(op, buffer_size, letters);
write = write(STDOUT_FILENO, buffer_size, rd);
if (op == -1 || rd == -1 || wr == -1 || wr != rd)
{
free(buffer_size);
return (0);
}
free(buffer_size);
close(op);
return (wr);
}
