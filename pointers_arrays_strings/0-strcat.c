#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - function that copies the string pointed
 * @dest : pointeur
 * @src : pointeur
 * @*_strcpy : pointeur
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
    int i, j;

    i = 0 while (dest[i])
        i++;
    for (j = 0; dest[i]; j++)
        dest[i++] = dest[i];
    return (dest);
}
