#include "main.h"
/**
 * main - prints _putchar
 *
 *Return: Always 0.
 */
		int main(void)
	{
		char str[] = "_putchar";

		int i = 0;

		for ( ; i < 9; i++)
		{
			_putchar(str[i]);
		}

		_putchar('\n');

		return (0);
	}
