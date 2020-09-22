#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - printing natural numbers till 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int d = 0;

	if (n > 98)
		d = -1;
	else if (n < 98)
		d = 1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += d;
	}
	printf("%d\n", n);
}
