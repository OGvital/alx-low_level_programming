#include "main.h"
/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
