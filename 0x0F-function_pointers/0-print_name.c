#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints the name
 * @name: name of string
 * @f: function
 * Return: theres nothing getting returned
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
