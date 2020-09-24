#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: the character to test
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
