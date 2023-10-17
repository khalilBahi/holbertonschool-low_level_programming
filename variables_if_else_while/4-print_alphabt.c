#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}

	putchar('\n');
	return (0);
}
