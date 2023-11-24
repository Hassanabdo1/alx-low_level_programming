#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @j: The number to print in binary.
 */
void print_binary(unsigned long int j)
{
	int tl = 63, resolt = 0;
	unsigned long int centrly;

	while (tl >= 0)
	{
		centrly = j >> tl;

		switch (centrly & 1)
		{
			case 1:
				_putchar('1');
				resolt++;
				break;
			case 0:
				if (resolt)
					_putchar('0');
				break;
		}

		tl--;
	}

	if (!resolt)
		_putchar('0');
}
