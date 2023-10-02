#include "main.h"


/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: w- actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int tmp;
    ssize_t bytes;
    char buf[READ_BUF_SIZE * 8];

    if (!filename || !letters)
        return (0);
    tmp = open(filename, O_RDONLY);
    if (tmp == -1)
        return (0);
    bytes = read(tmp, &buf[0], letters);
    bytes = write(STDOUT_FILENO, &buf[0], bytes);
    close(tmp);
    return (bytes);
}
