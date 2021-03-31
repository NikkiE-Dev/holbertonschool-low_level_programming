#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int opf, wrf, sp = 0;


	if (filename == NULL)
	{
		return (-1);
	}
	opf = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (opf == -1)
	{
		return (-1);
	}
	while (text_content[sp] != '\0')
		sp++;

	wrf = write(opf, text_content, sp);
	if (wrf == -1)
	{
		write(STDOUT_FILENO, "fails", 6);
		return (-1);
	}
	close(opf);
	return (1);

}
