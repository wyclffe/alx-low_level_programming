#include "variadic_functions.h"
/**
 * print_numbers - prints n numbers if separator is present.
 *  @n: The number of numbers
 *   @...: A variable number of number paramters to be printed.
 * @separator: something to separate nums
 *  Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
