#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring
 * @haystack : pointeur
 * @needle : pointeur
 * Return: to NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			while (*haystack == *needle && *needle != '\0')
			{
				haystack++;
				needle++;
			}
			if (*needle == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
