#include "main.h"
/**
 * print_diagonal - make diagonal
 * @n: nuumber of \
 * Return: void
*/
		void print_diagonal(int n)
	{
		int i = 0;

		if (n > 0)
		{
			while (i < n)
			{
				while (i < n)
				{
					_putchar(' ');

				}
					_putchar('\\');

					i++;
			}
		}
		else
			_putchar('\n');

	}
