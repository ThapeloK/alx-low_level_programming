#include "holberton.h"

/**
 * _strlen_recursion - returns string length
 * @s: input string
 *
 * Return: the integer length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
