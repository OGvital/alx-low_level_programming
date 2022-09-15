#include "main.h"
#include <stdio.h>

/**
 * 
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	char item;

	for (item = 'A'; item <= 'Z'; item++)
	{
		if (c == item)
			return (1);
	}
	return (0);
}
