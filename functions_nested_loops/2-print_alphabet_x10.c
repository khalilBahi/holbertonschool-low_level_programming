#include <stdio.h>
#include "main.h"
/**
 * print_alphabet -   prints the alphabet, in lowercase
 * Return: Always (Success)
 */
void print_alphabet(void)
{
	char ch;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
