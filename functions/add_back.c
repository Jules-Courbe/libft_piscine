#include "utile.h"

void	add_back(t_node **head, t_node *new_node)
{
	t_node *tmp;

	if (new_node == NULL)
		return ;
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
}
