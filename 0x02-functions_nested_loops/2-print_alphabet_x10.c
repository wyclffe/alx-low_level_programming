#include "main.h"

/**
* print_alphabet - prints alphabetsX10
*
*Return: Always 0.
*/

		void print_alphabet_x10(void)
	{
		char cara = 'a';

		int i = 0;

		for ( ; i < 10 ; i++)
		{

		for ( ; cara <= 'z'; cara++)
		{
			_putchar(cara);
		}
		}

		_putchar('\n');
	}
