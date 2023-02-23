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
			int i;

			for (i = 0; i < 15 ; i++)
			{
			_putchar(i + '0');

			}
			_putchar(i + '\\');

			j++;
		}
		_putchar('\n');
	}

