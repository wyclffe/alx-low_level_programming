#include "main.h"

/**
*print_rev - funtion to print string from pointer in reverse
*@s: a pointer with a sentence
* Return: void
*/
	void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
