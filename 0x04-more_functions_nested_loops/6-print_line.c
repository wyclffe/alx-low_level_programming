#include "main.h"
/**
 * print_line - prints lines ____
 * @n: size of line
 * Return: return void
*/
		void print_line(int n)
	{
		if (n > 0)
		{
			char i = 0;

			while (i < n)
			{
				_putchar('_');

				i++;
			}
			_putchar('\n');

		}
		else
			 _putchar('\n');

	}
