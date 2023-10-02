#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: w- actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t byest;
	ssize_t tmp;
	ssize_t tfil;

	byest = open(filename, O_RDONLY);
	if (byest == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tfil = read(byest, buf, letters);
	tmp = write(STDOUT_FILENO, buf, tfil);

	free(buf);
	close(byest);
	return (tmp);
}
