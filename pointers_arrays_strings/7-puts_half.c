#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - function that prints half of a string
 * Return: Always  (Success)
 * @str : pointeur
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len - 1) / 2;
	int i;

	if (len % 2 != 0)
	{
		n++;
	}

	for (i = n + 1; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
