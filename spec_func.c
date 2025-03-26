#include "main.h"
#include <stdarg.h>
#include <limits.h>

/**
* spec_func - Gère l'affichage des formats (%c, %s, %%)
* @format: Spécificateur de format
* @args: Liste des arguments
*
* Return: Nombre de caractères imprimés, ou -1 en cas d'erreur
*/
int spec_func(char format, va_list args)
{
	int index = 0;

	print_func_t print_funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};

	while (print_funcs[index].type != '\0')
	{
		if (format == print_funcs[index].type)
			return (print_funcs[index].print_func(args));
		index++;
	}


	_putchar('%');
	_putchar(format);
	return (2);
}

/**
 * print_integer - Prints an integer
 * @args: Variable argument list containing the integer to print
 *
 * Return: Number of characters printed
 */
int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	char str[12];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num == INT_MIN)
	{
		num = 2147483647;
		_putchar('-');
		count++;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	while (num > 0)
	{
		str[i] = (num % 10 + '0');
		num = num / 10;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
