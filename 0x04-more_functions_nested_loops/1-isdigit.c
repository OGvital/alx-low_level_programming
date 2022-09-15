#include "main.h"

/**
 * _isdigit - checks if an input is a digit
 *
 * @c: The input to be tested
 *
 * Return - 1 if c is a digit else, 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
