#include "main.c"

/**
 * print_alphabet utlilzes on the _putchar function toprint
 * print_alphabet the alohabet a - z
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
