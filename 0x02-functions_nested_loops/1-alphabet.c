#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this function prints alphabets
 * Return: 0 always
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
	_putchar(alph);
	}
	_putchar('\n');
}
