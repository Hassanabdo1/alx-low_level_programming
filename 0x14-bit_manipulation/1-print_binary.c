#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The number to print in binary.
 *
 * This function takes an unsigned long int 'n' and prints its binary
 * representation to the standard output.
 *
 * @n: The number to convert and print.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int tmp, result = 0;
	unsigned long int current;

	for (tmp = 63; tmp >= 0; tmp--)
	{
		current = n >> tmp;

		if (current & 1)
		{
			_putchar('1');
			result++;
		}
		else if (result)
			_putchar('0');
	}
	if (!result)
		_putchar('0');
}

