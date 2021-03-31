#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name given to file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opf, rdf, wrf;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	opf = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	rdf = read(opf, buf, letters);
	if (rdf == -1)
	{
		free(buf);
		return (0);
	}
	wrf = write(STDOUT_FILENO, buf, rdf);
	if (wrf == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(opf);
	return (wrf);

}
