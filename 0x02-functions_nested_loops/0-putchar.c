#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	char print[] = "_putchar";
	int i = 0;

	while (print[i] != '\0')
	{
		_putchar(print[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
