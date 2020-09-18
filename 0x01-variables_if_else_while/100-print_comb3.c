#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits
 * 
 *Return:0 at the end (Success)
 */
int main(void)
{
	int digit1;
	int digit = '0';
	int digit2;

	for (digit1 = '0'; digit1 <= '9'; digit1++)
	{
		for (digit2 = digit; digit2 <= '9'; digit2++)
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
		digit++;
	}
	putchar('\n');
	return (0);
}
