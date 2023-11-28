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
	char *bufer;
	ssize_t bets;
	ssize_t number;
	ssize_t te;

	bets = open(filename, O_RDONLY);
	if (bets == -1)
		return (0);
	bufer = malloc(sizeof(char) * letters);
	te = read(bets, bufer, letters);
	number = write(STDOUT_FILENO, bufer, te);

	free(bufer);
	close(bets);
	return (number);
}
