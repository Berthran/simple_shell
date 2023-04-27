#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "shell.h"

/**
 * main - a simple use of getline
 * @ac: number of aruments
 * @av: argument lists
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	print_args(ac, av);
	passive_shell_prompt(ac, av);
	return (0);
}
