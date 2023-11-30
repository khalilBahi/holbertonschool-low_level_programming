#include "lists.h"
/**
 * *add_node - function that prints all the elements of a list_t list
 * @head:pointer to first node
 * @n:pointeur
 * Return: nn
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));

	if (nn != NULL)
	{
		return (NULL);
	}

	nn->n = n;
	nn->prev = NULL;
	nn->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = nn;
	}

	*head = nn;
	return (nn);
}
