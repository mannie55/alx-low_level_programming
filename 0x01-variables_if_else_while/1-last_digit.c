#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that assigns a random number
 *  to n each time it is excuted
 *  and checks for it last digits
 * Return: 0(Program ran successfully!)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,  n % 10);
	}
	if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
