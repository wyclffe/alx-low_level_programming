#include "main.h"
/**
 * print_square - make a square
 * @size: length of square
 * Return: void
*/
	void print_square(int size)
{
		int i, j = 0;

		if (size > 0)
		{

		while (i < size)
	{
		while (j < size)
		{
			putchar('#');
			j++;
		}
		putchar('\n');
			i++;
	}
		putchar('\n');
		}
		else
			putchar('\n');

}
