#include "main.h"
#define BUFF_SIZE 1024
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((toread = read(src, buffer, BUFF_SIZE)) > 0)
	{
		towrite = write(dest, buffer, toread);
		if (towrite != toread)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}
	if (toread < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	if ((close(src)) < 0 || (close(dest)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}
