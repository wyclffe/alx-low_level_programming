#include "main.h"
/**
 *binary_to_uint - convert binary to unsigned int
 *@b: pointer to a string of  and 1 chars
 *Return: return unsigned  int
 *		i used the doubling method
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		decimal = decimal * 2 + (b[i] - '0');
	}
	return (decimal);
}

