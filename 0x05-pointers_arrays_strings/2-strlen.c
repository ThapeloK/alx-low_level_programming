#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is to be checked
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
