#include <stdio,h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line
 * Return: 0
 */

void print_numbers(void)
{

	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}