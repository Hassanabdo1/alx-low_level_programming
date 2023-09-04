#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return:  i in success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, num, j = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
			j++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	num = write(o, text_content, j);

	if (o == -1 || num == -1)
		return (-1);

	close(o);

	return (1);
}