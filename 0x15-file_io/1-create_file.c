#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int felo;
	int number;
	int tem;

	if (!filename)
		return (-1);

	felo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (felo == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (number = 0; text_content[number]; number++)
		;

	tem = write(felo, text_content, number);

	if (tem == -1)
		return (-1);

	close(felo);

	return (1);
}
