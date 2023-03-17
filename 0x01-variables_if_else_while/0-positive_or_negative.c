#include <stdio.h>
#include <stlib.h>
#include <time.h>

/**
 * main - prints if the number is positive,negative or 0
 * return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand () - RAND_MAX / 2;


	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else 
	{
		print("%d is negative\n", n);
	}

	return (0);
}