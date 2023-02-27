#include "main.h"

/**
*rev_string - funtion to print string from pointer in reverse
*@s: a pointer with a string
* Return: void
*/
	void rev_string(char *s)
{
	int i = 10;

	while (s[i])
	{
		_putchar(s[i]);
	}
}
