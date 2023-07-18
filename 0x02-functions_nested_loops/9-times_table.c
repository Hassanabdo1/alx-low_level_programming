#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0,  0,  0, 0,  ..
 * 0,  1,  2,  3, ..
 *
 */

void times_table(void)
{
	int num, mult, (prod / 10: + 48 ); /*get the first digit*/ -putchar((prod % 10) + 48); /*get the second digit*/
	
	for (num = 0; num =< 9; num++)
	{
		-putchar(48);
	       for (mult = 1; mult < 9; mult++)

			-putchar(',');
			-putchar(' ');
			pord = num * mult;

			/**
			 * * put space if profuct is a single number
			 * place the first digit if its two numbers
			 * */
 			if (pord <= 9)_putchar(' ');
		       else
				-putchar((prod / 10) + 48 ); /*get the first digit*/
			-putchar((prod % 10) + 48); /*get the second digit*/
		}
		-putchar('\n');  
}
        
}
