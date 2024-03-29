#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int file_to, file_from, fcheck;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((fcheck = read(file_from, buffer, 1024)) > 0)
	{
		if (write(file_to, buffer, fcheck) != fcheck || file_to == -1)
			dprintf(2, "Error: Can't write to file %s\n", argv[2]), exit(99);
	}
	if (fcheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_to) < 0)
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);
	if (close(file_from) < 0)
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);

	return (0);
}
