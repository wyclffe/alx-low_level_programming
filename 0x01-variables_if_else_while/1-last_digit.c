#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - program
 *Description: checks last digit
 *Return: 0
*/
		int main(void)
	{
		int n, i;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		i = n % 10;
	if (i<0)
		i = i*-1;
	else
		i=i;

		if (i > 5)
			{
			printf("Last digit of %d is %d and is greater than 5\n", n, i);
			}
		else if (i < 6 && i != 0)
			{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
			}
		else
			{
			printf("Last digit of %d is %d and is 0\n", n, i);
														}
			return (0);
	}
