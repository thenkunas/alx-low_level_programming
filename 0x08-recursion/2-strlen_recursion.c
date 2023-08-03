#include "main.h"
/**
 * _strlen_recursion - Return string length
 * @s: measurement of string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
