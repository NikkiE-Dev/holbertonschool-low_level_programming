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

/* Check to see if filename exist, if NULL return -1*/
	if (filename == NULL)
	{
		return (-1);
	}
/*Create file with read & write permissions*/
/*If file exist truncate it, and do not change permissions*/
	opf = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
/*Check to see if creating file failed*/
	if (opf == -1)
	{
		return (-1);
	}
/*If Text content = NULL just create an empty file*/
	if (text_content == NULL)
	{
		close(opf);
		return (1);
	}
/*Check the legnth of the text_context*/
	while (text_content[sp] != '\0')
		sp++;
/*Write text content to file*/
	wrf = write(opf, text_content, sp);
/*Check to see if file was able to write if not return "fail"*/
	if (wrf == -1)
	{
		write(STDOUT_FILENO, "fails", 6);
		return (-1);
	}
	close(opf);
	return (1);

}
