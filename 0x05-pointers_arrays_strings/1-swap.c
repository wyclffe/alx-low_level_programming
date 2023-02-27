#include "main.h"
#include <stdio.h>

/**
* swap_int - function to swap numbers
*@a: interger a
*@b: integer b
* Return: Always 0.
*/
	void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;

	*a = temp;
}
