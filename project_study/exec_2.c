#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *  * main - execve example
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char *lineptr;
	size_t bytes_read, n = 0;
	char *argv[] = {"/bin/ls"}; //, "-l", "/tmp/", NULL};
	char *l_array[1];
	
	printf("Before execve\n");
	bytes_read = getline(&lineptr, &n, stdin);
	l_array[0] = lineptr;
	if (execve(argv[0], argv,  NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
