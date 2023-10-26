#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - function that reverses a string.
 * Return: upp
 * @upp : pointeur
 */
char *string_toupper(char *upp)
{
	int i;

	for (i = 0; upp != '\0'; i++)
	{
		while (upp[i] >= 'a' && upp[i] <= 'z')
		{
			upp[i] = (int)upp[i] - 32;
		}
	}
	return (upp);
}
