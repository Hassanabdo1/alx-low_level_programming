#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int felo, legthe, g = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (g = 0; text_content[j];)
			j++;
	}

	felo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	legthe = write(felo, text_content, g);

	if (felo == -1 || legthe == -1)
		return (-1);

	close(felo);

	return (1);
}
