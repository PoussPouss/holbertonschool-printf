#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_char - imprime un caractère.
*@args: Liste des arguments variadiques
*Return: Nombre de caractères imprimés (toujours 1)
*/

int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}


/**
* print_string - imprime une chaîne de caractères.
* @args: Liste des arguments variadiques
* Return: Nombre de caractères imprimés
*/

int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
* print_percent - imprime un caractère pourcentage.
* @args: Liste des arguments variadiques
* Return: Retourne toujours 1 (le nombre de caractères imprimés)
*/
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}


