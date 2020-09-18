#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - lowercase alphabet with q and a exception entry point
 *
 * Return: 0 at the end (Success)
 */
int main(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
