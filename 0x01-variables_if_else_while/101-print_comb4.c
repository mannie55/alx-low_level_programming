#include <stdio.h>

/**
 * main - program that prints possible
 * combination of three digit number
 * Return: this returns 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
	for (j = i + 1; j <= 8; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
	putchar(i + 48);
	putchar(j + 48);
	putchar(k + 48);
	if (i != 7 || j != 8 || k != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
