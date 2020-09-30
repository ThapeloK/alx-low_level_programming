#include "holberton.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (--i >= 0)
		_putchar(s[i]);
	_putchar('\n');
}
