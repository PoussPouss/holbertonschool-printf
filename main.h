#ifndef MYHEADER_H
#define MYHEADER_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int _printf(const char *format, ...);

void print_char(va_list args);

void print_int(va_list args);

void print_float(va_list args);

void print_string(va_list args);

int _putchar(char c);

void print_percent(va_list args);



/**
 * struct print_func - Structure for printing functions
 * @type: The format specifier character
 * @print_func: The function to call for printing
 */
typedef struct print_func
{
	char type;

	void (*print_func)(va_list);
} print_func_t;




#endif
