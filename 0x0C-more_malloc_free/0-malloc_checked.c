#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory.
 * @j: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int j)
{
	char *p;

	p = malloc(j);
	if (p == NULL)
		exit(98);
	return (p);
}
