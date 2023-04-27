#include <stdlib.h>
#include <stdio.h>

/**
 * main - a simple use of getline
 * @ac: number of aruments
 * @av: argument lists
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	FILE *stream;
	char *lineptr;
	size_t n;
	ssize_t bytes_read;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", av[0]);
		exit(EXIT_FAILURE);
	}

	 stream = fopen(av[1], "r");
	 if (stream == NULL) 
	 {
		 perror("fopen");
		 exit(EXIT_FAILURE);
	}
	while ((bytes_read = getline(&lineptr, &n, stream)) != -1)
	{
		printf("Retrieved line of length %ld:\n", bytes_read);
		fwrite(lineptr, bytes_read, 1, stdout);
	}
	free(lineptr);
	fclose(stream);
	exit(EXIT_SUCCESS);
}
