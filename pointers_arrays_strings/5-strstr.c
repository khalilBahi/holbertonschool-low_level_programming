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
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			h = haystack;
			n = needle;
			while (*h == *n && *n != '\0')
			{
				h++;
				n++;
			}
			if (*n == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
