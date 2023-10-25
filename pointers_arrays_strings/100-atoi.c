#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - function that copies the string pointed
 * @s : pointeur
 * Return: num*sign
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int k = 0;

	while (*s)
	{
		if (*s == '-' && !k)
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			k = 1;
		}
		else if (k)
		{
			break;
		}
		s++;
	}

	return num * sign;
}