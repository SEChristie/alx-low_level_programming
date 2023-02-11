#include "lists.h"

/**
 * add_nodeint - adds a node at the begining of a list.
 * @head: current head address
 * @n: number to fill the node
 * Return: the adress of new_node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
