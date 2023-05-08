#include "main.h"
/**
* read_textfile - function that reads a text file
*	and prints it to the POSIX standard output.
* @filename: char pointer
* @letters: number of characters to print
* Return: 0
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int t_file, r_flag, res;
	char buf[BUFSIZE];

	if (filename == NULL)
		return (0);
	t_file = open(filename, O_RDONLY);
	if (t_file == -1)
		return (0);
	res = 0;
	r_flag = 1;
	while (letters > BUFSIZE && r_flag != 0)
	{
		read_status = read(t_file, buf, BUFSIZE);
		write(STDOUT_FILENO, buf, r_flag);
		res += r_flag;
		letters -= BUFSIZE;
	}
	read_status = read(t_file, buf, letters);
	write(STDOUT_FILENO, buf, r_flag);
	res += r_flag;
	close(t_file);
	return (res);
}
