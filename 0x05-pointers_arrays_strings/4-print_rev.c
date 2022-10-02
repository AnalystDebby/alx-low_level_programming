#include <main.h>

/**
* print_rev - Prints a string in reverse order
* @s: String to reverse
* Return: Nothing
*/

void print_rev(char *s)
<<<<<<< HEAD
{
	int length = _strlen(s);

	while (length--)
	{
		_putchar(*(s + length));
	}
	_putchar('\n');
=======

{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
>>>>>>> d32d90d4f6c6cc9813b481c158de0854c068157a
}
