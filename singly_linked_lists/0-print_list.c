#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h:is the number of integers
 * Return: count
 */
size_t print_list(const list_t *h)
{
    size_t i;
    const list_t *p = h;

    while (p != NULL)
    {
        if (p->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", p->len, p->str);
        }

        p = p->next;
        i++;
    }

    return (i);
}