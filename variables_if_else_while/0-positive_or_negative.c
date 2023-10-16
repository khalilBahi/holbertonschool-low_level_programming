#include <stdlib.h>
#include <time.h>
/**
* main- print if le nombre est psitive,negative ou zéro
*
* Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )
	{
		printf ( " le nombre est positive\n ", n );
	}
	else if ( n < 0 )
        {
                printf ( " le nombre est négative\n ", n );
        }
	else 
        {
                printf ( " le nombre est zéro\n ", n );
        }
	return (0);

