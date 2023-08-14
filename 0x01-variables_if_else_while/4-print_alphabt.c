#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase except q and e
 * Return: 0(Program ran successfully!)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}
