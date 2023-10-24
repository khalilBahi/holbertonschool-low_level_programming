#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - function that copies the string pointed to by src to the buffer pointed to by dest
 * Return: Always  (Success)
 * @dest : pointeur
 * @src : pointeur
 */
char *_strcpy(char *dest, char *src)
{
	int i;

        for (i = 0; src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }

        dest[i] = '\0';

        return (dest);
}
