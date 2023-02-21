#include <unistd.h>

/**
*_putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
		int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
/**
* print_alphabet - writes all alphabets
* Return: On success 1.
*/

		void print_alphabet(void)
	{
		char cara = 'a';

			for ( ; cara <= 'z'; cara++)
			{
				_putchar(cara);
			}
			_putchar('\n');
	}
