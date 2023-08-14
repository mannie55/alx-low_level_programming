#include <stdio.h>
/**
 * main -  program that prints all possible combination of single-digit numbers
 * Return: 0(Program ran successfully!)
 */
int main(void)
{
	int sum;

	for (sum = '0'; sum <= '9'; sum++)
	{
		putchar(sum);
		if (sum == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
