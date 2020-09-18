#include <stdio.h>

/**
 * main - uppercase and lowercase alphabetical order entry point
 * Return: 0 at the end (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';
	while (a <= 'Z')
	{

		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
