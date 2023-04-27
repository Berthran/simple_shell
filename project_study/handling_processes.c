#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t pid = getpid(); /* this is the parents pid */
	char *user_input = NULL;
	size_t line_sz = 0;
	ssize_t  line_ct = 0; 
	
	line_ct = getline(&user_input, &line_sz, stdin); 
	/* This gets user input, stores in user_input */
	
	for (;;)
	{
		pid_t child_pid = fork(); /*creates a duplicate process*/
		pid_t child_ppid = getppid(); /*get the child's parent pid*/
		
		if (child_ppid == pid) 
		{
			/*if the current process is a child of the main process*/
			exec(); 
			/*here I need to execute whatever program was
			 *  given to user_input
			 */
			exit(1); /*making sure to avoid fork bomb*/
		}
		wait();
		/*so if it's the parent process we need to wait for the child process to finish, right?*/
	}
}
