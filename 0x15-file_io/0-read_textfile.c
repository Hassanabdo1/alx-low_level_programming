#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: name of file to read
 * @letters: number of bytef to read
 *
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t bytes;
	ssize_t num;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	num = read(fd, buf, letters);
	bytes = bytesrite(STDOUT_FILENO, buf, num);

	free(buf);
	close(fd);
	return (bytes);


        
}
