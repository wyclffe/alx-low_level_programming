#include "main.h"
/**
 * print_numbers - print 0 to 9
 *
 * Return: return void
*/

	void print_numbers(void)
	{
		char i = 0;

		for ( ; i < 10 ; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}

