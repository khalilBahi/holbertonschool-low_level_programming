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
	int n v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
v=n%10
	if (v > 5)
	{
		printf("%d is greater than 5\n", v);
	}
	else if (v == 0)
	{
		printf("%d is zero\n", v);
	}
	else 
	{
		printf("%d is less than 6 and not 0\n", v);
	}

	return (0);
}
