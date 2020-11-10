#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* read_textfile - function that reads a text file and prints it standard output 
* @filename: variable pointer
* @letters: num of characters
* Return: integer numletter
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

int fd;
char *buffer;
int numletters;

	if (filename == NULL || letters == 0) /* I recieved a pointer if its NULL return 0 */
		return (0);

	buffer = malloc((letters) * sizeof(char)); /*prerpare space pointer buffer*/
	if (buffer == NULL)
		return (0);

	buffer[letters] = '\0'; /* the las position indicate end of buffer */

	fd = open(filename, O_RDONLY); /* open the file recieved two pareameters */
	if (fd == -1)
		return (0);

	numletters = read(fd, buffer, letters); /*reading the file */

	write(STDOUT_FILENO, buffer, numletters); /* writing output standar POSIX */

	close(fd);
	free(buffer);
	return (numletters);
}
