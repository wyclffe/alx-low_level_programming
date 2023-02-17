#include <stdio.h>
#include <unistd.h>
/**
 * main - start
 * Description: print combination of 2 digits numbers
 * Return: 0
*/
int main(void)
{
	int c, b, k, j;

	for (c = 48; c <= 57; c++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
				if (((k + j) > (c + b) && k >= c) || c < k)
				{
					putchar(c);
					putchar(b);
					putchar(' ');
					putchar(k);
					putchar(j);

					if (c + b + k + j == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
