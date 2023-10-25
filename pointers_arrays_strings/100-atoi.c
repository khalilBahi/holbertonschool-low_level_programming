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
	int pn;
	int d;

	while (*s)
	{
		if (*s == '-' && !k)
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			d = (*s - '0');
			pn = num;
			num = num * 10 + d;

			if (num < pn)
			{
				if (sign == 1)
				{
					return (-1);
				}
				else
				{
					return (0);
				}
			}

			k = 1;
		}
		else if (k)
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
