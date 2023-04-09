#include "main.h"
#define BUFF_SIZE 1024
/**
 * handler - handles errors
 * @errorcode: holds error code
 * @file: A pointer to file
 * @filed: file descriptor
 * Return: void
 */
void handler(int errorcode, char *file, int filed)
{
	switch (errorcode)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filed);
		break;
	}
	exit(errorcode);
}

/**
 * main - Entry point to code
 * Description: A program that copies from one file to another
 * @argc: The number of arguments to be supplied
 * @argv: what to supply
 * Return: 0 if success exit if otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest;
	ssize_t towrite, toread;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
		handler(97, NULL, 0);
	}
	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
		handler(98, argv[1], 0);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest < 0)
	{
		handler(99, argv[2], 0);
	}
	while ((toread = read(src, buffer, BUFF_SIZE)) > 0)
	{
		towrite = write(dest, buffer, toread);
		if (towrite != toread)
		{
			handler(99, argv[2], 0);
		}
	}
	if (toread < 0)
	{
		handler(98, argv[1], 0);
	}
	if ((close(src)) < 0)
	{
		handler(100, NULL, src);
	}
	if ((close(dest)) < 0)
	{
		handler(100, NULL, dest);
	}
	return (0);
}
