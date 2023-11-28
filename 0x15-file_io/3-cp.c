#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - program
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 on success 1 on failure
 */
int main(int argc, char *argv[])
{
	int in, out, rimnder, writ;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	in = open(argv[1], O_RDONLY);
	rimnder = read(in, buffer, 1024);
	out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (in == -1 || rimnder == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read in file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writ = write(out, buffer, rimnder);
		if (out == -1 || writ == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rimnder = read(in, buffer, 1024);
		out = open(argv[2], O_WRONLY | O_APPEND);

	} while (rimnder > 0);

	free(buffer);
	close_file(in);
	close_file(out);

	return (0);
}
