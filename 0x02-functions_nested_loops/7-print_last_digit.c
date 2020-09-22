#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the integer whose last digit to print
 *
 * Return:  positive integer value of the last digit
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i = 0 - i;
	}
	_putchar(i + '0');
	return (i);
}
