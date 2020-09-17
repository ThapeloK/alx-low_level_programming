#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - The entry point
 *
 *This code checks if:
 *1. The random number is negative
 *2. The random number is zero
 *3. The random number us positive
 *Return: 0 at the end (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else 
		printf("%d is negative\n", n);
	return (0);
}
