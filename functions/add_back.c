#include "utile.h"

void	add_back(t_node **head, t_node *new_node)
{
	t_node *tmp;
	t_node *next;

	if (new_node == NULL)
		return (1);
	if (*head == NULL)
	{
		head = new_node;
	}
	else 
		while (tmp != NULL)
		{
			tmp = tmp->next;
		}
}
