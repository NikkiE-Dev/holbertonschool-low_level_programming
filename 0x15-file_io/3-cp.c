#include "holberton.h"

/**
 * main - copies info from 1 file to another file
 *@argc: amount of arguments in command line
 *@argv: pointer in the array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int opf_src, opf_dest, rdf = 1, wtf, clf;
	char *buff[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }

	opf_src = open(argv[1], O_RDONLY);

	if (opf_src == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98); }

	opf_dest = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);

	if (opf_dest == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }

	while ((rdf = read(opf_src, buff, 1024)) > 0)
	{
		wtf = write(opf_dest, buff, rdf);
		if (wtf == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(opf_src), close(opf_dest), exit(99); }
	}

	if (rdf == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	clf = close(opf_src);
	if  (clf == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opf_src);
		exit(100); }
	clf = close(opf_dest);
	if (clf == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opf_dest);
		exit(100); }
	return (0);
}
