#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* _printf - Implémentation personnalisée de la fonction printf
* @format: Chaîne de format contenant le texte et les spécificateurs
*          de format
* @...: Arguments variables correspondant aux spécificateurs
*       dans la chaîne format
*
* Return: Le nombre de caractères imprimés
*/

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	unsigned int i = 0;

	unsigned int j = 0;



	print_func_t print_funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
    return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
            if (format[i] == '%')
            {
                _putchar('%');
                count++;
                continue;
            }

			j = 0;
			while (print_funcs[j].type != '\0')
			{
				if (format[i] == print_funcs[j].type)
				{
					count += print_funcs[j].print_func(args);
					break;
				}
				j++;
			}
            if (print_funcs[j].type == '\0')
            {
              return (-1);
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
