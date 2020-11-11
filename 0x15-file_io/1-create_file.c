#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* create_file - function that create file
* @filename: variable pointer
* @text_content: num of characters
* Return: file descriptor
*/
int create_file(const char *filename, char *text_content)
{
int test;
int i = 0;
int var;


	if (!filename)
		return (-1);

	test = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (test == -1)
		return (-1);
		if (text_content == NULL)
			return (1);

	while (text_content[i])
		i++;
	var = write(test, text_content, i);
	if (var == -1)
	{
		close(test);
		return (-1);
	}

	close(test);
	return (1);

}
