#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int ac, char *av[], char *envp[])
{
	char *home, *host;
	home = getenv("HOME");
	host = getenv("HOSTNAME");
	printf ("Your home directory is %s on %s.\n", home, host);
	return(0);
}
