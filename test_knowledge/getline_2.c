#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer; /*where to store text read*/
	size_t bufsize = 32;
	size_t characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("Type something: ");
	characters = getline(&buffer, &bufsize, stdin);
	printf("%ld characters were read.\n", characters);
	printf("You typed: %s", buffer);

	return (0);
}

