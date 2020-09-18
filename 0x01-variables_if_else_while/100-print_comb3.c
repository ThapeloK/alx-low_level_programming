#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits
 * 
 *Return:0 at the end (Success)
 */
int main(void)
{
	int first;
	int test = '0';
	int last;

	for (first = '0'; first <= '9'; first++)
	{
		for (last = test; last <= '9'; last++)
		{
			if (first != last)
			{
				putchar(first);
				putchar(last);
			}
			if (first == last)
			{
				continue;
			}
			if (first == '8' && last == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		test++;
	}
	putchar('\n');
	return (0);
}
