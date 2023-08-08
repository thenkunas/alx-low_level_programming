#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes charaacter
 * @c:prints character
 *
 * Return:  1.
 * \ -1 is returned on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
