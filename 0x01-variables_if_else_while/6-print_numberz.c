#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*  main - start  point
* Description: print a to z
* Return: 0
*/
		int main(void)
	{
		int digits;

		for (digits = 0; digits < 10; digits++)
		{
			putchar(digits + '0');
		}
		putchar('\n');
		return (0);
	}
