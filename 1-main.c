#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_char - imprime un caractère.
*@args: Liste des arguments variadiques
*/

void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}


/**
* print_string - imprime une chaîne de caractères.
* @args: Liste des arguments variadiques
*/

void print_string(va_list args)
{
	char *ptr = va_arg(args, char*);

	if (ptr == NULL)
		ptr = "(nil)";

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
}

/**
* print_percent - imprime un caractère pourcentage.
* @args: Liste des arguments variadiques
*/
void print_percent(va_list args)
{
    (void)args;
	_putchar('%');
}


