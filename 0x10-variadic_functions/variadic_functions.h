#ifndef H_VARIADIC_H
#define H_VARIADIC_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif