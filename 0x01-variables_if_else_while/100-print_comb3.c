#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits
 * 
 *Return:0 at the end (Success)
 */
int main(void)
{
	int i;
	int k = '0';
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = k; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i == j)
			{
				continue;
			}
			if (i == '8' && j == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
