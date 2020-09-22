#include "holberton.h"

/**
 * print_alphabet - prints lower alphabetical from a to z
 *
 * Return: Void.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
