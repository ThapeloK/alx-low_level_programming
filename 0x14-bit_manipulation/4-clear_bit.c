#include "holberton.h"

/**
 * clear_bit - sets a value to 0 at any given position
 * @n: number to find bit to convert
 * @index: index of a number to convert
 * Return: 1 if success, 0 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
