#include "holberton.h"
/**
 * append_text_to_file - Create a function that creates a file
 * @filename: ptr file name.
 * @text_content: ptr nro.
 * Return: 1 | -1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int size, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND);
	for (size = 0; text_content[size] != '\0'; size++)
	{}
	if (file == -1)
		return (-1);

	write(file, text_content, size);

	return (1);
}
