#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*  main - start  point
* Description: print a to z except q and e
* Return: 0
*/
		int main(void)
	{
		int cr;

		for (cr = 'a'; cr < 'z'; cr++)
		{
			if (cr != 'e' && cr != 'q')
			{
			putchar(cr);
			}
		}
		putchar('\n');
		return (0);
	}
