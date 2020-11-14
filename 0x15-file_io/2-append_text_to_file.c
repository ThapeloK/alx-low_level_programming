#include "holberton.h"

/**
 * append_text_to_file - appends text to a file
 *
 * @filename: name of file
 * @text_content: content to append
 * Return: Returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;

	file = open(filename, O_RDWR | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	i = 0;
	while (text_content[i] != '\0')
		i++;
	file = write(file, text_content, i);
	if (file == -1)
		return (-1);
	return (1);
}
