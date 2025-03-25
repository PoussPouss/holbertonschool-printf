#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{


	_printf("Hello %c\n", 'A');
	_printf("Salut %s\n", "toi");
	_printf("Affiche %%\n");
	_printf("Invalide %d\n", 42);

	printf("%d\n", 12345678990);
	_printf("%d\n", 12345678990);


return (0);

}
