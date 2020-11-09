#include "holberton.h"

/**
 * set_bit - sets a value of bit to 1 at given index
 * @n: pointer to unsigned int
 * @index: index to be converted to 1
 * Return: 1 on sucess and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
