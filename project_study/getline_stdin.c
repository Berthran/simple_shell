#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - a simple use of getline
 * @ac: number of aruments
 * @av: argument lists
 *
 * Return: 0
 */

int passive_shell_prompt(int ac, char **av)
{
	char *lineptr;
	size_t n = 0;
	size_t bytes_read;

	if (ac != 1)
	{
		fprintf(stderr, "Usage: %s <file>\n", av[0]);
		exit(EXIT_FAILURE);
	}

	while ((int)bytes_read != -1)
	{
		printf("$ ");
		bytes_read = getline(&lineptr, &n, stdin);
		printf("%s", lineptr);
		/*fwrite(lineptr, bytes_read, 1, stdout);*/
	}
	free(lineptr);
	exit(EXIT_SUCCESS);
}
