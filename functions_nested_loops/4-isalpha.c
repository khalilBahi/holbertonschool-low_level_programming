#include <stdio.h>
#include "main.h"
/**
 * _islower -   prints the alphabet, in lowercase
 * Return: Always (Success)
 * @c: integer
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else

		return (0);
}