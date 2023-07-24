#include "main.h"

/**
 * _strlen - retuns the length of a string
 *
 * @s: input prameter 1
 *
 * Return: legth of string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}
