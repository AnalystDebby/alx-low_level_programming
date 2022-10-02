#include <main.h>

/**
* print_rev - Prints a string in reverse order
* @s: String to reverse
* Return: Nothing
*/

void print_rev(char *s)
{
	int length = _strlen(s);

	while (length--)
	{
		_putchar(*(s + length));
	}
	_putchar('\n');
}
