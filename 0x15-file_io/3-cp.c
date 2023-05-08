#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @filename: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *filename)
{
char *buffer_size;
buffer_size = malloc(sizeof(char) * 1024);

if (buffer_size == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer_size);
}

/**
 * close_file_descriptor - Closes file descriptors.
 * @file_desc: The file descriptor to be closed.
 */
void close_file_descriptor(int file_desc)
{
int close_file;
close_file = close(file_desc);

if (close_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file_desc %d\n", file_desc);
exit(100);
}
}

/**
 * copy_file - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int copy_file(int argc, char *argv[])
{
int current_file, new_file, rd, wr;
char *buffer_size;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer_size = allocate_buffer(argv[2]);
current_file = open(argv[1], O_RDONLY);
rd = read(current_file, buffer_size, 1024);
new_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (current_file == -1 || rd == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer_size);
exit(98);
}
wr = write(new_file, buffer_size, rd);
if (new_file == -1 || wr == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer_size);
exit(99);
}
rd = read(current_file, buffer_size, 1024);
new_file = open(argv[2], O_WRONLY | O_APPEND);
} while (rd > 0);
free(buffer_size);
close_file_descriptor(current_file);
close_file_descriptor(new_file);
return (0);
}

