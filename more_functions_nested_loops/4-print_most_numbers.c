#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers -    function that prints the numbers, from 0 to 9
 * Return: Always (Success)
 */
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		if (n != '2' && n != '4')
		{
			putchar(n);
		}
	putchar('\n');
}
