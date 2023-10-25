#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - function that copies the string pointed
 * @dest : pointeur
 * @src : pointeur
 * @n : nbr of byte
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
