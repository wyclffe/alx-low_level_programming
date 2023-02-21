#include "main.h"

/**
* _islower - function to check lower case
*
* Return: 1 if true. 0 if false.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
