#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * Return: Always  (Success)
 * @s : pointeur
 */
void rev_string(char *s)
{
	int len;
	int i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
