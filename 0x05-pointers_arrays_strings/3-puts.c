i
#include "main.h"

/**
 * _puts - prints a string, followed by a new line 
 *
 * &stt: string paramoter to print 
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
