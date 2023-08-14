#include <stdio.h>

/**
 * main -  program that prints the lowercase alphabet in reverse
 * Return: 0(Program ran successfully!)
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');

	return (0);
}
