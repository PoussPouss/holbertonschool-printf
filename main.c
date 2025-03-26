#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{


	_printf("Hello %c\n", 'A');
	_printf("Salut %s", "toi");
	_printf("Affiche %%");
	_printf("Invalide %d", 42);

	printf("ab%bc%");
	_printf("a%bc%\n");

	_printf("\n");


return (0);

}
