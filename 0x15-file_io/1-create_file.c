#include "main.h"
/**
* create_file - function that creates a file.
* @filename: char pointer
* @text_content: contents of the file.
* Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int new, len, w_flag;

	if (filename == NULL)
		return (-1);
	new = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(new);
		return (1);
	}
	len = 0;
	while (text_content[len])
		len++;
	w_flag = write(new, text_content, len);
	if (close(new) == -1)
		return (-1);
	return (w_flag == -1 ? -1 : 1);
}
