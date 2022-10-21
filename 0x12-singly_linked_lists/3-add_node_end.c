#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strnlen - returns the length of a string
 * @s: string to count
 * Return: lenth of string
 */

int _strnlen(const char *s)
{
int i;

if (s == NULL)
return (0);
for (i = 0; s[i] != '\0'; i++);
return (i);
}

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;

temp->next = new;
return (new);
}
return (new);
