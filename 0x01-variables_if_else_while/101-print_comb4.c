#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 at the end (Success)
 */
int main(void)
{
	int first;
	int second;

	for (first= 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (first == 9 && second == 9)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
