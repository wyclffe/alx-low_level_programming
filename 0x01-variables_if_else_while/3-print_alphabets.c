#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*  main - start point
* Description: print a to z and A to Z
* Return: 0
*/
		int main(void)
	{
		int cr, CR;

		for (cr = 'a'; cr <= 'z'; cr++)
		{
			putchar(cr);
		}
		for (CR = 'A'; CR <= 'Z'; CR++)
		{
			putchar(CR);
		}
		putchar('\n');
		return (0);
	}
