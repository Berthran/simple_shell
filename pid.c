#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints the parent id of a process
 *
 * Return: void
 */

int print_parent_id(void)
{
	pid_t pidp;

	pidp = getppid();
	printf("%u\n", pidp);
	return (0);
}

