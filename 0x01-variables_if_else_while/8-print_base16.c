#include <stdio.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * Return: 0(Program ran successfully!)
 */
int main(void)
{
	int sum;
	char alp;

	for (sum = '0'; sum <= '9'; sum++)
		putchar(sum);
	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);
	putchar('\n');

	return (0);
}
