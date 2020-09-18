#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing alphabetical order reverse entry point
 *
 * Return: 0 at the end (Success)
 */
int main(void)
{
	int c;

	for (c = 'z' ; c <= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
