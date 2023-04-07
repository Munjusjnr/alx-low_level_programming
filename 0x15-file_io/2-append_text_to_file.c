#include "main.h"

/**
 * append_text_to_file - a function that appends a text to a file
 * @filename: name of the file
 * @text_content: Content to be appended
 * Return: 1 if success -1 if otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;
	ssize_t towrite;

	if (filename == NULL)
	{
		return (-1);
	}
	ptr = open(filename, O_WRONLY | O_APPEND);
	if (ptr < 0)
	{
		return (-1);
	}
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
