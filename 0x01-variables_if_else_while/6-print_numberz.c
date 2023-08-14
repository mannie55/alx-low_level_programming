#include <stdio.h>

/**
 * main -  program that prints all single digit numbers of base10
 * Return: 0(Program ran successfully!)
 */
int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	putchar(num);
		putchar('\n');

	return (0);

}
