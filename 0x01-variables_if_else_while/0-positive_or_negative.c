#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - check if n is < > or = to 0
 * Description: find if a random number
 * is + ,- or 0
 * Return: negetive positive or zero
  */
	int main(void)
	{
		int n;

		srand(time(0));
		/* declaration */
		n = rand() - RAND_MAX / 2;
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else
			printf("%d is zero\n", n);

		return (0);
	}
