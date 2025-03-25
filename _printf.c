#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
* _printf - Implémentation personnalisée de printf
* @format: Chaîne de format
*
* Return: Nombre de caractères imprimés
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0;


	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += spec_func(format[i], args);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
