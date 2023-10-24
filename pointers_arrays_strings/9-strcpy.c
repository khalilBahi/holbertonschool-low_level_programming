#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - function that copies the string pointed to by src to the buffer pointed to by dest
 * Return: Always  (Success)
 * @dest : pointeur
 * @src : pointeur
 */
void _strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}