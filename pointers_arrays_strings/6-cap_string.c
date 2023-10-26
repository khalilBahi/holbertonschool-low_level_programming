#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - function that capitalizes all words of a string
 * Return: str
 * @str : pointeur
 */
char *cap_string(char *str)
{
	int i;
	char *ptr = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = (int)str[i] - 32;
		}
		else if (str[i - 1] == ' ' || str[i - 1] == '	' || str[i - 1] == '.')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = (int)str[i] - 32;
		}
	}
	return (ptr);
}
