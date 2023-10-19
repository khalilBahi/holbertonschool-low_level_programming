#include <stdio.h>
#include "main.h"
/**
 * print_numbers -    function that checks for a digit (0 through 9).
 * Return: Always (Success)
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');
}
