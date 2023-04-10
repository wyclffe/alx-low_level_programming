#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given position
 * @n: pointer to the binary
 * @index: index of the bit to set
 * Return: 1 if successful, -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	unsigned int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1;

	for (i = 0; i < index; i++)
	{
		mask <<= 1;
	}
	*n &= ~mask;

	return (1);
}
