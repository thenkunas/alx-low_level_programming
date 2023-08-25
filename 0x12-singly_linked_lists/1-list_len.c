#include <stdlib.h>
#include "lists.h"

/**
 * list_len -it returns number in linked list
 * @h: pointer 
 *
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
