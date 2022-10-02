#include "main.h"

/**
<<<<<<< HEAD
* _puts - prints a string followed by a new line to stdout
* @str: string
* Return: void
=======
 * _puts - prints a string followed by a new line.
 * @str: input string.
 * Return: no return.
 *
>>>>>>> d32d90d4f6c6cc9813b481c158de0854c068157a
*/

void _puts(char *str)
{
	int i = 0;

<<<<<<< HEAD
	while (str[i] != '\0')
	{
		i++;
	}
	printf(str[i]);
	printf('\n');
=======
	while (str[i] != '\n' && str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
>>>>>>> d32d90d4f6c6cc9813b481c158de0854c068157a
}
