#include "holberton.h"
/**
 * create_file - Create a function that creates a file
 * @filename: ptr file name.
 * @text_content: ptr nro.
 * Return: 1 always.
*/
int create_file(const char *filename, char *text_content)
{
	int op, wt, size;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (size = 0; text_content[size] != '\0'; size++)
		{}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(op, text_content, size);

	if (op == -1)
		return (-1);
	if (wt == -1)
		return (-1);

	close(op);

	return (1);
}
