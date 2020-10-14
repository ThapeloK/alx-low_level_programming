#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it with specific char
 * @size: the size of the char array
 * @c: initializing char
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(sizeof(char) * size);

	if (!size || a == NULL)
		return (NULL);
	while (size--)
		a[size] = c;
	return (a);
}
