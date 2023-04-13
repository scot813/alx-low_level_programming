#include "main.h"
/**
 * create_file - a function to create a file
 * @filename: the file to create
 * @text_content: the content of the created file
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fpOpen, length = 0, fpWrite;

	fpOpen = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fpOpen == -1)
		return (-1);
	if (text_content == NULL)
	{
	text_content = "";
	}
	while (text_content[length] != '\0')
	{
		length++;
	}

	fpWrite = write(fpOpen, text_content, length);
	if (fpWrite == -1)
		return (-1);
	close(fpOpen);
	return (1);
}
