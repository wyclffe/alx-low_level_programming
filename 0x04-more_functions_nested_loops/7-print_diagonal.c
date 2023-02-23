#include "main.h"
/**
 * print_diagonal - make diagonal
 * @n: nuumber of \
 * Return: void
*/
		void print_diagonal(int n)
	{
		char i = 0;

		if (n > 0)
		{
			while (i < n)
			{

				for(; i < n-1 ; i++ )
				{
					_putchar(' ');

				}
					_putchar('\\');

				i++;
			}
			_putchar('\n');
		}
		else
			putchar('\n');

	}
