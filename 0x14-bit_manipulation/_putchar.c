#include "main.h"
#include <unistd.h>
/**
 * _putchar - Custom character output function for stdout
 *
 * This function writes a single character 'c' to the standard output (stdout).
 * It is part of a custom I/O library for character-level output.
 *
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error with errno indicating the cause.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
