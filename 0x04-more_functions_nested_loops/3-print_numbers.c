#include "main.h"

/**
 * print_numbers - function that print all numbers from 0-9
 * Return: Always 0
 */

void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');

	_putchar('\n');
}
