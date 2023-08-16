#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this function prints alphabets
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	char alph;
	int i;
	for (i = 0; i < 10; i++)
	{
	for (alph = 'a'; alph <= 'z'; alph++)
	{
	_putchar(alph);
	if (alph == 'z')
	_putchar('\n');
	}
	}
}
