#include "lists.h"
/**
 * *add_node_end - function that prints all the elements of a list_t list
 * @head:pointer to first node
 * @str:pointeur
 * Return: i element count
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *n = malloc(sizeof(list_t));
    list_t *l = *head;

    if (n == NULL)
    {
        free(n);
        return (NULL);
    }
    n->str = strdup(str);
    if (n->str == NULL)
    {
        free(n);
        return (NULL);
    }

    n->len = strlen(n->str);

    n->next = NULL;
    if (*head == NULL)
    {
        *head = n;
    }
   else
    {
        while (l->next!=NULL)
        {
            l = l->next;
        }
        l->next = n;
    }
    return (n);
}
