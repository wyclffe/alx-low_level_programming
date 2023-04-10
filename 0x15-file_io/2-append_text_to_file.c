#include "main.h"
/**
 * append_text_to_file - append text at the end of a file
 * @filename: the name of the file to append to
 * @text_content: the text to be appended to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int flopen, flwrite, len;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	flopen = open(filename, O_WRONLY | O_APPEND);
	if (flopen == -1)
		return (-1);

	len = strlen(text_content);
	flwrite = write(flopen, text_content, len);
	if (flwrite == -1 || flwrite != len)
	{
		close(flopen);
		return (-1);
	}

	close(flopen);
	return (1);
}
