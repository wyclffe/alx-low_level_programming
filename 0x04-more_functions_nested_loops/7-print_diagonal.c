#include "main.h"
/**
 * print_diagonal - make diagonal
 * @n: nuumber of \
 * Return: void
*/
		void print_diagonal(int n)
	{
		int i = 0;

			while (i < n && n > 0)
			{
				int j = 0;

				while (j < n)
				{
					_putchar(' ');

					j++;

				}
					_putchar('\\');
					_putchar('\n');
					i++;
			}

		if (n == 0)
			_putchar('\n');

	}
