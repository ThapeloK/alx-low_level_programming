#include "holberton.h"

/**
 * _abs - computes an absolute value of a number
 * @i: number to be check
 *
 * Return: Absolute value of integer
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (0 - i);
	}
}
