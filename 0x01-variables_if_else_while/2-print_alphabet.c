#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase
 * Return: 0(Program ran successfully!!)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	putchar(alph);
	putchar('\n');
	return (0);
}
