#include "main.h"
#define BUFF_SIZE 1024
#define MODE 0664
/**
 * outer - function that prints error messages
 * @msg: A pointer to the character message
 * @code: code to print out
 * Return: void
 */
void outer(char *msg, int code)
{
	dprintf(STDERR_FILENO, msg, errno, strerror(errno));
	exit(code);
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
		outer("Usage: cp file_from file_to\n", 97);
	}
	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
		outer("Error: Can't read from file %s\n", 98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, MODE);
	if (dest < 0)
	{
		outer("Error: Can't write to %s\n", 99);
	}
	while ((toread = read(src, buffer, BUFF_SIZE) > 0))
	{
		towrite = write(dest, buffer, toread);
		if (towrite != toread)
		{
			outer("Error: Can't write to %s\n", 99);
		}
	}
	if (toread < 0)
	{
		outer("Error: Can't read from file %s\n", 98);
	}
	if ((close(src)) < 0)
	{
		outer("Error: Can't close fd %d\n", 100);
	}
	if ((close(dest)) < 0)
	{
		outer("Error: Can't close fd %d\n", 100);
	}
	return (0);
}
