#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * 
 * Return: 0
 */
int main(void)
{
	int i, j;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = k; j < 10; j++)
		{
			if (i !=j)
			{
				putchar(i);
				putchar(j);
			}
			if (i == j)
			{
				continue;
			}

			if (i == 8 && j == 9)
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
