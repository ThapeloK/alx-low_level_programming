#include <stdio.h>

/**
 *main - Print the smaller number of the combination
 * digit1: first digit displayed
 * digit2: second digit displayed
 * digit_tester: digit that will eliminate the smaller digits
 *Return:0-success, Non-zero, fail.
 */
int main(void)
{
	int digit1;
	int digit_tester = '0';
	int digit2;

	for (digit1 = '0'; digit1 <= '9'; digit1++)
	{
		for (digit2 = digit_tester; digit2 <= '9'; digit2++)
		{
			if (digit1 != digit2)
			{
				putchar(digit1);
				putchar(digit2);
			}
			if (digit1 == digit2)
			{
				continue;
			}
			if (digit1 == '8' && digit2 == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		digit_tester++;
	}
	putchar('\n');
	return (0);
}
