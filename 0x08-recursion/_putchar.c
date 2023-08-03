#include "main.h"
#include <unistd.h>
/**
 * _putchar - write stdout character
 * @c: character
 *
 * Return: 1.
 *  -1 is returned on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
