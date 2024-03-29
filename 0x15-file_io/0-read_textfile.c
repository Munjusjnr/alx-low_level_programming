#include "main.h"

/**
 * read_textfile - A function that reads a textfile and prints it
 * @filename: The file containing what to be printed out
 * @letters: Number of letters to be read and printed out
 * Return: Actual number it could read and print out
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	char *buffer;
	ssize_t toread, towrite;

	if (filename == NULL)
	{
		return (0);
	}
	ptr = open(filename, O_RDONLY);
	if  (ptr < 0)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(ptr);
		return (0);
	}
	toread = read(ptr, buffer, letters);
	towrite = write(STDOUT_FILENO, buffer, toread);
	if (towrite < 0 || towrite != toread)
	{
		close(ptr);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(ptr);
	return (toread > 0 ? toread : 0);
}
