#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#if !(defined SSIZE_MAX)
#define SSIZE_MAX (SIZE_MAX >> 1)
#endif

size_t _getline(char **argv, size_t *argc, FILE *file);
unsigned int _strlen(char *str);
char *_strcp(char *str, int all, unsigned int start, unsigned int end);
void *_free(char **str);
char **_split(char *str, char *del);

#endif
