#include "holberton.h"
/**
 * _strncat - concatenates string with n bytes from another string
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 *
 * Return: destination string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}
