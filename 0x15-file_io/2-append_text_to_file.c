#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: name of file to creat
 * @text_content: text to write
 *
 * Return: 1 of success 0 on faliure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int felo, number, tem;

	if (!filename)
		return (-1);

	felo = open(filename, O_WRONLY | O_APPEND);

	if (felo == -1)
		return (-1);

	if (text_content)
	{
		for (number = 0; text_content[number]; number++)
			;

		tem = write(felo, text_content, number);

		if (tem == -1)
			return (-1);
	}

	close(felo);

	return (1);
}
