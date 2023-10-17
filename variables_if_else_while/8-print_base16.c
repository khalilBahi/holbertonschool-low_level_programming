#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '15'; n++)
	{
		printf("%x", n);
	}

	putchar('\n');
	return (0);
}
