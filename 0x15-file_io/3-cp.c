#include "main.h"
#define MODE 664
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
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
		dprintf(2, "Error: Can't read from file argv[1]\n");
		exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, MODE);
	if (dest < 0)
		dprintf(2, "Error: Can't write to argv[2]\n");
		exit(99);
	while (1)
	{
		toread = read(src, buffer, BUFF_SIZE);
		if (toread <= 0)
			break;
		towrite = write(dest, buffer, toread);
		if (towrite <= 0)
			break;
	}
	close(src);
	close(dest);
	if ((close(src)) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	if ((close(dest)) < 0)
		dprintf(2, "Error: Can't close fd %d\n", dest);
		exit(100);
	return (0);
}
