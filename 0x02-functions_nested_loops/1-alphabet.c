#include "main.h"

/**
 * main - prints alphabets
 *
 *Return: Always 0.
 */


		 void print_alphabet(void)
	{
		char cara = 'a';

		for ( ; cara <= 'z'; cara++)
		{
			_putchar(cara);
		}

		_putchar('\n');
	}
