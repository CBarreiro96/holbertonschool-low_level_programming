#include "holberton.h"
/**
*create_file - function that creates a file.
*@filename:char strinf of file name
*@text_content: size or number or letter to read.
*Return: return 1 is it is a succes or -1 if not.
*/
int create_file(const char *filename, char *text_content)
{
	int fdopen, status, i;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdopen == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		status = write(fdopen, text_content, i);
		if (status == -1)
			return (-1);
	}

	close(fdopen);
	return (1);
}
