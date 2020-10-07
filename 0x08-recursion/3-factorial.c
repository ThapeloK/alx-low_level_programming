#include "holberton.h"
/**
 * factorial - returns factorial of a number
 * @n: the number to find the factorial for
 *
 * Return: the factorial is no error, and -1 on error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
