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
	int n, Last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    Last = n % 10
	if (Last > 5)
	{
		printf("is greater than 5\n", n, Last);
	}
	else if (Last == 0)
	{
		printf("is zero\n", n, Last);
	}
	else if (Last < 6 && Last != 0)
	{
		printf("is less than 6 and not 0\n", n, Last);
	}

	return (0);
}
