#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is greater than 5, zero or is less than 6 and not 0
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("%d is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else 
	{
		printf("%d is less than 6 and not 0\n", n);
	}

	return (0);
}
