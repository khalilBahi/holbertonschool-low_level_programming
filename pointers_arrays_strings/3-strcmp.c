#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - function that compares two strings.
 * @s2 : pointeur
 * @s1 : pointeur
 * Return: the pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			result = -1;
			break;
		}
		else if (s1[i] > s2[i])
		{
			result = 1;
			break;
		}

		i++;
	}

	if (result == 0)
	{
		if (s1[i] == '\0' && s2[i] != '\0')
		{
			result = -1;
		}
		else if (s1[i] != '\0' && s2[i] == '\0')
		{
			result = 1;
		}
	}

	return (result);
}
