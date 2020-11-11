#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* append_text_to_file - function that create file
* @filename: variable pointer
* @text_content: num of characters
* Return: file descriptor
*/
int append_text_to_file(const char *filename, char *text_content)
{
int test;
int i = 0;

if (!filename)
	return (-1);

	test = open(filename, O_WRONLY | O_APPEND);
	if (test == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
		while (text_content[i])
			i++;
		write(test, text_content, i);
		close(test);
		return (1);
}
