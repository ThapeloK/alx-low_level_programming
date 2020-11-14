include "holberton.h"
#include <stdio.h>

/**
 * create_file - creates a file
 *
 * @filename: file to create
 * @text_content: content to write into file, leave null for none
 * Return: Returns -1 on failure, 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int file, i, retval;

	retval = file = i = 0;
	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		retval = write(file, text_content, i);
	}
	if (retval == -1 || retval != i)
		return (-1);
	return (1);
}
