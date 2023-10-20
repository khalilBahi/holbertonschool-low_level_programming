#include "main.h"
#include <stdio.h>
/**
 * print_square - function that prints a square, followed by a new line
 * Return: Always  (Success)
 * @size : integer
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
