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
	int n, v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    v = n % 10
	if (v > 5)
	{
		printf("is greater than 5\n", n, v);
	}
	else if (v == 0)
	{
		printf("is zero\n", n, v);
	}
	else if (v < 6 && v != 0)
	{
		printf("is less than 6 and not 0\n", n, v);
	}

	return (0);
}
