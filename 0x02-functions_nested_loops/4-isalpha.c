#include "holberton.h"

/**
 * _isalpha - checks if input character is alphacahracter
 * @c: the character to test
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
