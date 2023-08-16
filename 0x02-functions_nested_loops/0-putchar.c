#include <stdio.h>
#include "main.h"

/**
 * main - This function prints out a char
 * Return: always 0
 */

int main(void)
{

	int arr[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, arrsize;

	arrsize = sizeof(arr) / sizeof(int);
	for (i = 0; i < arrsize; i++)
	{
	_putchar(arr[i]);
	}
	_putchar('\n');
	return (0);
}

