#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: The text file to be read.
 * @letters: The number of letters to be read.
 *
 * Return: The actual number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t byest;
	ssize_t num;
	ssize_t t;
	byest = open(filename, O_RDONLY);
	if (byest == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(byest, buf, letters);
	num = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(byest);
	return (num);
}
