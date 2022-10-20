#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints a string before the main function is executed.
 */

void hare(void)
{
	printf("school, fgddf\n");
}
