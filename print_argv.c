#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints arguments passed to main
 * @ac: number of arguments passed to main
 * @av: array of arguments
 *
 * Return: 0
 */

int print_args(int ac, char **av)
{
	if (ac < 1)
	{
		perror("Usage Error");
		exit(1);
	}
	while (*av != NULL)
		printf("%s\n", *(av++));
	return (0);
}
