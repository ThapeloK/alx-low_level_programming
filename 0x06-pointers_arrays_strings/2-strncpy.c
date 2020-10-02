  
#include "holberton.h"

/**
 * _strncpy - copies a string from source to destination
 * @dest: the destination buffer
 * @src: the source string to be copied
 * @n: the number of bytes to be copied from source string
 *
 * Return: string concatenated
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ret = dest;

	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (ret);
}
