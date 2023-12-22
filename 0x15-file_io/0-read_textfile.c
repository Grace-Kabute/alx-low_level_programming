#include "main.h"

/**
 * create_file - Creates a file.
 * @filesname: A pointer to the name of the file to create.
 * @file_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filesname, char *file_content)
{
	int fd, w, len = 0;

	if (filesname == NULL)
		return (-1);

	if (file_content != NULL)
	{
		for (len = 0; file_content[len];)
			len++;
	}

	fd = open(filesname, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, file_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

