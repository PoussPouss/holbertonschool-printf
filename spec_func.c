#include "main.h"
#include <stdarg.h>

/**
* spec_func - Gère l'affichage des formats (%c, %s, %%)
* @format: Spécificateur de format
* @args: Liste des arguments
*
* Return: Nombre de caractères imprimés, ou -1 en cas d'erreur
*/
int spec_func(char format, va_list args)
{
	int j = 0;

	print_func_t print_funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	while (print_funcs[j].type != '\0')
	{
		if (format == print_funcs[j].type)
			return (print_funcs[j].print_func(args));
		j++;
	}


	return (-1);
}
