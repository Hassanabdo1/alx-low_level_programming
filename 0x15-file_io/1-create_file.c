/**
 * create_file - Creates a new file or overwrites an existing file with text content.
 * @filename: A pointer to the name of the file to create or overwrite.
 * @text_content: The text content to write into the file. Pass NULL to create an empty file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, len, j = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (j = 0; text_content[j];)
            j++;
    }

    fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    len = write(fd, text_content, j);

    if (fd == -1 || len == -1)
        return (-1);

    close(fd);

    return (1);
}
