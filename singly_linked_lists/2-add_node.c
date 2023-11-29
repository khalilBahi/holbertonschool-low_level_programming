#include "lists.h"
/**
 * *add_node - function that prints all the elements of a list_t list
 * @head:pointer to first node
 * @str:pointeur
 * Return: i element count
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));

	if (n == NULL)
	{
		return (NULL);
	}

	n->str = strdup(str);
	n->len = strlen(n->str);

	n->next = *head;
	*head = n;

	return (n);
	free(n);
}
