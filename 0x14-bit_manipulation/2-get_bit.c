#include "main.h"
/**
 *get_bit - gets the bit of specific index of a uil
 *@n: the integer
 *@index: the position
 *Return: returns the 1 or 0 integer at the integer
 *		or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) % 2);
}
