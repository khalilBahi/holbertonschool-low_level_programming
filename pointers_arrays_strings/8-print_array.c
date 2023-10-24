#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - function that prints n elements of an array
 * Return: Always  (Success)
 * @a : pointeur
 * @n : pointeur
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n");
}
