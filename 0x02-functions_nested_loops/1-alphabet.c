#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Description: prints lower alpabectical letter in order 
 * Return: Always 0
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
