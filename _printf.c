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
		if (format[i] == '%')  /* Détection d'un spécificateur de format */
		{

			if (format[i + 1] == '\0') /* Cas d'erreur: % en fin de chaîne */
			return (-1);

			if (format[i + 1] == '%') /* Cas spécial: %% pour afficher un % littéral */
			{
				_putchar('%');
				count++;
				i++;
			}
			else
			{
			i++;
			result = spec_func(format[i], args); /* Appel de la fonction appropriée */

			if (result == -1)  /* Gestion d'erreur du spécificateur */
			{
			va_end(args);
			return (-1);
			}
			count += result; /* Ajout des caractères imprimés au compteur */
			}
		}
		else
		{
		_putchar(format[i]); /* Impression des caractères normaux (hors spécificateurs) */
		count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
