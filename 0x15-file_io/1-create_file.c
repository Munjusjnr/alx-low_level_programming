#include "main.h"

/**
 * create_file - A function to create a file
 * @filename: name of the file to create
 * @text_content: text content to be written to the file
 * Return: 1 if success -1 if otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int ptr;
	ssize_t towrite;

	if (filename == NULL)
	{
		return (-1);
	}
	ptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		towrite = write(ptr, text_content, strlen(text_content));
		if (towrite != ((ssize_t)strlen(text_content)))
		{
			close(ptr);
			return (-1);
		}
	}
	close(ptr);
	return (1);
}
