#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * Return: Always  (Success)
 * @n : integer
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
	{
		putchar('\\');
	}

	_putchar('\n');
}