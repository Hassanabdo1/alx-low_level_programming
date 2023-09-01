#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: the number to print in pinary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int nop, counts = 0;
	unsigned long int current;

	for (nop = 63; nop >= 0; nop--)
	{
		current = n >> nop;

		if (current & 1)
		{
			_putchar('1');
			counts++;
		}
		else if (counts)
			_putchar('0');
	}
	if (!counts)
		_putchar('0');
}
