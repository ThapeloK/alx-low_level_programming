#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing numbers below 10 entry point
 *
 * Return: 0 at the end (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
