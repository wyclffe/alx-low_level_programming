/**
* _isupper - check if alphabet is upper/lower
*
* @c: input character
*
* Return: 0
*/

	int _isupper(int c)
	{
		if (c <= 90 && c >= 65)
			return (1);
		else if (c <= 122 && c >= 97)
			return (0);
	}
