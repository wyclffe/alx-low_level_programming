#include "main.h"

/**
*puts2 - funtion to print string from pointer every other char
*@str: an array of char
* Return:  void
*/
	void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i = i + 2;
	}
	_putchar('\n');
}
