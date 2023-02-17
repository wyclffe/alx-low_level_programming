#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*  main - start point
* Description: print a to z
* Return: 0
*/
		int main(void)
	{
		int cr;

		for (cr = 'a'; cr <= 'z'; cr++)
		{
			putchar(cr);
		}
		putchar('\n');
		return (0);
	}
