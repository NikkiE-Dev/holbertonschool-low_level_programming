#include "holberton.h"

/**
 * append_text_to_file- appends text at the end of a file
 *@filename: the name of the file
 *@text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opf, wrf, newcxt = 0;


/*Check to see if filename is NULL*/
	if (filename == NULL)
		return (-1);
/*Open file & append file if it doesnt exist do not is created*/
	opf = open(filename, O_WRONLY | O_APPEND);
/*If open fails then return -1*/
	if (opf == -1)
		return (-1);
/*Check to see if there is any text_content if NULL make no changes*/
	if (text_content == NULL)
	{
		close(opf);
		return (1);
	}
/*Counting the data size of info we want to add*/
	while (text_content[newcxt] != '\0')
		newcxt++;
/*Write the new data to the file*/
	wrf = write(opf, text_content, newcxt);
/*Check if it failed to write to program*/
	if (wrf == -1)
	{
		close(opf);
		return (-1);
	}
/*Always close */
	close(opf);
	return (1);
}
