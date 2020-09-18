#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - possible combination of single digit number entry point
 *
 * Return: 0 at the end (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
