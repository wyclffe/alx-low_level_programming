#include "main.h"
/**
 * print_numbers - print 0 to 14 ten times
 *
 * Return: return void
*/

	void print_numbers(void)
	{
		int j = 0;

		while (j < 10)
		{
			char i = 0;

			for ( ; i < 15 ; i++)
			{
			_putchar(i + '0');
			}
			j++;
		}
		_putchar('\n');
	}

