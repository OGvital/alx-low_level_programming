#include "main.h"

/**
 * set_string - setsthe value of a pointer to s char
 * @s: pointer to change
 * @to: string to change pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
