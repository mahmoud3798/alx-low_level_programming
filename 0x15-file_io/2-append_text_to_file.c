#include "main.h"
/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: char pointer
* @text_content: content to append
* Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int app_file, len, w_flag;

	if (filename == NULL)
		return (-1);
	app_file = open(filename, O_WRONLY | O_APPEND);
	if (app_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	len = 0;
	while (text_content[len])
		len++;
	w_flag = write(app_file, text_content, len);
	close(app_file);
	return (w_flag == -1 ? -1 : 1);
}
