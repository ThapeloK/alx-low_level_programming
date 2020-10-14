#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenaste two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *pstr;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[len1] != 0)
		len1++;
	while (s2[len2] != 0)
		len2++;
	len2++;
	pstr = malloc(sizeof(char) * (len1 + len2));
	for (i = 0; i < len1; i++)
		pstr[i] = s1[i];
	for (j = 0; j < len2; i++, j++)
		pstr[i] = s2[j];
	return (pstr);
}
