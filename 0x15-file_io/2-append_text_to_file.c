#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of file to creat
 * @text_content: text to write
 *
 * Return: 1 of success 0 on faliure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int felo, number, g = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (g = 0; text_content[g];)
			j++;
	}

	felo = open(filename, O_WRONLY | O_APPEND);
	number = write(felo, text_content, g);

	if (felo == -1 || number == -1)
		return (-1);

	close(felo);

	return (1);
}
