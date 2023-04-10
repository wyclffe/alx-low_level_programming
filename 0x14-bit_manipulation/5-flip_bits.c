#include "main.h"
/**
 * flip_bits - count number of bits to be flipped
 *		to change a number to another
 * @n: first number
 * @m: second number
 * Return: count of bits needed to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	unsigned int bit_count = 0;

	unsigned long int mask = 1;

	for (i = 0; i < (int)sizeof(unsigned long int) * 8; i++)
	{
		if ((n & mask) != (m & mask))
		{
			bit_count++;
		}
		mask = mask << 1;
	}

	return (bit_count);
}
