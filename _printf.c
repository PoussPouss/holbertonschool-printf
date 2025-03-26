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
	int result;

	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
			else if (format[i + 1] == '\0' || spec_func(format[i + 1], args))
			return (-1);
			else
			{
			i++;
			result = spec_func(format[i], args);
			if (result == -1)
			{
			va_end(args);
			return (-1);
			}
			count += result;
			}
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
