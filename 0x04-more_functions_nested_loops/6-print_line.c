#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0 - 14 ten times and you
 *can onlu use _putchar ther times
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int num, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
	}	_putchar('\n');
}