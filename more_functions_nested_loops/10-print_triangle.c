#include "main.h"
#include <stdio.h>
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * Return: Always  (Success)
 * @size : integer
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (i = 0; i < size - j; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
