#include <stdio.h>
#include "main.h"
/**
 * more_numbers -   function that prints 10 times the numbers, from 0 to 14
 * Return: Always (Success)
 */
void more_numbers(void)
{
	char n, i;

	for (i = 0; i <= 9; i++)
	{
		for (n = '0'; n <= '14'; n++)
		{
			putchar(n);
		}

		putchar('\n');
	}
}
