#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*  main - start  point
* Description: print z to a
* Return: 0
*/
		int main(void)
	{
		int cr;

		for (cr = 'z'; cr >= 'a'; cr--)
		{
			putchar(cr);
		}
		putchar('\n');
		return (0);
	}
