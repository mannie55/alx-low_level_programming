#include "main.h"

/**
 * rev_string - function to revrrse string
 * @s: string to be reversed
 * return: 0 always
 */

void rev_string(char *s)
{
	int i;
	int size = 0;
	char tem = s[0];

	while (s[size] != '\0')
		size++;

	for (i = 0; i < size / 2; i++)
	{
		tem = s[i];
		s[i] = s[size - 1 - i];
		s[size - 1 - i] = tem;
	}
}
