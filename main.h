#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct character_print - print data
 * @c: character.
 * @f_pr: function pointer
 */
typedef struct character_print
{
	char *c;
	int (*f_pr)(va_list arg);
} print_d;

/* function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int pc(va_list arg);
int ps(va_list arg);
int pp(va_list arg __attribute((unused)));

int dc(va_list arg);
int print_dig(long int k, long int n);
int dcu(va_list arg);
int print_dig_u(long int k, long int n);
int bc(va_list arg);
int print_binary(long int k, long int n);
#endif /* MAIN_H */
