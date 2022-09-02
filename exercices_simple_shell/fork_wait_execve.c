#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int fork_wait_execv(int number_processe)
{
	pid_t child_pid_1;
	int status;
	int return_v = 0;

	if (number_processe == 0)
		return (0);
	child_pid_1 = fork();
	if (child_pid_1 == -1)
	{
		perror("Error: child 1");
		return (1);
	}
	if (child_pid_1 == 0)
	{
		char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

		printf("Wait for me, wait for me %d : %u\n", status, getpid());
		if (execve(argv[0], argv, NULL) == -1)
			perror("Error:");
		sleep(3);
	}
	else
	{
		wait(&status);
		printf("Oh, it's all better now %d : %u : %u\n", status, getpid(), child_pid_1);
		return_v = fork_wait_execv(number_processe - 1);
	}
	return (return_v);
}

/**
 * main - entry point
 *
 * Description: Write a program that executes the command
 * ls -l /tmp in 5 different child processes. Each child
 * should be created by the same process (the father).
 * Wait for a child to exit before creating a new child
 *
 * Return: 0 if not error is signaler 1 if not
 */

int main(void)
{
	return (fork_wait_execv(5));
}
