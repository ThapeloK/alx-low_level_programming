#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * positive_or_negative - Positive or Negative chekcer entry point
 *
 * Return: 0 at the end (Success)
 */
void positive_or_negative(int n)
{
	n = 98;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("0 is zero\n");
	}
       
}
