#include "main.h"
/**
 *read_textfile - reads a text file
 *@filename: name of file
 *@letters:  characters
 *Return: bytes of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;

	char *buf;

	ssize_t bytes_read;

	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	buf = (char *) malloc(letters + 1);

	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}
	bytes_read = fread(buf, sizeof(char), letters, fp);
	if (bytes_read < 0)
	{
		free(buf);
		fclose(fp);
		return (0);
	}
	buf[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written < 0 || bytes_written != bytes_read)
	{
		free(buf);
		fclose(fp);
		return (0);
	}
	free(buf);
	fclose(fp);
	return (bytes_written);
}
