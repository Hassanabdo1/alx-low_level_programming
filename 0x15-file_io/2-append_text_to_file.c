#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 of success 0 on faliure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num, j = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
			j++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	num = write(fd, text_content, j);

	if (fd == -1 || num == -1)
		return (-1);

	close(fd);

	return (1);
}
