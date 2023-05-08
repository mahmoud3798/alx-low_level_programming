#include "main.h"

/**
* main - Entry Point
* @ac: argument count
* @av: array of argument tokens
* Return: 0
*/
int main(int ac, char *av[])
{
	int from, to, r_flag, w_flag;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buf[BUFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	r_flag = 1;
	while (r_flag)
	{
		r_flag = read(from, buf, BUFSIZE);
		if (r_flag == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (r_flag > 0)
		{
			w_flag = write(to, buf, r_flag);
			if (w_flag != r_flag || w_flag == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	if (close(to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}

