#include "function_pointers.h"
/**
 *print_name - function that prints a name
 *@name:bob
 *@f: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}