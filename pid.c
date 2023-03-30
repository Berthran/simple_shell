#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t pidp;
	pidp = getppid();
	printf("%u\n", pidp);
	return (0);
}

