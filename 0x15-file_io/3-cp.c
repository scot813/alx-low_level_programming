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
	int file_to, file_from, fwrite, fread;
	char buffer[1024];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[2]), exit(98);
	file_to = open(argv[2], O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[1]), exit(99);
	fwrite = write(file_to, buffer, 1024);
	if (fwrite == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[1]), exit(99);
	fread = read(file_from, buffer, 1024);
	if (fread == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[2]), exit(98);
	if (close(file_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);
	if (close(file_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);

	return (0);
}
