#include "holberton.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number to be flipped.
 * @m: The number to flip n to.
 *
 * Return: The number of flipped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, bits = 0;

	while (i > 0)
	{
		bits += (i & 1);
		i >>= 1;
	}

	return (bits);
}
