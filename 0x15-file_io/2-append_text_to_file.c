#include "main.h"
/**
 * append_text_to_file - a appends text at the end of a file.
 * @filename: the fiel to be appended to
 * @text_content: the content of file
 * Return: 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fpOpen, fpWrite, length = 0;

	fpOpen = open(filename, O_WRONLY | O_APPEND);
	if (fpOpen == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[length] !=  '\0')
		length++;
	fpWrite = write(fpOpen, text_content, length);
	if (fpWrite == -1)
		return (-1);
	close(fpOpen);
	return (1);
}
