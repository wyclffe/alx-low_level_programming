#include "main.h"
/**
 * create_file - create a file with a given name and writes text to it
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write "fails", etc...)
 */
int create_file(const char *filename, char *text_content)
{
	FILE *flp;
	mode_t mode = S_IRUSR | S_IWUSR;
	size_t len, ret;

	if (filename == NULL)
	{
		return (-1);
	}

	flp = fopen(filename, "w");
	if (flp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		ret = fwrite(text_content, sizeof(char), len, flp);
		if (ret != len)
		{
			fclose(flp);
			return (-1);
		}
	}

	if (chmod(filename, mode) == -1)
	{
		fclose(flp);
		return (-1);
	}

	fclose(flp);
	return (1);
}
