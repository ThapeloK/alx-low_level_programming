#include "holberton.h"

/**
 * _strstr - locaes a sub string from a string
 * @haystack: string to search
 * @needle: the substring to find
 *
 * Return: pointer to first matching substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; *(needle + i); i++)
			if (*(needle + i) != *(haystack + i))
				break;
		if (!*(needle + i))
			return (haystack);
		haystack++;
	}
	return ('\0');
}
