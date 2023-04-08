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
	dprintf(STDERR_FILENO, "%s\n", msg);
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
		outer("Usage: cp file_from file_to", 97);
	}
	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
		outer("Error: Can't read from file %s", 98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, MODE);
	if (dest < 0)
	{
		outer("Error: Can't write to %s", 99);
	}
	while (1)
	{
		toread = read(src, buffer, BUFF_SIZE);
		if (toread <= 0)
		{
			break;
		}
		towrite = write(dest, buffer, toread);
		if (towrite <= 0)
		{
			break;
		}
	}
	if ((close(src)) < 0)
	{
		outer("Error: Can't close fd %d", 100);
	}
	if ((close(dest)) < 0)
	{
		outer("Error: Can't close fd %d", 100);
	}
	return (0);
}
