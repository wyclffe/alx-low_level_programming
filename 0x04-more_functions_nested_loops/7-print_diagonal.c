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
				int j = 0;
				while (j < n)
				{
					_putchar(' ');

					j++;

				}
					_putchar('\\');

					i++;
			}
		}
		else
			_putchar('\n');

	}
