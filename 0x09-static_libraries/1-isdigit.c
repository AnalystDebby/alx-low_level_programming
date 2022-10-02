#include "main.h"

/**
 * _isdigit - functions checks for a digit (0 through 9)
 * @c: character to check
 *
 * Return: 1 if yes, 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
