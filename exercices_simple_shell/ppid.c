#include <stdio.h>
#include <unistd.h>

/**
 * main - PPID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t _ppid;
    pid_t _me;
    
    _me = getpid();
    _ppid = getppid();
    printf("parent : %u; me : %u\n", _ppid, _me);
    return (0);
}
