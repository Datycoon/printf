#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_percent(va_list __attribute__((unused)), char *, unsigned int);
int print_char(va_list arguments, char *buf, unsigned int ibuf);
int print_string(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_binary(va_list arguments, char *buf, unsigned int ibuf);
int print_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_octal(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_HEX(va_list arguments, char *buf, unsigned int ibuf);
int print_usigned(va_list arguments, char *buf, unsigned int ibuf);
int print_address(va_list arguments, char *buf, unsigned int ibuf);
int print_rev(va_list arguments, char *buf, unsigned int ibuf);
int print_rot13(va_list arguments, char *buf, unsigned int ibuf);


#endif
