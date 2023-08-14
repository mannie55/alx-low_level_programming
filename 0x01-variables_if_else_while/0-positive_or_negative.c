#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this progran assigns a random number
 * to a variable and checks if its positive
 * or negative or neither
 * Return: 0(Program ran successfully!
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
