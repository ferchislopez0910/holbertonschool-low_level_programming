#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: name fie.
 * @letters: size
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wt;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buff);
		close(op);
		return (0);
	}
	rd = read(op, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(op);
		return (0);
	}
	wt = write(STDOUT_FILENO, buff, rd);
	if (wt != rd)
	{
		free(buff);
		close(op);
		return (0);
	}
	return (wt);
}
