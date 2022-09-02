#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;
    pid_t pid;
    pid_t tmp;

    tmp = getpid();

    printf("Before fork\n");
    pid = fork();
    if (pid == -1)
    {
        perror("Error:");
        return (1);
    }
    else if (tmp == pid)
    {
	    printf("je suis lenfant\n");
    }
    else
    {
	    pid_t pid_a = getpid();

	    printf("%u : %u : %u \n", tmp, pid, pid_a);
    }
    printf("After fork\n");
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    return (0);
}
