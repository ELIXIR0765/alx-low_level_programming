#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the code.
 *
 * Return: nth node. If node does not exists, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int array = 0;

	while (node && array != index)
	{
		array++;
		node = node->next;
	}
	if (node && array == index)
		return (node);
	return (NULL);
}
