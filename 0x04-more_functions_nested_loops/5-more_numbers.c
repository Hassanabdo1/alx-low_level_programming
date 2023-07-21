#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times using _putchar three times only
 */
void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count
			if (count > 9)
			{
				_putchar((count / 10) + '0'); // Print the tens digit
				num = count % 10; // Get the ones digi
			}
			_putchar(num + '0'); // Print the ones digit
		}
		_putchar('\n');
	}
}
