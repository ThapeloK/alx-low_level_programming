#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing base 16 numbers entry point
 *
 * Return: 0 at the end (Success)
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
