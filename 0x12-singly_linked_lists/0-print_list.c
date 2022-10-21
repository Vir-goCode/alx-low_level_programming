#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
if (h == NULL)
return (0);
printf("[%u] %s\n", h->len, h->str);

if (h->next != NULL)
return (print_list(h->next) + 1);
return (1);
}
