#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, s = 1;
	char *n;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		s++;
	}
	n = malloc(s * sizeof(char));
	if (n == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		n[i] = str[i];
	}
	n[i] = '\0';
	return (n);
	free(n);
}
