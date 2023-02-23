#include "main.h"
/**
 * print_square - make a square
 * @size: length of square
 * Return: void
*/
	void print_square(int size)
{
		int i, j = 0;

		for ( ; i < size; i++)
	{
		for ( ; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
		putchar('\n');
}
