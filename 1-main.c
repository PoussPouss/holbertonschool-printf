#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - imprime un caractère.
 * @args: Liste des arguments variadiques
 * Return: Nombre de caractères imprimés (toujours 1)
 */
int print_char(va_list args)
{
	int c = va_arg(args, int);
	int res = _putchar(c);

	if (res == -1)
		return (-1);

	return (1);
}

/**
 * print_string - imprime une chaîne de caractères.
 * @args: Liste des arguments variadiques
 * Return: Nombre de caractères imprimés
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0, res;
	char *ptr;

	if (str == NULL)
		str = "(null)";

	ptr = str;
	for (; *ptr; ptr++)
	{
		res = _putchar(*ptr);
		if (res == -1)
			return (-1);
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
	int res = _putchar('%');
	(void)args;

	if (res == -1)
		return (-1);

	return (1);
}





