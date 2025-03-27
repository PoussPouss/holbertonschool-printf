#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int _printf(const char *format, ...);

int spec_func(char format, va_list args);

int print_char(va_list args);

int print_string(va_list args);

int print_percent(va_list args);

int _putchar(char c);

int print_integer(va_list args);



/**
 * struct print_func - Structure for printing functions
 * @type: The format specifier character
 * @print_func: The function to call for printing
 */
typedef struct print_func
{
	char type;
	int (*print_func)(va_list);
} print_func_t;


#endif
