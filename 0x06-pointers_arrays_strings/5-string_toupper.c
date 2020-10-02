#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters  to uppercase
 * @s: input string to convert
 *
 * Return: char pointer
 */
char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		if (s[j] > 96 && s[j] < 123)
			s[j] -= 32;
	return (s);
}
