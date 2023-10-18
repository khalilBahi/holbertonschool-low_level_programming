#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * Return: Always (Success)
 * @n: integer
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	_putchar(l + '0');
	return (l);
}
