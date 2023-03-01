#include "main.h"
#include <string.h>
/**
 * _strncat - join two strings with n bytes of scr to des
 * @dest: the destination string
 * @src: the src
 * @n: size of bytes
 * Return: char*
*/
	char *_strncat(char *dest, char *src, int n)
	{
	int dest_len = strlen(dest);

	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
		dest[dest_len + i] = '\0';
		return (dest);
	}
